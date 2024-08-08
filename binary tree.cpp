#include<iostream>
#include<bits/stdc++.h>
using namespace std;
-----------------------------Binary tree----------------------------------------------------------------------------
----------------------------inordered traverasal---------------------------------------------------------------------
void inordered(TreeNode*root,vector<int>ans)
{
	if(root==NULL)
	{
		return ;
	}
	inordered(root->left,ans);
	ans.push_back(root->data);
	inordered(root->right,ans);
	
}
----------------------------------postordered traversal-----------------------------------------------------------------
void postordred(TreeNode*root,vector<int>&ans)
{
	if(root==NULL)
	{
		return;
	}
	postordered(root->left,ans);
	postordered(root->right,ans);
	ans.push_back(root->data);
}
---------------------------------preordered traversal--------------------------------------------------------------------
void preordered(TreeNode^root,vector<int>&ans)
{
	if(root==NULL)
	{
		return;
	}
	ans.push_back(root->data);
	preordered(root->left,root->right);
	preordered(root->right,ans);
}
----------------------------left view of binary tree----------------------------------------------------------------------
void left_view(TreeNode*root,int maxlevel,int level,vector<int>&ans;)
{
	if(root==NULL)
	{
		return;
	}
	if(maxlevel<level)
	{
		ans.push_back(root->data);
		maxlevel=level;
	}
	left_view(root,maxlevel,level+1,ans);
	right_view(root,maxlevel,level+1,ans);
}
----------------------------------------root to leaf binary tree traversal---------------------------------------------------
void root_leaf(TreeNode*root,vector<int>&ans,stack<int>&st)
{
	if(root==NULL)
	{
		return;
	}
	st.push(root->data);
	root_leaf(root->left,ans,st);
	if(root->left==NULL&&root->right==NULL)
	{
		ans.push_back(a1(st));
	}
	root_leaf(root->right,ans,st);
	st.pop();
}
vector<int>a1(stack<int>&st)
{
	vector<int>ans;
	while(!st.empty())
	{
		ans.push_back(st.top());
		st.pop();
		
			}
			reverse(ans.begin(),ans.end());
			return ans;
}

-------------------------------------------
