#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#include <cmath>
#include <conio.h>
#include<set>
typedef long long ll;
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    map<int,int> m;
    map<int,int> m2;
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        populate(root,p,0,1);
        populate(root,q,1,1);
        int max=0;
        int ans=0;
        for(auto[k,v]:m)
        {
            if(m2[k]!=0&&v>max)
            {
                max =v;
                ans = k;
            }
        }
        return new TreeNode(ans);
    }
    TreeNode* populate(TreeNode* root,TreeNode* n,int flag,int depth)
    {
        if(flag==0)
            m[root->val]=depth;
        else
            m2[root->val]=depth;

        if(root->val == n->val)
            return root;
        else if(root->val > n->val)
            return populate(root->left,n,flag,depth+1);
        else 
            return populate(root->right,n,flag,depth+1); 
        
        return NULL;      
    }
};
int main()
{
    getch();
}