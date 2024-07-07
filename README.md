# Portfolio - Flipkart

<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>Ankit Kumar</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
<dt>Portfolio Domain</dt>
<dd>Flipkart</dd>
</dl>

* * *

## Table of Contents
* [🌟 Introduction](#introduction)
* [💼 Why Portfolio?](#why-portfolio?)
* [🎯 Objectives](#objectives)
* [ Business Cases](#business-cases)
* [🔚 Conclusion](#conclusion)
* [📑 References](#references)

* * *

<img src="https://logos-world.net/wp-content/uploads/2020/11/Flipkart-Logo.png" height="400px" width="1200px">

## 🌟 Introduction

Flipkart, established in 2007, has emerged as a pivotal player in India's dynamic e-commerce landscape, initially focusing on books and rapidly expanding to encompass a wide range of categories such as electronics, fashion, and home essentials. This e-commerce giant continues to innovate, leveraging advanced technologies and strategic use of algorithms to enhance operational efficiency and customer satisfaction. In my Flipkart Portfolio, inspired by insights from the Algorithmic Problem Solving (APS) course at KLE Technological University, I delve into how these algorithms are instrumental in solving intricate challenges within online retail, showcasing their practical applications in optimizing processes and elevating user experiences.

* * *

## 💼 Why Portfolio?

A portfolio showcasing algorithms from the Algorithmic Problem Solving (APS) course can effectively address complex business challenges within Flipkart's e-commerce operations. By implementing data structures and algorithms (DSA), Flipkart can optimize critical processes such as search functionalities, checkout procedures, and customer support interactions. Algorithms learned in APS enable efficient sorting and searching mechanisms, improving product categorization and enhancing search relevance for users. Additionally, these algorithms facilitate personalized product recommendations based on detailed user behavior analysis, which enhances customer engagement and satisfaction. Moreover, DSA algorithms play a crucial role in optimizing logistics and supply chain management, ensuring timely deliveries and efficient inventory management practices. This portfolio not only demonstrates Flipkart's technological capabilities but also highlights its commitment to utilizing advanced algorithms to drive innovation, operational efficiency, and customer-centric solutions in the competitive e-commerce landscape.

* * *

## 🎯 Objectives

1. Enhance operational efficiency through streamlined processes like search functionalities and logistics.
   
2. Optimize user experience with personalized recommendations, efficient checkout processes, and responsive customer support systems.
   
3. Drive innovation by leveraging advanced algorithms to introduce new features and services.
   
4. Improve decision-making using DSA for data analytics and insights.
   
5. Ensure scalability and reliability of systems to support Flipkart's growth and handle peak traffic efficiently.

* * *

## 📊 Business Cases

### 1. Product Search

**Algorithm**: Binary Search

**Use Case** 
- This allows users on Flipkart to quickly find products by searching within a sorted list, providing them with relevant results based on their search queries.

**Challenges** 
- Ensuring the product list is always sorted, handling cases where the product may not exist, and efficiently managing large datasets to maintain quick search responses.

**Market Benefits** 
- Implementing an efficient product search system on Flipkart enhances the user experience by providing fast and accurate search results, which can lead to increased customer satisfaction and higher conversion rates.

**Time Complexity**: O(log n)

**Space Complexity:**: O(1)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/BFS.cpp)


* * *

### 2. Optimizing Checkout Process

**Algorithm**: Quick Sort
  
**Use Case** 
- This ensures quick transitions during the checkout process on Flipkart by sorting items in the cart based on priority, such as perishability, weight, or user-defined importance.
    
**Challenges** 
- Handling items with equal priority, managing the worst-case scenario for quick sort, and ensuring that the sorting process does not introduce delays during checkout.
    
**Market Benefits** 
- An optimized checkout process can reduce the time customers spend finalizing their purchases, improving user experience and increasing the likelihood of repeat business.

**Time Complexity**: O(n log n) on average

**Space Complexity**: O(1), if we don’t consider the recursive stack space. If we consider the recursive stack space then, in the worst case quicksort could make O ( N ).

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/QuickSort.cpp)

* * *

### 3. Product Recommendation System

**Algorithm**: Depth First Search (DFS)

**Use Case** 
- This suggests products to Flipkart users based on their behavior by traversing a graph of user-product interactions, identifying patterns and preferences.

**Challenges** 
- Building and maintaining an extensive user-product interaction graph, ensuring real-time recommendations, and handling the complexity of large graphs efficiently.

**Market Benefits** 
- Personalized product recommendations can significantly enhance user engagement and drive higher sales by presenting customers with items that match their interests.

**Time Complexity**: O(V + E) where V is vertices (users/products) and E is edges (interactions)

**Space Complexity**: O(V + E)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/DFS.cpp)

* * *

### 4. Flash Sale Management

**Algorithm**: Radix Sort

**Use Case:** 
- This algorithm efficiently manages high traffic during flash sales on Flipkart by sorting users based on their request times in a non-comparative manner, ensuring fair and orderly processing.

**Challenges:** 
- The main challenges include handling large volumes of simultaneous requests, maintaining fairness in access to limited-time deals, and preventing system overload during peak times.

**Market Benefits:** 
- Implementing Radix Sort for flash sale management enhances user experience by facilitating smooth and equitable participation. This approach increases customer satisfaction and promotes loyalty by ensuring that all users have a fair chance to avail of offers.

**Time Complexity**: O(d * (n + k)), where d is the number of digits in the maximum number, n is the number of elements, and k is the radix (base) of the number system being used.

**Space Complexity**: O(n + k)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/RadixSort.cpp)

* * *

### 5. Order Processing

**Algorithm**: Priority Queue (Heap Sort)

**Use Case** 
- This prioritizes orders for dispatch on Flipkart based on criteria such as delivery time, product type, or customer priority, optimizing the order fulfillment process.
  
**Challenges**
- Dynamically adjusting priorities, managing a large volume of orders efficiently, and maintaining system performance under high load.
  
**Market Benefits**  
- Efficient order processing can reduce delivery times, optimize logistics, and enhance customer satisfaction by ensuring timely and prioritized dispatch of orders.

**Time Complexity**: O(n log n)

**Space Complexity**: O(1)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/MaxHeap.cpp)

* * *

### 6. Customer Support Chat

**Algorithm**: Queue (BFS)

**Use Case**
- This manages customer queries on Flipkart by using a queue to ensure first-come, first-served responses, improving the overall support experience.

**Challenges**  
- Handling peak times with high query volumes, maintaining response quality, and ensuring fair management of customer queries.
  
**Market Benefits**  
- An efficient customer support system enhances user experience, reduces wait times, and improves customer satisfaction, leading to higher retention rates.

**Time Complexity**: O(V + E)

**Space Complexity**: O(V + E)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/BFS.cpp)

