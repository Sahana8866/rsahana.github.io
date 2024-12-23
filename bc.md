## **Business Cases**

## **1. Traffic signal synchronization across multiple intersections.**

This problem involves ranking streets or intersections based on traffic congestion to prioritize areas that need improvements. By analyzing congestion levels, cities can optimize traffic flow and allocate resources effectively to reduce congestion and improve commuting times.

We can use **Quick Sort** to address this problem, this algorithm takes in the congestion levels of different places and ranks them as per the traffic density, thus allowing the user to decide which place with that respective congestion level has to be prioritized.

### Code : [Quick Sort](https://github.com/Sahana8866/rsahana.github.io/blob/main/traffic_quick_sort.cpp)


### Key Aspects

1. **Improved Traffic Flow**: Prioritizes congestion hotspots for better management.
2. **Reduced Commute Time**: Minimizes delays by optimizing traffic patterns.
3. **Efficient Resource Allocation**: Focuses efforts on the most congested areas.
4. **Environmental Impact**: Reduces emissions by easing traffic jams.
5. **Increased Safety**: Lowers accident risks by improving traffic management.
6. **Data-Driven Decisions**: Enables informed urban planning and quick responses.

### Time Complexity
**Best Case:** O(n log n) 
**Average Case:** O(n log n)
 **Worst Case:** O(n^2)

### Conclusion
Quick Sort is ideal to sort the traffic areas and prioritize the one with the highest traffic first.

## **2. Urban Flooding.**
Efficiently navigate urban flooding by finding alternate routes in emergencies.  
This requires identifying safe paths through the city's road network while avoiding flooded streets.
  
This problem can be addressed using **DFS** approach as it helps in exploring all possible routes systematically. It works well in emergencies for finding alternate paths thus minimizing risks caused by floods in urban areas.

### Code : [DFS](https://github.com/Sahana8866/rsahana.github.io/blob/main/flooding_dfs.cpp)

### Key Aspects

1. **Safety and Efficiency**  
   Ensure suggested routes are both safe and quick to traverse.  
2. **Emergency Access**  
   Reserve safe routes for emergency services like ambulances and fire trucks.
3. **Scalability**  
   Adapt the solution for expanding cities and varying flood intensities.  

### Time Complexity
O(|V|^2)

### Conclusion
DFS is ideal for efficiently navigating emergencies like urban flooding.

## **3. Waste Collection Routes.**

Waste collection routes in a city must be optimized to **minimize total travel distance** while ensuring every collection point is covered. The road network can be modeled as a graph:                                                                                                                                             
 **Nodes**: Waste collection points or intersections.                                                                                                              
**Edges**: Roads with weights representing travel distances.                                                                                                       
Some roads may have **negative weights** (e.g., fuel-efficient shortcuts), making the **Bellman-Ford** algorithm ideal for this scenario.                          

## Code : [Bellman-Ford](https://github.com/Sahana8866/rsahana.github.io/blob/main/WasteC_BellF.cpp)

### Key Aspects

1. **Cost Minimization**  
    Minimize the total distance traveled while ensuring all collection points are serviced.
2.  **Route Constraints**  
    Account for road conditions, vehicle capacity, and time windows for collection.
3. **Environmental Impact**  
    Reduce fuel consumption and emissions by optimizing routes.
4. **Clear Communication**  
   Provide drivers with precise, easy-to-follow instructions for optimized routes.

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
Since we are concerned about minimizing the cost, **Kruskal's** Algorithm is the best suitable.

## Code : [Kruskal's]()

### Key Aspects

1. **Cost Minimization**  
   Focus on minimizing total construction costs while connecting all locations.
2. **Full Connectivity**  
   Ensure all major locations are connected without redundant roads.
3. **Environmental and Social Impact**  
   Avoid disruption to communities and preserve ecological areas.  
4. **Construction Feasibility**  
   Prioritize routes that are cost-effective and practical to construct.   

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

### Key Aspects
1. **Scalability**  
   Design the network to accommodate future city expansion.
2. **Equitable Distribution**  
   Ensure all areas receive an adequate and fair water supply.
3. **Resource Constraints**  
   Consider budget limitations and construction feasibility for certain routes. 
4. **Maintenance Planning**  
   Choose durable materials and routes that simplify future maintenance.  
5. **Environmental Impact**  
    Minimize disruption to ecosystems and avoid protected areas during construction.
   
### Time Complexity
We are using adjacency list with priority queue as min-heap thus, O(|E|log|V|)

### Conclusion
Prim’s Algorithm is ideal for developing a cost-effective and equitable water pipeline network, minimizing the overall construction cost while ensuring connectivity between all locations. 
