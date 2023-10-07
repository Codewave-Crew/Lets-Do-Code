class Solution {
public:
    bool check(int i,int V,vector<vector<int>>& graph,vector<int>&color){
        queue<int>q;
        q.push(i);
        color[i]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int i: graph[node]){
                if(color[i]==-1){
                    color[i]=!color[node];
                    q.push(i);
                }
                if(color[i]==color[node]) return false;
            }
            
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color;
        color.assign(n,-1);
        for(int i=0;i<n;i++) color[i]=-1;
	    for(int i=0;i<n;i++){
	        if(color[i]==-1){
	            if(check(i,n,graph,color)==false)
	               return false;
	        }
	    }
	    return true;
    }
};
