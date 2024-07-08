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

### 2. Product Recommendation System

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

### 3. Flash Sale Management in E-commerce Platforms

**Algorithm:** Red-Black Tree

**Use Case:* Efficiently manage and handle large volumes of product sales within a short period during flash sales. Provides quick insertion, deletion, and lookup operations to maintain the order and availability of products during high-traffic events.

**Challenges:**
- Handling a high volume of concurrent transactions and ensuring data consistency.
- Efficiently managing stock levels and avoiding overselling or stockouts.
- Providing real-time updates on product availability and order status.
- Minimizing latency and ensuring quick response times during flash sales.

**Market Benefits:**
- Improved customer satisfaction through smooth and reliable flash sale experiences.
- Increased sales conversions by efficiently handling high traffic and transaction volumes.
- Enhanced brand reputation by providing a seamless shopping experience during peak events.

**Approach (in points):**
1. Red-Black Tree Implementation: Use a Red-Black Tree to maintain a balanced and sorted structure for products in the flash sale.
2. Efficient Operations: Implement quick insertion, deletion, and lookup operations to manage product stock levels and user purchases.
3. Concurrent Access Handling: Ensure thread-safe operations to handle multiple concurrent transactions.
4. Real-Time Updates: Provide real-time updates on product availability and order status using the tree structure.
5. Integration with Frontend: Integrate the Red-Black Tree with the frontend to display accurate product information and availability to users.

**Time Complexity:** O(log N), where N is the number of elements in the tree.

**Space Complexity:** O(N), where N is the number of elements in the tree.
  
[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/RedBlackTree.cpp)

* * *

### 4. Customer Support Chat

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

### 5. Delivery Route Optimization

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

### 6. Product Categorization

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

### 7. User Authentication

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

### 8. Review and Rating System

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

### 9. Search Autocomplete

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

### 10. Duplicate Product Detection

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

### 11. Product Comparison

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

### 12. Image Storage and Retrieval

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

### 13. Product Recommendation by Similarity

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

### 14. User Activity Tracking

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

### 15. Coupon Code Validation

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

### 16. Filter-Based Search in Flipkart

**Algorithm:** Inverted Index with Bitmaps

**Use Case:** Flipkart users often use filters to narrow down search results. For example, a user searching for mobile phones may apply filters based on brand, price range, features, etc. Efficient filtering is essential for enhancing user experience and ensuring relevant results are displayed quickly.

**Challenges**
- Large Dataset: Managing and searching through a large inventory with multiple categories.
- Multiple Filters: Handling multiple filters simultaneously, which may have dependencies or correlations.
- Real-Time Performance: Ensuring the search and filtering process is fast and responsive to maintain user satisfaction.
- Scalability: The system must scale to accommodate increasing numbers of users and products.

**Market Benefits**
- Enhanced User Experience: Quick and relevant search results improve user satisfaction and increase the likelihood of purchases.
- Increased Sales: Efficient filtering helps users find desired products faster, potentially boosting sales.
- Customer Retention: A smooth and efficient search experience can lead to higher customer retention rates.
- Competitive Edge: Superior search functionality can differentiate Flipkart from competitors.

**Approach**
- Create an inverted index where each filter attribute (e.g., brand, price range) points to a bitmap.
- Each bitmap represents whether a product satisfies a particular filter criterion (1 for yes, 0 for no).
- For each product, generate a bit representation for each filter category.
- Store these representations in an inverted index.
- Retrieve the bitmaps for each filter applied by the user.
- Perform bitwise AND operations on the retrieved bitmaps.
- Decode the resultant bitmap to get the list of product IDs that match the filters.

**Time Complexity**
- Preprocessing: O(N * M) where N is the number of products and M is the number of filter categories.
- Filtering: O(F) where F is the number of filters applied. This is because bitwise operations on bitmaps are linear in the number of products, but very fast due to hardware-level operations.

**Space Complexity**
- Inverted Index: O(N * M) where N is the number of products and M is the number of filter categories.
- Bitmaps: Each filter criterion requires a bitmap of size N (number of products), leading to a space complexity of O(N * M).

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/InvertedIndex.cpp)

---


### 17. Order Tracking

**Algorithm:** Breadth-First Search (BFS)

**Use Case:** Tracking the status of orders from placement to delivery. Provides real-time status updates to customers and internal stakeholders, enhancing transparency and operational efficiency.

**Challenges:**
- Ensuring synchronization and consistency of order statuses across various systems and databases.
- Handling large volumes of concurrent order tracking requests efficiently.
- Addressing potential delays or inconsistencies in status updates from external logistics partners.

**Market Benefits:**
- Improved customer experience through accurate and timely order status updates.
- Enhanced operational efficiency by enabling proactive management of order fulfillment processes.
- Better decision-making capabilities through real-time analytics on order processing and delivery metrics.

