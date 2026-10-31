#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node *buildTree(vector<int> preorder)
{ // O(n)
    idx++;
    if (preorder[idx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder);  // left
    root->right = buildTree(preorder); // right

    return root;
}

void topView(Node *root)
{                               // O(nlogn)
    queue<pair<Node *, int>> q; // {node,HD}
    map<int, int> m;            //<HD,Node val>
    q.push({root, 0});

    while (q.size() > 0)
    {
        Node *curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if (m.find(currHD) == m.end())
        { // not exist
            m[currHD] = curr->data;
        }

        if (curr->left != NULL)
        {
            q.push({curr->left, currHD - 1});
        }

        if (curr->right != NULL)
        {
            q.push({curr->right, currHD + 1});
        }
    }
    cout << "topView : ";
    for (auto it : m)
    {
        cout << it.second << " ";
    }
    cout << endl;
}

void bottomView(Node *root)
{                               // O(nlogn)
    queue<pair<Node *, int>> q; // {node,HD}
    map<int, int> m;            //<HD,Node val>
    q.push({root, 0});

    while (q.size() > 0)
    {
        Node *curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if (m.find(currHD) == m.end())
        { // not exist
            m[currHD] = curr->data;
        }

        if (m.find(currHD) != m.end())
        { // exist
            m[currHD] = curr->data;
        }

        if (curr->left != NULL)
        {
            q.push({curr->left, currHD - 1});
        }

        if (curr->right != NULL)
        {
            q.push({curr->right, currHD + 1});
        }
    }
    cout << "bottomView : ";
    for (auto it : m)
    {
        cout << it.second << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> tree = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(tree);
    topView(root);
    bottomView(root);
    return 0;
}