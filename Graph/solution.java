import java.util.*;

public class solution {

    // object class for Edge (weighted graph and unweighted graph) 
    static class Edge {
        int start;
        int dest;
        int weight;

        public Edge(int start, int dest, int weight) {
            this.start = start;
            this.dest = dest;
            this.weight = weight;
        }

        public Edge(int start, int dest) {
            this.start = start;
            this.dest = dest;
        }
    }

    // create a graph
    public static void createGraph(ArrayList<Edge>[] graph) {
        for(int i=0;i<graph.length;i++) {
            graph[i] = new ArrayList<Edge>();
        }
        graph[0].add(new Edge(0,1));
        graph[0].add(new Edge(0,2));
        
        graph[1].add(new Edge(1,0));
        graph[1].add(new Edge(1,3));
        
        graph[2].add(new Edge(2,0));
        graph[2].add(new Edge(2,4));
        
        graph[3].add(new Edge(3,1));
        graph[3].add(new Edge(3,4));
        graph[3].add(new Edge(3,5));
        
        graph[4].add(new Edge(4,2));
        graph[4].add(new Edge(4,3));
        graph[4].add(new Edge(4,5));
        
        graph[5].add(new Edge(5,3));
        graph[5].add(new Edge(5,4));
        graph[5].add(new Edge(5,6));
        
        graph[6].add(new Edge(6,5));
    }

    //create graph for disconnected components
    public static void createDisconnectedGraph(ArrayList<Edge>[] graph2) {
        for(int i=0;i<graph2.length;i++){
            graph2[i] = new ArrayList<Edge>();
        }
        graph2[0].add(new Edge(0,1));
        graph2[1].add(new Edge(1,0));
        graph2[1].add(new Edge(1,2));
        graph2[2].add(new Edge(2,1));

        graph2[3].add(new Edge(3,4));
        graph2[4].add(new Edge(4,3));
    }

    // BFS function
    public static void BFS(ArrayList<Edge>[] graph, int v, int start) {
        Queue<Integer> q = new LinkedList<>();
        boolean[] visited = new boolean[v];
        q.add(start);
        System.out.print("BFS traversal = ");
        while(!q.isEmpty()) {
            int current = q.remove();
            if(visited[current] == false) {
                System.out.print(current+" ");
                visited[current] = true;

                for(int i=0;i<graph[current].size();i++) {
                    Edge e = graph[current].get(i);
                    q.add(e.dest);
                }
            }
        }
        System.out.println("");
    }

    // BFS for disconnected graph components
    public static void BFSDisconnected(ArrayList<Edge>[] graph, int v, boolean[] visited, int start) {
        Queue<Integer> q = new LinkedList<>();
        q.add(start);
        while(!q.isEmpty()) {
            int current = q.remove();
            if(visited[current] == false) {
                System.out.print(current+" ");
                visited[current] = true;
                for(int i=0;i<graph[current].size();i++) {
                    Edge e = graph[current].get(i);
                    q.add(e.dest);
                }
            }
        }
        System.out.println();
    }
    
    // DFS function
    public static void DFS(ArrayList<Edge>[] graph, int curr, boolean[] visited) {
        System.out.print(curr + " ");
        visited[curr] = true;
        for(int i=0;i<graph[curr].size();i++) {
            Edge e = graph[curr].get(i);
            if(visited[e.dest] == false)
                DFS(graph, e.dest, visited);
        }
    }

    //print all paths fro source to target
    public static void printAllPaths(ArrayList<Edge>[] graph, boolean[] visited, int curr, String path, int target) {
        if(curr == target) {
            System.out.println(path);
            return;
        }

        for(int i=0;i<graph[curr].size();i++) {
            Edge e = graph[curr].get(i);
            if(!visited[e.dest]) {
                visited[curr] = true;
                printAllPaths(graph, visited, e.dest, path + e.dest, target);
                visited[curr] = false;
            }
        }
    }


    public static void main(String[] args) {
        /*
         *        1----3  
         *       /     | \
         *      0      |  5 --- 6
         *       \     |  /   
         *        2----4  
         */
        int v = 7;
        ArrayList<Edge> graph[] = new ArrayList[v];
        
        // create graph function called
        createGraph(graph);

        // printing neighbours of 2
        System.out.print("Neighbours of 2 in the graph = ");
        for(int i=0;i<graph[2].size();i++) {
            Edge e = graph[2].get(i);
            System.out.print(e.dest+" ");
        }
        System.out.println("");
        
        // BFS traversal
        BFS(graph, v, 0);

        // DFS traversal
        boolean[] visited = new boolean[v];

        System.out.print("DFS traversal = ");
        DFS(graph, 0, visited);
        System.out.println();

        //print all paths from source to target
        System.out.println("Paths from 0 to 5 : ");
        printAllPaths(graph, new boolean[v], 0, "0", 5);

        // for disconnected component
        /* Ex - 
         *          0 --- 1 --- 2
         * 
         *              3 --- 4
         */
        int v2 = 5;
        ArrayList<Edge> graph2[] = new ArrayList[v2];

        createDisconnectedGraph(graph2);
        System.out.print("BFS traversal of disconnected graph : ");

        boolean[] visited2 = new boolean[v2];
        for(int i=0;i<v2;i++) {
            if(visited2[i] == false) 
                BFSDisconnected(graph2, v2, visited2, i);
        }
    }
}