* * *

### 7. Delivery Route Optimization

**Algorithm**: Dijkstra's Algorithm

**Use Case**  
- This optimizes delivery routes for couriers on Flipkart to minimize travel time and costs, ensuring efficient logistics operations.

**Challenges**  
- Dealing with dynamic traffic conditions, real-time route adjustments, and managing large geographic areas with numerous delivery points.

**Market Benefits**  
- Optimized delivery routes reduce operational costs, shorten delivery times, and improve customer satisfaction through timely deliveries.

**Time Complexity**: O(V^2) or O(E + V log V) with a priority queue

**Space Complexity**: O(V)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/Dijkstra.cpp)

* * *

### 8. Product Categorization

**Algorithm**: Trie

**Use Case**  
- This classifies products into various categories on Flipkart, improving search and navigation for users by organizing products hierarchically.

**Challenges**  
- Handling a large number of categories, managing dynamic updates to the product catalog, and ensuring efficient search within categories.

**Market Benefits**  
- Efficient product categorization enhances the user experience by making it easier to find products, increasing user engagement and sales.

**Time Complexity**: O(m) for insert/search where m is the length of the key

**Space Complexity**: O(n * m) where n is the number of keys

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/Trie.cpp)

* * *

### 9. User Authentication

**Algorithm**: Hashing

**Use Case**  
- This securely handles user logins on Flipkart by storing and verifying passwords using hashing, ensuring data security and integrity.

**Challenges**  
- Protecting against brute force attacks, managing hash collisions, and ensuring the secure storage of user credentials.

**Market Benefits**  
- Secure user authentication protects against unauthorized access, enhances user trust, and improves the overall security of the e-commerce platform.

**Time Complexity**: O(1) for average case

**Space Complexity**: O(n)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/sha256.cpp)

* * *

### 10. Review and Rating System

**Algorithm**: AVL Tree

**Use Case**  
- This efficiently handles product reviews and ratings on Flipkart by maintaining balanced updates and queries in an AVL tree structure.

**Challenges**  
- Ensuring the tree remains balanced with frequent updates, providing quick access to review data, and handling a large volume of reviews.

**Market Benefits**  
- A well-managed review and rating system improves user trust and engagement, providing valuable feedback to other customers and enhancing the overall shopping experience.

**Time Complexity**: O(log n)

**Space Complexity**: O(n)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/avl.cpp)

---

### 11. Search Autocomplete

**Algorithm**: Trie

