class Solution
{
    private :
    void dfs(int vertex,int vis[],stack<int>&st,vector<int>ad[])
    {
        vis[vertex] = true;
        for(auto it:ad[vertex])
        {
            if(!vis[it]) dfs(it,vis,st,ad);
        }
        st.push(vertex);
    }
    
	public:
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int vis[V] ={0};
	    stack<int>st;
	    for(int i=0;i<V;++i) {
	        if(!vis[i]) {
	            dfs(i,vis,st,adj);
	        }
	    }
	    vector<int> ans;
	    while(!st.empty())
	    {
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};
