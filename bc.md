## **Business Cases**

## **1. Traffic signal synchronization across multiple intersections**

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

## **2. Urban Flooding**
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

## **3. Waste Collection Routes**

Waste collection routes in a city must be optimized to **minimize total travel distance** while ensuring every collection point is covered. The road network can be modeled as a graph:                                                                                                                                             
 **Nodes**: Waste collection points or intersections.                                                                                                              
**Edges**: Roads with weights representing travel distances.                                                                                                       
Some roads may have **negative weights** (e.g., fuel-efficient shortcuts), making the **Bellman-Ford** algorithm ideal for this scenario.                          

## Code : [Bellman-Ford](https://github.com/Sahana8866/rsahana.github.io/blob/main/WasteC_BellF.cpp)

### Key Aspects

1. **Distance Minimization**  
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

## **4. Optimal Placement of Recycling Centres**

A smart city aims to strategically place recycling centers to minimize the maximum travel distance for citizens to the nearest center while ensuring accessibility for all areas.

**Graph Representation:**                                                                                                                                          
**Nodes:** Represent residential and commercial areas.                                                                                                             
**Edges:** Represent roads between areas, weighted by travel time or distance.                                                                                     

**Objective:**
Minimize the maximum distance between any area and its nearest recycling center.
    
**Floyd's** Algorithm can be used since,                                                                                                                           
Computes the shortest paths between all pairs of areas.                                                                                                            
Identifies areas with long travel distances.                                                                                                                       
Optimizes placement of recycling centers to reduce travel time.                                                                                                    

## Code : [Floyd's](https://github.com/Sahana8866/rsahana.github.io/blob/main/recycle_floyd.cpp)

### Key Aspects

1. **Emergency Overflow Management**
   Identifies alternative recycling centers for **emergency rerouting** during overflows or failures.
2. **Scalability**
   This approach can be extended to other infrastructure needs, such as hospitals
3. **Accessibility and Optimization**
   Ensures all areas are within a **reasonable distance** of a recycling center.
   Facilitates **efficient waste collection** routes.

### Time Complexity
O(|V|^3) where V is the number of vertices.

### Conclusion
Floyd's algorithm is ideal to ensure that each recycling centre gets placed effectively accross the smart city, maintaining shortest paths among all pairs.

## **5. Water Pipeline Distribution**

Design a water pipeline network that ensures **equitable distribution** across various locations in a city while minimizing construction costs. The goal is to:
Connect all locations (nodes) with pipelines (edges).
Minimize the total cost of laying the pipelines (edge weights).
Ensure every location is accessible through the network (spanning tree).

The problem is modeled as a **graph**:                                                                                                                             
**Nodes**: Water supply locations or distribution points.                                                                                                          
**Edges**: Possible pipeline routes with associated construction costs.                                                                                            

**Prim's** Algorithm can be used to find the MST  and thereby form a connected graph which reaches all locations to provide water.

## Code : [Prim's](https://github.com/Sahana8866/rsahana.github.io/blob/main/water_prim.cpp)

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
O(|E|log|V|)

### Conclusion
Prim’s Algorithm is ideal for developing a cost-effective and equitable water pipeline network, minimizing the overall construction cost while ensuring connectivity between all locations. 



## 6.Optimizing Waste Collection Routes 

In **Vasanth Nagar**, a smart city, waste collection needs to be optimized for better efficiency and cost reduction. The problem can be divided into two main sub-problems:

1. **Sorting Waste Collection Points by Distance from the Depot**:  
   We need to sort all waste collection points based on their distance from the central depot to prioritize closer points for earlier collection.

2. **Finding the Shortest Path to Visit All Points**:  
   After sorting, we need to compute the shortest possible path from the depot to all collection points using an algorithm like **Bellman-Ford**, which works well for graphs with negative weights (though we don't expect negative weights in this problem).

---

## Solution Approach

### 1. **Sorting Waste Collection Points (QuickSort)**

To prioritize the collection points, we need to sort them based on their **distance** from the central depot. This allows us to visit the nearest points first, optimizing the route for time and fuel consumption.

- **QuickSort Algorithm**:  
  We use **QuickSort**, a highly efficient sorting algorithm with an average time complexity of **O(n log n)**. This algorithm works by selecting a **pivot** element and partitioning the array into elements smaller and larger than the pivot. QuickSort then recursively sorts the subarrays on either side of the pivot.

### 2. **Finding the Shortest Path (Bellman-Ford)**

Once the points are sorted, we need to find the shortest route to visit all points, starting from the central depot. The **Bellman-Ford** algorithm is well-suited for this purpose as it finds the shortest path from a single source node to all other nodes in a graph.

- **Bellman-Ford Algorithm**:  
  This algorithm works by iteratively relaxing the edges of the graph. It runs in **O(|V||E|)** time complexity, where **V** is the number of vertices (points) and **E** is the number of edges (possible paths). Bellman-Ford can also handle negative weights, although in our case, the weights (distances) are always positive.

By using Bellman-Ford, we compute the shortest distance from the depot to all other collection points, ensuring the optimal collection route.

---

## Implementation

### 1. **QuickSort Implementation**:

- The QuickSort algorithm sorts the waste collection points by calculating the Euclidean distance from the depot.
- After sorting, the points are arranged in ascending order of distance, allowing us to process closer points first.

### 2. **Bellman-Ford Implementation**:

- The Bellman-Ford algorithm is applied on the graph of waste collection points to determine the shortest distance from the depot to each collection point.
- A graph is created where the nodes represent the collection points and the edges represent the distances between them.
- The algorithm iteratively updates the shortest known distance from the depot to each point.

## Code : [bellquick](https://github.com/Sahana8866/rsahana.github.io/blob/main/bellquick.cpp)

