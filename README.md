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

Flipkart[1](), established in 2007, has emerged as a pivotal player in India's dynamic e-commerce landscape, initially focusing on books and rapidly expanding to encompass a wide range of categories such as electronics, fashion, and home essentials. This e-commerce giant continues to innovate, leveraging advanced technologies and strategic use of algorithms to enhance operational efficiency and customer satisfaction. In my Flipkart Portfolio, inspired by insights from the Algorithmic Problem Solving (APS) course at KLE Technological University, I delve into how these algorithms are instrumental in solving intricate challenges within online retail, showcasing their practical applications in optimizing processes and elevating user experiences.

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

### 🔍 1. Product Search

**Algorithm**: Binary Search

**Use Case:** This approach will allows users on Flipkart to quickly find products by searching within a sorted list, providing them with relevant results based on their search queries.

**Challenges** 
- Ensuring the product list is always sorted, handling cases where the product may not exist, and efficiently managing large datasets to maintain quick search responses.

**Market Benefits** 
- Implementing an efficient product search system on Flipkart enhances the user experience by providing fast and accurate search results, which can lead to increased customer satisfaction and higher conversion rates.

**Approach:**
- Sorting Products: Ensure the list of products is sorted based on the desired attribute (e.g., name, price).
- Binary Search Implementation: Applying the binary search algorithm to quickly locate products matching the search query.

**Time Complexity**: O(log n)

**Space Complexity**: O(1)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/BFS.cpp) [[2]](https://www.geeksforgeeks.org/binary-search/)


* * *

### 🤖 2. Product Recommendation System

**Algorithm**: Depth First Search (DFS)

**Use Case** Flipkart users by analyzing their behavior and interactions. By traversing a graph of user-product interactions, it identifies patterns and preferences, allowing for highly personalized recommendations that align with individual user interests and shopping habits.

**Challenges** 
- Building and maintaining an extensive user-product interaction graph, ensuring real-time recommendations, and handling the complexity of large graphs efficiently.

**Market Benefits** 
- Personalized product recommendations can significantly enhance user engagement and drive higher sales by presenting customers with items that match their interests.

**Approach:**
- Construct a graph where nodes represent users and products, and edges represent interactions between them.
- Use DFS to traverse the graph, exploring user interactions to identify patterns and preferences.
- Continuously update the graph to reflect new interactions and behaviors for real-time recommendation accuracy.
- Optimize the traversal process to manage large graphs efficiently, ensuring quick recommendation generation.

**Time Complexity**: O(V + E) where V is vertices and E is edges

**Space Complexity**: O(V + E)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/DFS.cpp) [[3]](https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/)

---

