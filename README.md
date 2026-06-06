## University Course and Exam Scheduler
Overview

The University Course and Exam Scheduler is a C++ application that automatically generates conflict-free examination schedules for university courses.

The system uses Graph Theory concepts and a Greedy Graph Coloring Algorithm to assign exam slots efficiently while ensuring that students enrolled in multiple courses do not face exam clashes.

Features

✔ Course Management

✔ Student Enrollment Mapping

✔ Conflict Graph Construction

✔ Exam Slot Allocation

✔ Greedy Graph Coloring

✔ Conflict-Free Scheduling

✔ Time Slot Optimization

Technologies Used
C++
STL (Vector, Set, Stringstream)
Graph Theory
Greedy Algorithms
Algorithm Used
Conflict Graph

Each course is represented as a node.

An edge exists between two courses if at least one student is enrolled in both courses.

Example:

Math -------- Physics
  |              |
  |              |
Programming ---- DBMS
Graph Coloring

Different colors represent different exam slots.

Adjacent nodes cannot have the same color.

The scheduler uses a Greedy Coloring Algorithm to minimize the number of slots.

Input Example
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
Output Example
Course Math -> Slot 1
Course Physics -> Slot 2
Course DBMS -> Slot 2
Course Programming -> Slot 1

Total Slots Used = 2
Project Workflow
Student Data
      ↓
Conflict Detection
      ↓
Graph Creation
      ↓
Greedy Coloring
      ↓
Exam Slot Assignment

Author

Mahima Mishra

BCA Student
