### Business Cases

## 1. Traffic signal synchronization across multiple intersections.

This problem involves ranking streets or intersections based on traffic congestion to prioritize areas that need improvements. By analyzing congestion levels, cities can optimize traffic flow and allocate resources effectively to reduce congestion and improve commuting times.

We can use **Quick Sort** to address this problem, this algorithm takes in the congestion levels of different places and ranks them as per the traffic density, thus allowing the user to decide which place with that respective congestion level has to be prioritized.

### Code : [Quick Sort](https://github.com/Sahana8866/rsahana.github.io/blob/b51279ebb79c833e652becfe1b05514b10af27ba/traffic_quick_sort.cpp)


### Key Benefits:

1. **Improved Traffic Flow**: Prioritizes congestion hotspots for better management.
2. **Reduced Commute Time**: Minimizes delays by optimizing traffic patterns.
3. **Efficient Resource Allocation**: Focuses efforts on the most congested areas.
4. **Environmental Impact**: Reduces emissions by easing traffic jams.
5. **Increased Safety**: Lowers accident risks by improving traffic management.
6. **Data-Driven Decisions**: Enables informed urban planning and quick responses.

#### **Time Complexity**
**Best Case:** O(n log n)  
**Average Case:** (O(n \log n)) 
 **Worst Case:** O(n^2)

## 2. Urban Flooding.
Efficiently navigate urban flooding by finding alternate routes in emergencies.  
This requires identifying safe paths through the city's road network while avoiding flooded streets.
  
This problem can be addressed using **DFS** approach as it helps in exploring all possible routes systematically. It works well in emergencies for finding alternate paths thus minimizing risks caused by floods in urban areas.

### Code : [DFS]()

### **Key Benefits of Using DFS**

1. **Systematic Exploration**: Ensures all possible routes are considered.  
2. **Efficient in Sparse Graphs**: Performs well with \(O(V + E)\) time complexity.  
3. **Dynamic Adaptability**: Can handle real-time updates like flooded roads.  
4. **Minimal Memory Usage**: Uses \(O(V)\) space, suitable for large networks.  
5. **Backtracking Capability**: Easily finds alternate routes when paths are blocked.  

### Time Complexity



### **Conclusion**
DFS is ideal for efficiently navigating emergencies like urban flooding.

## 3.

Waste collection routes in a city must be optimized to **minimize total travel distance** while ensuring every collection point is covered. The road network can be modeled as a graph:
 **Nodes**: Waste collection points or intersections.
**Edges**: Roads with weights representing travel distances.
Some roads may have **negative weights** (e.g., fuel-efficient shortcuts), making the **Bellman-Ford** algorithm ideal for this scenario.

## Code : [Bellman-Ford]()

### **Key Benefits of Bellman-Ford Algorithm**
1. **Handles Negative Weights**:
    Unlike Dijkstra’s algorithm, Bellman-Ford works with graphs containing negative edge weights.
2. **Guaranteed Shortest Paths**:
   Finds the shortest path from a single source to all nodes, ensuring optimal routes.
3. **Adaptable to Real-World Scenarios**:
   Can model dynamic conditions like road closures or detours.
4. **Ease of Implementation**:
   Simple to implement for directed or undirected graphs.
5. **Scalable**:
    Works effectively for medium-sized road networks.

### **Time Complexity**
 O(|V||E|)

### **Conclusion**
The Bellman-Ford algorithm is well-suited for optimizing waste collection routes, especially in scenarios involving negative weights or dynamic conditions.

## 4.