### 3. 🔍 Search based on Price Range

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

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/FenwickTree.cpp) [[4]](https://www.geeksforgeeks.org/binary-indexed-tree-or-fenwick-tree-2/)

---

### ⚡ 4. Flash Sale Management in E-commerce Platforms

**Algorithm:** Red-Black Tree

**Use Case:* Efficiently manage and handle large volumes of product sales within a short period during flash sales. Provides quick insertion, deletion, and lookup operations to maintain the order and availability of products during high-traffic events.

**Challenges:**
- Handling a high volume of concurrent transactions and ensuring data consistency.
- Efficiently managing stock levels and avoiding overselling or stockouts.
- Minimizing latency and ensuring quick response times during flash sales.

**Market Benefits:**
- Improved customer satisfaction through smooth and reliable flash sale experiences.
- Increased sales conversions by efficiently handling high traffic and transaction volumes.

**Approach**
1. Red-Black Tree Implementation: Use a Red-Black Tree to maintain a balanced and sorted structure for products in the flash sale.
2. Efficient Operations: Implement quick insertion, deletion, and lookup operations to manage product stock levels and user purchases.
3. Concurrent Access Handling: Ensure thread-safe operations to handle multiple concurrent transactions.
4. Real-Time Updates: Provide real-time updates on product availability and order status using the tree structure.
5. Integration with Frontend: Integrate the Red-Black Tree with the frontend to display accurate product information and availability to users.

**Time Complexity:** O(log N), where N is the number of elements in the tree.

**Space Complexity:** O(N), where N is the number of elements in the tree.
  
[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/RedBlackTree.cpp) [[5]](https://www.geeksforgeeks.org/introduction-to-red-black-tree/)

* * *

### 💬 5. Managing Customer Support Chat

**Algorithm**: Using a Queue (BFS)

**Use case:** This approach manages customer queries on Flipkart by using a queue to ensure first-come, first-served responses, improving the overall support experience.

**Challenges**  
- Handling peak times with high query volumes, maintaining response quality, and ensuring fair management of customer queries.
  
**Market Benefits**  
- Enhancing user experience, reducing wait times, and improving customer satisfaction, leading to higher retention rates.

**Approaching the Solution**
- Implementing a queue to manage incoming customer queries, ensuring they are addressed in the order received.
- Using BFS to traverse and process queries efficiently, providing timely responses.
- Incorporating mechanisms to prioritize urgent queries when necessary without compromising fairness.
- Continuously monitoring and optimizing the system to handle high volumes during peak times, maintaining response quality and speed.

**Time Complexity**: O(V + E)

**Space Complexity**: O(V + E)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/BFS.cpp) [[6]](https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/)

* * *

### 🚚 6. Optimizing Delivery Route

**Algorithm**: Using Dijkstra's Algorithm

**Use case** Optimizing delivery routes for couriers on Flipkart, minimizing travel time and costs to ensure efficient logistics operations.

**Challenges**  
- Managing dynamic traffic conditions, making real-time route adjustments, and handling large geographic areas with numerous delivery points.
  
**Market Benefits**  
- Optimized delivery routes reduce operational costs, shorten delivery times, and enhance customer satisfaction by ensuring timely deliveries.

**Approaching the Solution**
- Implementing Dijkstra's algorithm to find the shortest paths between delivery points based on travel time or distance.
- Integrating real-time traffic data to dynamically adjust routes and optimize delivery schedules.
- Utilizing geographic data to efficiently manage and navigate large delivery areas.
- Continuously optimizing algorithms and logistics strategies to adapt to changing conditions and improve overall efficiency.

**Time Complexity**: O(E * logV), Where E is the number of edges and V is the number of vertices.

**Space Complexity**: O(V) where V is the number of vertices

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/Dijkstra.cpp) [[7]](https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/)

* * *

### 📂 7. Product Categorization

**Algorithm**: Using Trie

**Use Case** This approach classifies products into various categories on Flipkart, improving search and navigation for users by organizing products hierarchically.

**Challenges**  
- Managing a large number of categories, ensuring efficient search capabilities within categories, and handling dynamic updates to the product catalog.
  
**Market Benefits**  
- Efficient product categorization enhances the user experience by simplifying product discovery, increasing user engagement, and ultimately boosting sales.

**Approaching**
- Implementing a Trie data structure to efficiently store and retrieve products based on their category.
- Supporting dynamic updates by incorporating mechanisms to add, update, or remove categories and products seamlessly.
- Enhancing search capabilities within categories by leveraging the Trie's prefix matching features.
- Continuously optimizing the Trie structure and algorithms to ensure fast and efficient categorization and search operations.

**Time Complexity**: O(m) for insert/search where m is the length of the key