**Approach (in points):**
1. **Hash Map Implementation:** Use a hash map to store each order ID with its current status.
2. **BFS for Status Tracking:** Implement BFS to traverse through order statuses (e.g., ordered, shipped, delivered) and update the hash map accordingly.
3. **Real-Time Updates:** Integrate mechanisms to update order statuses in real-time based on events or notifications.
4. **Error Handling:** Implement error handling and retry mechanisms to ensure robustness in status tracking.
5. **Integration with Logistics:** Interface BFS with external logistics systems to capture and update order statuses seamlessly.

**Time Complexity:** O(V + E), where V is the number of vertices (statuses) and E is the number of edges (transitions between statuses).

**Space Complexity:** Hash Map, O(N), where N is the number of orders being tracked, assuming each order ID and status are stored in the hash map.

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/BFShashmap.cpp)

---

### 18. Search based on Price Range

**Algorithm:** Fenwick Tree (Binary Indexed Tree)

**Use Case:** Efficiently retrieve products within a specified price range to fulfill customer search queries. Enhances user experience by providing quick access to relevant products based on price filters.

**Challenges:**
- Managing dynamic updates to product prices and ensuring consistency in the Fenwick Tree.
- Handling large volumes of price data efficiently to maintain query responsiveness.
- Integrating with existing search and recommendation systems for seamless user experience.

**Market Benefits:**
- Improved user engagement through faster product search results based on price preferences.
- Enhanced conversion rates by matching customer price expectations more accurately.
- Scalability in handling increasing product catalogs and user traffic during peak periods.

**Approach:**
1. Fenwick Tree Setup: Initialize a Fenwick Tree to store cumulative sums of product counts indexed by price ranges.
2. Update Operations: Implement methods to update product prices and adjust the Fenwick Tree accordingly.
3. Query Processing: Support operations to efficiently query and retrieve products within a specified price range using the Fenwick Tree.
4. Integration: Integrate with Flipkart's search and recommendation engines to leverage price range queries in user interactions.
5. Optimization: Implement caching and indexing strategies to optimize query performance and reduce response times.

**Time Complexity:** O(N log N), where N is the number of price segments.

**Space Complexity:** O(N), where N is the number of price segments.

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/FenwickTree.cpp)

---

### 19. Sorting Products based on Filters

**Algorithm:** Quick Sort

**Use Case:** Efficiently sort and filter products based on various attributes such as price, ratings, popularity, etc., to enhance user search and browsing experience. Provides quick and accurate sorting of product lists, allowing users to easily find and compare products based on their preferences.

**Challenges:**
- Handling large datasets efficiently to maintain quick response times during peak user activity.
- Managing dynamic data updates (e.g., price changes, new ratings) and ensuring the sorting remains consistent and up-to-date.
- Integrating with various filtering criteria (e.g., price range, brand, category) while maintaining sorting efficiency.

**Market Benefits:**
- Improved user satisfaction through faster and more relevant search results.
- Enhanced product visibility, leading to higher sales conversions.
- Scalability to handle growing product catalogs and increasing user traffic.

**Approach:**
1. Quick Sort Implementation: Use Quick Sort to sort the list of products based on a chosen attribute (e.g., price, ratings).
2. Dynamic Updates: Implement mechanisms to handle updates in product attributes and maintain sorted order.
3. Multi-Attribute Sorting: Support sorting by multiple attributes, allowing users to apply secondary sorting criteria.
4. Integration with Filters: Combine sorting with filtering criteria to allow users to narrow down their search results effectively.
5. Performance Optimization: Optimize the sorting process using in-place sorting and partitioning techniques to reduce time and space complexity.

**Time Complexity:** Average Case, O(N log N), where N is the number of elements to be sorted.

**Space Complexity:** O(log N) for the stack space used in recursion.

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/QuickSort.cpp)

---

## 🔚 Conclusion

In conclusion, this portfolio showcases the application of various data structures and algorithms to solve real-world business use cases for Flipkart's e-commerce platform. Each Data Structure and Algorithm approach is meticulously selected to address specific challenges and drive market benefits. The insights and techniques gained from the Algorithmic Problem Solving (APS) course were instrumental in identifying and implementing these solutions, demonstrating the profound impact of structured algorithmic knowledge on practical, large-scale business problems. This portfolio not only highlights the synergy between theoretical learning and practical application but also underscores the importance of algorithms in transforming e-commerce experiences.

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
- https://www.geeksforgeeks.org/binary-indexed-tree-or-fenwick-tree-2/
- https://www.geeksforgeeks.org/introduction-to-red-black-tree/
- https://www.geeksforgeeks.org/inverted-index/
