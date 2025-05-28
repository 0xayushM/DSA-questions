import java.awt.ScrollPane;
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

    // BFS function

    public static void BFS(ArrayList<Edge>[] graph, int v) {
        Queue<Integer> q = new LinkedList<>();
        boolean[] visited = new boolean[v];
        q.add(0);
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
        BFS(graph, v);
    }
}