**Space Complexity**: O(n * m) where n is the number of keys

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/Trie.cpp) [[8]](https://www.geeksforgeeks.org/trie-insert-and-search/)

* * *

### 🔒 8. User Authentication

**Algorithm**: Using Hashing

**Use Case** This approach securely manages user logins on Flipkart by storing and verifying passwords using hashing techniques, ensuring data security and integrity.

**Challenges**  
- Mitigating brute force attacks by implementing strong hashing algorithms and enforcing password complexity rules.
- Handling hash collisions to maintain the integrity of user credentials stored in the database.
- Ensuring secure storage and transmission of hashed passwords to protect user privacy.

**Market Benefits**  
- Secure user authentication enhances user trust, protects against unauthorized access, and strengthens the overall security posture of the e-commerce platform.

**Approaching**
- Implementing a robust hashing algorithm(SHA-256) to hash passwords securely before storing them in the database.
- Utilizing salted hashing techniques to add an extra layer of security against rainbow table attacks.
- Regularly updating hashing algorithms and security protocols to stay ahead of evolving cyber threats.
- Educating users about password security best practices to enhance overall platform security.

**Time Complexity**: O(1) for average case

**Space Complexity**: O(n), where n is the number of user credentials stored

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/sha256.cpp) [[9]](https://www.geeksforgeeks.org/sha-256-and-sha-3/)

* * *

### 🌟 9. Review and Rating System

**Algorithm**: Using AVL Tree

**Use Case** This approach efficiently handles product reviews and ratings on Flipkart by maintaining balanced updates and queries within an AVL tree structure.

**Challenges**  
- Ensuring the AVL tree remains balanced despite frequent updates to review data.
- Providing quick access to review information for both users and administrators.
- Managing a large volume of reviews while maintaining system performance.

**Market Benefits**  
- A robust review and rating system enhances user trust and engagement by providing reliable feedback to potential customers.
- Improves the overall shopping experience by helping users make informed purchase decisions based on peer reviews.

**Approaching the Solution**
- Implementing an AVL tree to store and manage review data, ensuring efficient insertion, deletion, and retrieval operations.
- Balancing the AVL tree after each modification to maintain optimal performance and query responsiveness.
- Integrating user-friendly interfaces for submitting and viewing reviews, enhancing usability and accessibility.
- Continuously optimizing the AVL tree structure and algorithms to handle increasing volumes of reviews and maintain system scalability.

**Time Complexity**: O(log n) for insertion, deletion, and search operations

**Space Complexity**: O(n) where n is the number of reviews stored

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/avl.cpp) [[10]](https://www.geeksforgeeks.org/introduction-to-avl-tree/)

---

### 🔍 10. Search Autocomplete

**Algorithm**: Using Trie

**Use Case** This approach provides search suggestions in real-time on Flipkart as users type in the search bar, improving search efficiency and user experience.

**Challenges**  
- Managing a large dictionary of terms to support autocomplete functionality.
- Ensuring quick response times for search suggestions to enhance user satisfaction.
- Handling dynamic updates to the dictionary as new terms are added or removed.

**Market Benefits**  
- Enhances the search experience by offering faster and more accurate autocomplete suggestions, leading to improved user engagement and satisfaction.

**Approaching the Solution**
- Implementing a Trie data structure to store and retrieve search terms efficiently.
- Utilizing prefix matching in the Trie to generate autocomplete suggestions as users type.
- Optimizing Trie operations for quick insertions, deletions, and searches to maintain real-time responsiveness.
- Incorporating mechanisms to dynamically update the Trie with new search terms and remove obsolete ones.

**Time Complexity**: O(m) for insert/search where m is the length of the key

**Space Complexity**: O(n * m) where n is the number of keys

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/trieauto.cpp) [[17]](https://www.geeksforgeeks.org/auto-complete-feature-using-trie/)

---

### 🔍 11. Duplicate Product Detection

**Algorithm**: Using KMP Algorithm

**Use Case:** This approach identifies duplicate product listings on Flipkart to maintain a clean and organized product catalog.

**Challenges**  
- Managing large volumes of product data and ensuring accurate detection of duplicate listings.
- Handling dynamic updates to the product catalog while maintaining efficiency in duplicate detection.

**Market Benefits**  
- Improves catalog quality by reducing clutter and ensuring accurate, unique product listings.
- Enhances user experience by presenting clear and distinct product options for customers.

**Approaching the Solution**
- Implementing the Knuth-Morris-Pratt (KMP) algorithm for efficient substring search.
- Applying the KMP algorithm to compare product descriptions or identifiers to detect duplicates.
- Optimizing the algorithm for quick detection and resolution of duplicate listings.
- Integrating real-time updates to the duplicate detection system to maintain catalog integrity.

**Time Complexity**: O(n + m) where n is the length of the text and m is the length of the pattern

**Space Complexity**: O(m)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/kmp.cpp) [[11]](https://cp-algorithms.com/string/prefix-function.html)

---

### 📊 12. Product Comparison

**Algorithm**: Using Segment Tree

**Use Case:** This approach enables users on Flipkart to compare multiple products efficiently based on various attributes.

**Challenges**  
- Managing dynamic updates to product attributes while ensuring quick query responses for comparisons.
- Handling large datasets of product information to provide accurate and timely comparisons.

**Market Benefits**  
- Facilitates informed decision-making for users, enhancing user satisfaction and potentially increasing sales.
- Provides a streamlined comparison experience, improving the overall usability of the platform.

**Approaching the Solution**
- Implementing a Segment Tree data structure to store and query product attributes efficiently.
- Updating the Segment Tree dynamically as product attributes change, ensuring up-to-date comparison results.
- Optimizing Segment Tree operations for quick updates and queries to maintain responsiveness.
- Integrating user-friendly interfaces for seamless product comparisons, enhancing user engagement.

**Time Complexity**: O(log n) for updates and queries

**Space Complexity**: O(n)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/segmenttrees.cpp) [[13]](https://cp-algorithms.com/data_structures/segment_tree.html)

---

### 🖼️ 13. Image Storage and Retrieval

**Algorithm**: Using B-Tree

**Use Case:** This approach efficiently stores and retrieves product images on Flipkart, ensuring quick access and updates for a large volume of image data.

**Challenges**  
- Managing large volumes of image data while maintaining quick retrieval times.
- Handling dynamic updates and additions to the image database without compromising performance.

**Market Benefits**  
- Enhances the user experience by providing fast and reliable access to product images, essential for informed purchasing decisions.

**Approaching the Solution**
- Implementing a B-Tree data structure to store and manage image metadata and pointers efficiently.
- Optimizing B-Tree operations for quick insertion, deletion, and retrieval of image data.
- Integrating mechanisms for handling dynamic updates to image metadata and content.
- Enhancing scalability to accommodate increasing volumes of product images while maintaining performance.

**Time Complexity**: O(log n) for insertion, deletion, and search operations

**Space Complexity**: O(n)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/Btree.cpp) [[13]](https://www.geeksforgeeks.org/introduction-of-b-tree/)

---

### 🎯 14. Product Recommendation by Similarity

**Algorithm**: Using KMP Algorithm

**Use Case:** This approach recommends similar products to users on Flipkart by matching patterns in product descriptions.

**Challenges**  
- Managing large datasets of product descriptions for efficient similarity matching.
- Ensuring accurate and relevant recommendations based on similarity metrics.
- Providing real-time recommendations to enhance user engagement and satisfaction.

**Market Benefits**  
- Increases user engagement by presenting personalized product recommendations aligned with user preferences.
- Improves the shopping experience by facilitating easier product discovery and informed purchasing decisions.

**Approaching the Solution**
- Implementing the Knuth-Morris-Pratt (KMP) algorithm to compare product descriptions for similarity.
- Optimizing the algorithm for efficient pattern matching across large datasets of product descriptions.
- Enhancing recommendation algorithms to factor in user behavior and preferences.
- Continuously updating similarity metrics and algorithms to improve recommendation accuracy and relevance.

**Time Complexity**: O(n + m) where n is the length of the text and m is the length of the pattern

**Space Complexity**: O(m)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/kmp.cpp) [[11]](https://cp-algorithms.com/string/prefix-function.html)

---

### 📈 15. User Activity Tracking

**Algorithm**: Using B+ Tree

**Use Case:** This approach tracks user behavior on Flipkart to provide insights for personalization and targeted marketing efforts.

**Challenges**  
- Managing high write throughput to handle frequent updates and additions to user activity logs.
- Ensuring data consistency and integrity across a large volume of activity data.
- Efficiently querying and analyzing user activity data to derive meaningful insights.

**Market Benefits**  
- Facilitates better personalization of user experiences by understanding user behavior patterns.
- Enables targeted marketing efforts based on user preferences and interactions, improving conversion rates.

**Approaching the Solution**
- Implementing a B+ Tree data structure to store and manage user activity logs efficiently.
- Optimizing B+ Tree operations for quick insertion, deletion, and retrieval of activity data.
- Using indexing and efficient querying techniques to analyze user behavior patterns and trends.
- Enhancing scalability to handle increasing volumes of user activity data while maintaining performance.

**Time Complexity**: O(log n) for both reads and writes

**Space Complexity**: O(log n)

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/Bplus.cpp) [[14]](https://www.geeksforgeeks.org/introduction-of-b-tree-2/)

---

### 💸 16. Coupon Code Validation

**Algorithm**: Using Hash Map

**Use Case:** Validating discount codes and vouchers quickly on Flipkart, ensuring a seamless checkout process for users.

**Challenges**  
- Managing a large number of coupon codes efficiently within the hash set.
- Ensuring quick and accurate validation of coupon codes to minimize checkout delays.
- Handling potential collisions and maintaining hash set integrity for reliable validation.

**Market Benefits**  
- Enhances the checkout experience by reducing wait times and improving user satisfaction.
- Increases conversion rates by providing reliable discount code validation, encouraging users to complete purchases.

**Approaching the Solution**
- Implementing a hash set data structure to store and validate coupon codes efficiently.
- Utilizing hash functions to distribute coupon codes evenly across the hash set, minimizing collisions.
- Optimizing hash set operations for quick insertion, deletion, and validation of coupon codes.
- Implementing error-handling mechanisms to manage invalid or expired coupon codes effectively.

**Time Complexity**: O(1) on average for insertion, deletion, and validation operations

**Space Complexity**: O(n) where n is the number of coupon codes stored

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/hashset.cpp) [[18]](https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/)

