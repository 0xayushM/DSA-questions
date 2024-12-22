#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void levelTraversal(TreeNode* node1, TreeNode* node2, int level) {
    if(node1 == nullptr || node2 == nullptr)
        return;
     if(level %2 == 0) {
        int temp = node1->val;
        node1->val = node2->val;
        node2->val = temp;
     }
     levelTraversal(node1->left, node2->right, level+1);
     levelTraversal(node1->right, node2->left, level+1);
}

TreeNode* reverseOddLevels(TreeNode* root) {
    levelTraversal(root->left, root->right, 0);
    return root;
}


TreeNode* vectorToTree(vector<int>& nums) {
    if(nums.empty() || nums[0] == -1)
        return nullptr;
    queue<TreeNode*> q;
    TreeNode* root = new TreeNode(nums[0]);
    q.push(root);
    int i=1;
    while(!q.empty() && i < nums.size()) {
        TreeNode* current = q.front();
        q.pop();
        if(i < nums.size() && nums[i] != -1) {
            current->left = new TreeNode(nums[i]);
            q.push(current->left);
        }
        i++;
        if(i < nums.size() && nums[i] != -1) {
            current->right = new TreeNode(nums[i]);
            q.push(current->right);
        }
        i++;
    }
    return root;
}

void printTree(TreeNode* root) {
    if (!root) return;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int levelSize = q.size();
        for (int i = 0; i < levelSize; ++i) {
            TreeNode* node = q.front();
            q.pop();
            cout << node->val << " ";
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        int r;
        cin >> r;
        nums.push_back(r);
    }
    TreeNode* root = vectorToTree(nums);
    printTree(root);
    printTree(reverseOddLevels(root));
}