**Use Case**  
- Providing search suggestions as users type in the search bar on Flipkart, enhancing search efficiency and user experience.

**Challenges**  
- Managing a large dictionary of terms, ensuring quick response times for suggestions, and handling dynamic updates to the dictionary.

**Market Benefits**  
- Improves the search experience by offering faster and more accurate suggestions, leading to enhanced user satisfaction and engagement.

**Time Complexity**: O(m) for insert/search where m is the length of the key

**Space Complexity**: O(n * m) where n is the number of keys

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/trieauto.cpp)

---

### 12. Duplicate Product Detection

**Algorithm**: KMP Algorithm

**Use Case**  
- Identifying duplicate product listings on Flipkart to maintain a clean and organized product catalog.

**Challenges**  
- Handling large volumes of product data, ensuring accurate detection of duplicates, and managing dynamic updates to the product listings.

**Market Benefits**  
- Reduces clutter in the product catalog, enhances catalog quality, and improves user experience by providing accurate and unique listings.

**Time Complexity**: O(n + m) where n is the length of the text and m is the length of the pattern

**Space Complexity**: O(m)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/kmp.cpp)

---

### 13. Product Comparison

**Algorithm**: Segment Tree

**Use Case**  
- Allowing users on Flipkart to compare multiple products efficiently based on various attributes.

**Challenges**  
- Managing dynamic updates to product attributes, ensuring quick query responses for comparisons, and handling large datasets.

**Market Benefits**  
- Facilitates informed decision-making by users, improving user satisfaction and potentially increasing sales.

**Time Complexity**: O(log n) for updates and queries

**Space Complexity**: O(n)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/segmenttrees.cpp)

---

### 14. Image Storage and Retrieval

**Algorithm**: B-Tree

**Use Case**  
- Efficiently storing and retrieving product images on Flipkart to ensure quick access and updates for a large volume of image data.

**Challenges**  
- Managing large volumes of image data, ensuring quick retrieval times, and handling dynamic updates and additions to the image database.

**Market Benefits**  
- Enhances the user experience by providing quick and reliable access to product images, crucial for informed purchasing decisions.

**Time Complexity**: O(log n)

**Space Complexity**: O(n)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/Btree.cpp)

---

### 15. Product Recommendation by Similarity

**Algorithm**: KMP Algorithm

**Use Case**  
- Recommending similar products to users on Flipkart by matching patterns in product descriptions.

**Challenges**  
- Handling large datasets of product descriptions, ensuring accurate and relevant similarity matches, and providing real-time recommendations.

**Market Benefits**  
- Increases user engagement and improves the shopping experience by presenting users with items they are likely to be interested in.

**Time Complexity**: O(n + m)

**Space Complexity**: O(m)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/kmp.cpp)

---

### 16. User Activity Tracking

**Algorithm**: B+ Tree

**Use Case**  
- Tracking user behavior on Flipkart to provide insights for personalization and targeted marketing efforts.

**Challenges**  
- Managing high write throughput, ensuring data consistency and integrity, and efficiently handling large volumes of activity data.

**Market Benefits**  
- Enables better personalization and targeted marketing, leading to improved user experience and higher conversion rates.

**Time Complexity**: O(log n) for both reads and writes

**Space Complexity**: O(log n)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/Bplus.cpp)

---

### 17. Coupon Code Validation

**Algorithm**: Hash Set

**Use Case**  
- Validating discount codes and vouchers quickly on Flipkart, ensuring a seamless checkout process for users.

**Challenges**  
- Managing a large number of coupon codes, ensuring quick and accurate validation, and handling potential collisions in the hash set.

**Market Benefits**  
- Enhances the checkout experience by reducing wait times and improving user satisfaction, leading to higher conversion rates.

**Time Complexity**: O(1) on average

**Space Complexity**: O(n)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/hashset.cpp)

---

## 📑 References
- https://www.geeksforgeeks.org/binary-search/
- https://www.w3schools.com/dsa/dsa_algo_quicksort.php
- https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/
- https://www.javatpoint.com/radix-sort
- https://www.geeksforgeeks.org/introduction-to-max-heap-data-structure/
- https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/
- https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/
- https://www.geeksforgeeks.org/trie-insert-and-search/
- https://www.geeksforgeeks.org/introduction-to-avl-tree/
- https://cp-algorithms.com/string/prefix-function.html
- https://cp-algorithms.com/data_structures/segment_tree.html
- https://www.geeksforgeeks.org/introduction-of-b-tree-2/
- https://www.geeksforgeeks.org/introduction-of-b-tree/
- https://www.geeksforgeeks.org/hashing-data-structure/
