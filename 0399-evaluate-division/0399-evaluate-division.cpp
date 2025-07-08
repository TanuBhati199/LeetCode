class Solution {
public:

    void dfsComponents(int root,int start, vector<vector<pair<int,double>>>& adj, vector<int>& vis, vector<int>& comp){
        vis[start] = 1;
        comp[start] = root;
        for(auto x: adj[start]){
            if(!vis[x.first]){
                dfsComponents(root, x.first, adj, vis, comp);
            }
        }
    }

    bool traverse(int start, int end, double& val, vector<vector<pair<int,double>>> &adj, int parent){
        if(start == end) return true;
        for(auto x: adj[start]){
            if(x.first == parent) continue;
            val = val*(x.second);
            if(!traverse(x.first , end, val, adj, start)) val = val/x.second;
            else return true;
        }
        return false;
    }

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        map<string, int> mp;
        int cnt = 0;
        for(auto p: equations){
            string x = p[0];
            string y = p[1];
            if(mp.find(x) == mp.end()) mp[x] = cnt++;
            if(mp.find(y) == mp.end()) mp[y] = cnt++;
        }   
        vector<vector<pair<int,double>>> adj(cnt);
        for(int i=0;i<equations.size();i++){
            int from = mp[equations[i][0]];
            int to = mp[equations[i][1]];
            adj[from].push_back({to, values[i]});
            adj[to].push_back({from, 1/values[i]});
        }  
        vector<int> comp(cnt, 0);
        vector<int> vis(cnt, 0);
        for(int i=0;i<cnt;i++){
            if(!vis[i]){
                dfsComponents(i, i, adj, vis, comp);
            }
        }

        vector<double> ans;
        for(auto x: queries){
            string from = x[0];
            string to = x[1];
            if(mp.find(from) == mp.end() || mp.find(to) == mp.end() || comp[mp[from]] != comp[mp[to]]) { ans.push_back(-1); continue; }
            double val = 1.0;
            traverse(mp[from], mp[to], val, adj, -1);
            ans.push_back(val);
        }

        return ans;

    }
};