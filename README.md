### **1. Start with Basics**

**Goal:** Understand simple concepts and terminology (in-place, stable, time/space complexity).

* **Why it matters:** Interviews often test your understanding of trade-offs, not just coding.
* **Key concepts:**

  * Time complexities: O(n), O(n log n), O(n²)
  * Space complexities: in-place vs extra memory
  * Stable vs unstable sort

---

### **2. Elementary Sorting Algorithms**

**Goal:** Learn to implement these by hand. Good for whiteboard coding.

* **Algorithms:**

  * **Bubble Sort** – Simple, introduces swapping, stability
  * **Selection Sort** – Conceptually simple, understand why it’s inefficient
  * **Insertion Sort** – Practical for small arrays, partially sorted arrays

* **Focus:**

  * Understand their mechanics
  * Be able to code them in under a few minutes
  * Know their time/space complexity

---

### **3. Divide and Conquer Sorting**

**Goal:** Learn efficient, commonly asked sorts.

* **Algorithms:**

  * **Merge Sort** – Classic divide-and-conquer, stable, O(n log n)
  * **Quick Sort** – Divide-and-conquer, in-place, understand pivot selection and worst-case O(n²)

* **Focus:**

  * Recursive vs iterative versions
  * Understand why quicksort can be faster in practice than merge sort
  * Be able to trace examples on paper

---

### **4. Heap and Tree-Based Sorting**

**Goal:** Know other O(n log n) sorts and data structure integration.

* **Algorithms:**

  * **Heap Sort** – In-place, not stable, uses max/min heap
  * **Tree Sort** – Uses BST, helps in understanding sorted data structures

* **Focus:**

  * How heaps work and heapify process
  * Differences between heap sort and quicksort

---

### **5. Linear-Time Sorting (Advanced / Niche)**

**Goal:** Recognize special cases where sorting can beat O(n log n).

* **Algorithms:**

  * **Counting Sort** – Only for integers in a small range
  * **Radix Sort** – Works on integers and strings (via digits/letters)
  * **Bucket Sort** – For uniformly distributed numbers

* **Focus:**

  * When these are better than comparison-based sorts
  * How stability affects the result

---

### **6. Practice Problems**

**Goal:** Apply algorithms in coding problems.

* **Problems to try:**

  * Sort nearly sorted arrays (Insertion Sort)
  * Merge intervals, sort by start/end (Merge Sort)
  * Kth largest/smallest element (Heap)
  * Sort strings/numbers efficiently (Radix/Counting)

---

### **7. Optimization & Hybrid Sorts**

* **TimSort** – Used in Python & Java (hybrid of merge + insertion sort)
* Understand practical performance vs theoretical

---

### **Suggested Learning Order:**

**Basics → Elementary Sorts → Merge/Quick → Heap → Linear-time → Practice → Hybrid / Optimization**

---
