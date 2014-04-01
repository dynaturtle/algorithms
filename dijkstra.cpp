#include <iostream>

void dijkstra(Graph& g, node src_node, vector<int>& dist)
{
    std::fill(dist.begin(), dist.end(), MAX_INT32);
    
    vector<node_t> neighbour_nodes = adj_nodes(g, src_node);
    for (size_t i = 0; i < neighbour_nodes.size(); ++ i) {
        edge_t edge_src2nn = edge(g, src_node, neighbour_nodes[i]);
        dist[neighbour_nodes[i]] = edge_src2nn.weight;
        weight_heap.update(neighbour_nodes[i], edge_src_nn.weight);
    }
    
    for (size_t i = 0; i < nodes_num(g) - 1; ++ i){        
        node& min_node = weight_heap.top();
        vector<node> neighbour_nodes = adj_nodes(g, min_node);
        for (size_t j = 0; j < neighbour_nodes.size() ++ j){
            node& cur_node_neighbour = neighbour_nodes[j];
            edge_t edge_mn2cnn = edge(g, min_node, cur_node_neighbour);
            if (dist[cn_cnn] > dist[min_node] + edge_mn2cnn.weight) {
                dist[cn_cnn] = dist[min_node] + edge_mn2cnn.weight;
                weight_heap.update(cur_node_neighbour, dist[cn_cnn]);
            }
        }
    }
}
