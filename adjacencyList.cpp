//Undirected Graph Adjacency list

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    unordered_map<int, vector<int>> umap;
    int N=10;    
    for(int i=0;i<N;i++){
        int x,y;
        cin >> x;
        cin >> y;
        umap[x].push_back(y);
        umap[y].push_back(x);
    }
    for( auto[key, nodes] : umap){
        cout << "key: " << key << " ==>  ";
        for(auto node: nodes) cout << node <<":";
        cout << endl;
    }
    
    

    return 0;
}
