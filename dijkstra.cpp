#include <iostream>

void dijkstra(Graph& g, node src_node, vector<int> dist)
{
    vector<node> neighbour_nodes = adj_nodes(g, src_node);
    for (size_t i = 0; i < nodes_num(g); ++ i) {
        if (it is neights) {
            dist[cn] = edge_src_cn.weight;
        }
        else {
            dist[cn] = MAX_INT32;
        }
    }
    
    for (size_t i = 0; i < nodes_num(g) - 1; ++ i){
        node& min_node = weight_heap.top();
        vector<node> neighbour_nodes = adj_nodes(g, min_node);
        for (size_t j = 0; j < neighbour_nodes.size() ++ j){
            node& cur_node_neighbour = neighbour_nodes[j];
            if (dist[cn_cnn] > dist[min_node] + edge_mn2cnn.weight) {
                dist[cn_cnn] = dist[min_node] + edge_mn2cnn.weight;
            }
        }
    }
}
