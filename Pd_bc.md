## Problem Definition

In the wake of frequent natural disasters such as floods, earthquakes, and fires, there is an urgent need for an intelligent disaster management system. The primary goal of this project is to design a **Smart Disaster Response and Evacuation System** that can ensure efficient rescue operations, optimal evacuation routes, real-time decision-making, and resource allocation during emergencies. By combining data-driven algorithms and automation, this system aims to minimize casualties, reduce response times, and optimize resource utilization.

### Cases :

### 1. Dynamic Resource Allocation

**Problem Statement**:  
In disaster situations, resources such as medical supplies, food, and rescue equipment must be allocated efficiently to the affected zones. The dynamic nature of these disasters means that the demand for resources can change rapidly, and we must adjust the allocation accordingly to optimize resource usage and minimize response time. The system must consider factors like resource shortages, road blockages, and changing environmental conditions.

**Key Aspects**:
- **Dynamic Conditions**: Resource needs and available routes may change in real-time.
- **Efficient Allocation**: Resources should be distributed to the most urgent zones based on proximity and need.
- **Priority Adjustment**: As the disaster evolves, priority levels for resources may shift.

**Algorithm Applied**: **Bellman-Ford Algorithm**  
- Bellman-Ford is used to find the shortest paths from a source (e.g., a supply depot) to all disaster-hit zones. This algorithm allows for adjusting paths dynamically, as the costs (e.g., road blockages or delays) can change over time, which is essential in a disaster scenario where conditions are constantly evolving.

**Time Complexity**:  
- **O(V × E)**, where `V` is the number of zones and `E` is the number of roads between zones. This is because Bellman-Ford checks each edge multiple times, making it suitable for situations where edge weights (costs) change dynamically.

## [CODE](https://github.com/Sahana8866/rsahana.github.io/blob/main/dym_bellf.cpp)
---

### 2. Disaster Impact Mapping

**Problem Statement**:
Disaster Impact Mapping involves using hashing to efficiently track and analyze the impact of disasters (e.g., flooding, fires) on Vasanth Nagar. By mapping geographical zones to disaster metrics (e.g., flood levels, damage scores), we can quickly update and query disaster data in real-time, enabling rapid response and decision-making.

**Key Aspects**:
- **Geographical Zones**: Each zone is uniquely identified (e.g., by coordinates or IDs).
- **Hashing for Efficiency**: Hash tables store and retrieve disaster data for each zone.
- **Real-time Updates**: Continuously update disaster metrics for zones during events.
- **Fast Querying**: Quick access to disaster data for specific zones or regions.

  **Algorithm Applied**: **Hashing**
  Hashing is applied to ensure fast and constant-time access (O(1)) to disaster data for each zone, allowing for real-time updates and queries during a disaster 
   event.

**Time Complexity**:  
- **Insertion/Update**: **O(1)** average time for adding or updating data.
- **Lookup**: **O(1)** average time for querying disaster data.
- **Space**: **O(n)** where `n` is the number of zones.
- **Worst-Case**: **O(n)** for hash collisions.

## [CODE](https://github.com/Sahana8866/rsahana.github.io/blob/main/impactmap_hashing.cpp)

---

### 3. Critical Infrastructure Identification

**Problem Statement**:  
Certain pieces of infrastructure, such as dams, bridges, and power plants, are critical to the functioning of the city. If these infrastructure components are damaged or destroyed during a disaster, it can lead to cascading failures and worsen the impact. Identifying these critical infrastructures before and during a disaster can help prioritize which structures need immediate attention.

**Key Aspects**:
- **Connectivity**: If a critical piece of infrastructure fails, it may disrupt services or cut off access to affected areas.
- **Infrastructure Assessment**: Identifying which components are critical and should be secured first is essential.
- **Preemptive Action**: Once identified, infrastructure components can be monitored, reinforced, or evacuated as needed.

**Algorithm Applied**: **Depth-First Search (DFS)**  
- DFS is used to traverse the infrastructure network and identify critical components. By exploring each node (infrastructure component) and its connections, DFS helps determine which parts of the network are crucial for maintaining connectivity. If a critical node (like a dam or bridge) is removed, it could disconnect key zones or cut off evacuation routes.

**Time Complexity**:  
- **O(V^2)**, where `V` is the number of infrastructure nodes and `E` is the number of connections between them. DFS visits each node and edge once, making it efficient for identifying the critical elements of the network.

## [CODE](https://github.com/Sahana8866/rsahana.github.io/blob/main/infra_dfs.cpp)
---