---

### 🔍 17. Filter-Based Search in Flipkart

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

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/InvertedIndex.cpp) [[14]](https://www.geeksforgeeks.org/inverted-index/)

---


### 📦 18. Order Tracking

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

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/BFShashmap.cpp) [[6]](https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/)

---

### 🛍️ 19. Sorting Products based on Filters

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

[Code](https://github.com/2317Ankit/APS-Portfolio.github.io/blob/main/Codes/QuickSort.cpp) [[16]](https://www.w3schools.com/dsa/dsa_algo_quicksort.php)

---

## 🔚 Conclusion

In conclusion, this portfolio showcases the application of various data structures and algorithms to solve real-world business use cases for Flipkart's e-commerce platform. Each Data Structure and Algorithm approach is meticulously selected to address specific challenges and drive market benefits. The insights and techniques gained from the Algorithmic Problem Solving (APS) course were instrumental in identifying and implementing these solutions, demonstrating the profound impact of structured algorithmic knowledge on practical, large-scale business problems. This portfolio not only highlights the synergy between theoretical learning and practical application but also underscores the importance of algorithms in transforming e-commerce experiences.

---

## 📑 References
- [1] Flipkart: [https://www.flipkart.com/](https://www.flipkart.com/)
- [2] Binary Search: [https://www.geeksforgeeks.org/binary-search/](https://www.geeksforgeeks.org/binary-search/)
- [3] DFS Algorithm: [https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/](https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/)
- [4] Fenwick Trees:  [https://www.geeksforgeeks.org/binary-indexed-tree-or-fenwick-tree-2/](https://www.geeksforgeeks.org/binary-indexed-tree-or-fenwick-tree-2/)
- [5] Red Black Trees: [https://www.geeksforgeeks.org/introduction-to-red-black-tree/](https://www.geeksforgeeks.org/introduction-to-red-black-tree/)
- [6] BFS Algorithm: [https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/](https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/)
- [7] Dijkstra Algorithm: [https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/](https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/)
- [8] Trie data structure: [https://www.geeksforgeeks.org/trie-insert-and-search/](https://www.geeksforgeeks.org/trie-insert-and-search/)
- [9] Sha256: [https://www.geeksforgeeks.org/sha-256-and-sha-3/](https://www.geeksforgeeks.org/sha-256-and-sha-3/)
- [10] AVL Tree: [https://www.geeksforgeeks.org/introduction-to-avl-tree/](https://www.geeksforgeeks.org/introduction-to-avl-tree/)
- [11] KMP Algorithm: [https://cp-algorithms.com/string/prefix-function.html](https://cp-algorithms.com/string/prefix-function.html)
- [12] Segment Trees: [https://cp-algorithms.com/data_structures/segment_tree.html](https://cp-algorithms.com/data_structures/segment_tree.html)
- [13] B Tree: [https://www.geeksforgeeks.org/introduction-of-b-tree/](https://www.geeksforgeeks.org/introduction-of-b-tree/)
- [14] B+tree: [https://www.geeksforgeeks.org/introduction-of-b-tree-2/](https://www.geeksforgeeks.org/introduction-of-b-tree-2/)
- [15] Inverted Index: [https://www.geeksforgeeks.org/inverted-index/](https://www.geeksforgeeks.org/inverted-index/)
- [16] Quick Sort: [https://www.w3schools.com/dsa/dsa_algo_quicksort.php](https://www.w3schools.com/dsa/dsa_algo_quicksort.php)
- [17] Trie Auto Complete: [https://www.geeksforgeeks.org/auto-complete-feature-using-trie/](https://www.geeksforgeeks.org/auto-complete-feature-using-trie/)
- [18] Hash map: [https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/](https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/)
