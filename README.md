# 🎓 University Course and Exam Scheduler

![C++](https://img.shields.io/badge/C%2B%2B-17-blue)
![Graph Theory](https://img.shields.io/badge/Graph-Theory-green)
![Algorithms](https://img.shields.io/badge/Algorithms-DSA-orange)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)
![License](https://img.shields.io/badge/License-MIT-yellow)

---

## 📌 Project Overview

The **University Course and Exam Scheduler** is a C++ application designed to generate a **conflict-free examination timetable** for university courses.

The project uses **Graph Theory** and the **Greedy Graph Coloring Algorithm** to efficiently assign exam slots while ensuring that students enrolled in multiple courses do not have overlapping examinations.

This project demonstrates the practical application of:

* Graph Construction
* Conflict Detection
* Scheduling Optimization
* Greedy Algorithms
* Data Structures using C++

---

## 🎯 Objectives

* Automate exam timetable generation.
* Prevent scheduling conflicts among students.
* Minimize the total number of exam slots used.
* Apply graph-based problem-solving techniques.
* Demonstrate efficient algorithm implementation in C++.

---

## ✨ Features

✅ Course Management

✅ Student Enrollment Tracking

✅ Conflict Graph Generation

✅ Greedy Graph Coloring

✅ Automatic Slot Allocation

✅ Conflict-Free Scheduling

✅ Optimized Time Slot Usage

✅ User-Friendly Console Interface

---

## 🛠️ Technologies Used

| Technology       | Purpose                |
| ---------------- | ---------------------- |
| C++              | Core Development       |
| STL              | Data Structure Support |
| Graph Theory     | Conflict Modeling      |
| Greedy Algorithm | Slot Optimization      |
| Stringstream     | Input Parsing          |
| Adjacency Matrix | Graph Representation   |

---

## 🧠 Core Concepts Implemented

### 1️⃣ Graph Construction

Each course is represented as a node in a graph.

An edge is created between two courses if they share at least one common student.

Example:

Math ───── Physics

│            │

│            │

Programming ─ DBMS

---

### 2️⃣ Conflict Detection

The system compares student enrollment lists and detects overlapping registrations.

Courses sharing students cannot be scheduled in the same exam slot.

---

### 3️⃣ Greedy Graph Coloring

Each color represents an exam slot.

The algorithm assigns the smallest available color that does not conflict with adjacent nodes.

This minimizes the total number of exam slots required.

---

## 🔄 Project Workflow

Student Enrollment Data

⬇️

Conflict Detection

⬇️

Conflict Graph Construction

⬇️

Greedy Coloring Algorithm

⬇️

Exam Slot Assignment

⬇️

Final Timetable Generation

---

## 📥 Sample Input

```text
Enter number of courses: 4

Enter course names:
Math
Physics
DBMS
Programming

Math: 1 2 3
Physics: 2 5
DBMS: 1 4
Programming: 3 5
```

## 📤 Sample Output

```text
Output Schedule:

Course Math -> Slot 1
Course Physics -> Slot 2
Course DBMS -> Slot 2
Course Programming -> Slot 1

Total Slots Used = 2
```

## 🚀 How to Run

### Clone Repository

```bash
git clone https://github.com/yourusername/university-course-exam-scheduler.git
```

### Navigate to Project Directory

```bash
cd university-course-exam-scheduler
```

### Compile

```bash
g++ main.cpp -o scheduler
```

### Run

```bash
./scheduler
```

---

## 📈 Time Complexity

### Conflict Graph Construction

```text
O(N² × S)
```

Where:

* N = Number of Courses
* S = Number of Students

### Greedy Coloring

```text
O(N²)
```

---

## 🎓 Learning Outcomes

Through this project, I gained practical experience in:

* Graph Theory Applications
* Graph Coloring Problems
* Scheduling Algorithms
* Conflict Resolution Techniques
* C++ STL Containers
* Algorithm Optimization
* Problem Solving using DSA

---

## 🔮 Future Enhancements

* GUI-based Interface
* CSV File Support
* Database Integration
* Classroom Allocation System
* Faculty Scheduling Module
* PDF Timetable Generation
* Graph Visualization
* AI-based Schedule Optimization

---

## 🤝 Contributions

Contributions, suggestions, and improvements are welcome.

Feel free to fork this repository and submit pull requests.

---

## 📜 License

This project is licensed under the MIT License.

---

## 👩‍💻 Author

### Mahima Mishra

**BCA Student | Aspiring Software Developer**

📚 Data Structures & Algorithms

💻 C++ | Python | SQL

🚀 Passionate about Problem Solving and Software Development

---

⭐ If you found this project useful, consider giving it a Star on GitHub!
