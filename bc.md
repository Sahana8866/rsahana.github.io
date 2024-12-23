## **Business Cases**

## **1. Traffic signal synchronization across multiple intersections.**

This problem involves ranking streets or intersections based on traffic congestion to prioritize areas that need improvements. By analyzing congestion levels, cities can optimize traffic flow and allocate resources effectively to reduce congestion and improve commuting times.

We can use **Quick Sort** to address this problem, this algorithm takes in the congestion levels of different places and ranks them as per the traffic density, thus allowing the user to decide which place with that respective congestion level has to be prioritized.

### Code : [Quick Sort](https://github.com/Sahana8866/rsahana.github.io/blob/b51279ebb79c833e652becfe1b05514b10af27ba/traffic_quick_sort.cpp)


### Key Benefits

1. **Improved Traffic Flow**: Prioritizes congestion hotspots for better management.
2. **Reduced Commute Time**: Minimizes delays by optimizing traffic patterns.
3. **Efficient Resource Allocation**: Focuses efforts on the most congested areas.
4. **Environmental Impact**: Reduces emissions by easing traffic jams.
5. **Increased Safety**: Lowers accident risks by improving traffic management.
6. **Data-Driven Decisions**: Enables informed urban planning and quick responses.

### Time Complexity
**Best Case:** O(n log n) 
**Average Case:** O(n log n))
 **Worst Case:** O(n^2)

### Conclusion
Quick Sort is ideal to sort the traffic areas and prioritize the one with the highest traffic first.

## **2. Urban Flooding.**
Efficiently navigate urban flooding by finding alternate routes in emergencies.  
This requires identifying safe paths through the city's road network while avoiding flooded streets.
  
This problem can be addressed using **DFS** approach as it helps in exploring all possible routes systematically. It works well in emergencies for finding alternate paths thus minimizing risks caused by floods in urban areas.

### Code : [DFS]()

### Key Benefits

1. **Systematic Exploration**: Ensures all possible routes are considered.  
2. **Efficient in Sparse Graphs**: Performs well with (O(V + E)) time complexity.  
3. **Dynamic Adaptability**: Can handle real-time updates like flooded roads.  
4. **Minimal Memory Usage**: Uses (O(V)) space, suitable for large networks.  
5. **Backtracking Capability**: Easily finds alternate routes when paths are blocked.  

### Time Complexity
O(|V|^2)

### Conclusion
DFS is ideal for efficiently navigating emergencies like urban flooding.

## **3. Waste Collection Routes.**

Waste collection routes in a city must be optimized to **minimize total travel distance** while ensuring every collection point is covered. The road network can be modeled as a graph:
 **Nodes**: Waste collection points or intersections.
**Edges**: Roads with weights representing travel distances.
Some roads may have **negative weights** (e.g., fuel-efficient shortcuts), making the **Bellman-Ford** algorithm ideal for this scenario.

## Code : [Bellman-Ford]()

### Key Benefits

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

### Time Complexity
 O(|V||E|)

### Conclusion
The Bellman-Ford algorithm is well-suited for optimizing waste collection routes, especially in scenarios involving negative weights or dynamic conditions.

## **4. Road Network Design**

Design a cost-effective road network by connecting all key locations (nodes) with the minimum total construction cost. The network should:
Avoid cycles (no redundant roads).
Ensure all locations are connected (spanning tree).
Minimize total road construction costs.

The problem can be modeled as a **graph**:
**Nodes**: Locations or intersections.
**Edges**: Possible roads with weights representing construction costs.
Thus **Kruskal's** Algorithm is the best suitable.

## Code : [Kruskal's]()

### Key Benefits

1. **Minimizes Total Cost**:
    Guarantees the least expensive network by finding the MST.
2. **Works on Weighted Graphs**:
   Handles varying construction costs for different roads.
3. **Scalable**:
   Efficient for sparse graphs, common in road networks.
4. **Simple and Modular**:
    Easy to implement and extend for additional constraints (e.g., restricted areas).
5. **Global View**:
   Considers the entire graph, making it optimal for overall cost reduction.

### Time Complexity
O(|E|log|E|)

### Conclusion
Kruskal’s Algorithm is ideal for optimizing road networks, ensuring minimal construction costs while maintaining connectivity.


## **5. Water Pipeline Distribution**

Design a water pipeline network that ensures **equitable distribution** across various locations in a city while minimizing construction costs. The goal is to:
Connect all locations (nodes) with pipelines (edges).
Minimize the total cost of laying the pipelines (edge weights).
Ensure every location is accessible through the network (spanning tree).

The problem is modeled as a **graph**:
**Nodes**: Water supply locations or distribution points.
**Edges**: Possible pipeline routes with associated construction costs.

**Prim's** Algorithm can be used to find the MST  and thereby form a connected graph which reaches all locations to provide water.

## Code : [Prim's]()

### Key Benefits
1. **Efficient for Dense Graphs**:
   Prim’s algorithm is particularly effective for dense graphs (many edges), which is common in infrastructure networks like water pipelines.
2. **Minimal Total Cost**:
   Ensures the construction cost is minimized by finding the MST.
3. **Works Incrementally**:
   Builds the network step-by-step, making it easy to implement and understand.
4. **No Global Sorting**:
   Unlike Kruskal’s algorithm, Prim’s does not require sorting all edges beforehand, which can be more efficient for dense graphs.
5. **Scalable for Large Networks**:
   Prim’s can efficiently handle large networks and provide a guaranteed optimal solution for cost-effective distribution.

### Time Complexity
We are using adjacency list with priority queue as min-heap thus, O(|E|log|V|)

### Conclusion
Prim’s Algorithm is ideal for developing a cost-effective and equitable water pipeline network, minimizing the overall construction cost while ensuring connectivity between all locations. 
