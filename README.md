Fitness – Gym Planner

Introduction

The Fitness – Gym Planner is a console-based application developed in C++ to demonstrate the practical implementation of Data Structures and Algorithms (DSA) concepts.

The system allows a user to enter basic information and select a workout day. Based on the selected day, the program loads a predefined exercise routine and processes the exercises using different data structures.

The project demonstrates how DSA concepts can be applied to a practical fitness-related scenario while maintaining a simple and understandable command-line interface.

Background Information

Data Structures and Algorithms play an important role in organizing data and developing efficient software systems.

Students often learn data structures such as linked lists, stacks, queues, trees, sorting algorithms, and recursion as separate theoretical concepts. This project applies these concepts together in a practical Gym Planner scenario.

Different data structures are used for different purposes:

- Singly Linked List for sequential exercise storage
- Doubly Linked List for forward and backward traversal
- Stack for LIFO-based exercise storage
- Queue for FIFO-based exercise storage
- Bubble Sort for sorting exercises by duration
- Binary Search Tree (BST) for organizing exercises by duration
- AVL Tree for balanced organization based on difficulty
- Recursion for processing the workout exercises sequentially

Features

- User information input
- User ID input
- Trainer preference
- Workout day selection
- Predefined workout exercises
- Exercise name, duration, and difficulty
- Singly Linked List
- Doubly Linked List
- Stack
- Queue
- Bubble Sort
- Binary Search Tree (BST)
- AVL Tree
- Recursive workout execution
- Forward and backward traversal of exercises
- Console-based interactive interface

Purpose

The purpose of this project is to demonstrate the practical application of Data Structures and Algorithms in a real-world-inspired scenario.

The project aims to:

- Organize exercises into a structured workout
- Demonstrate different data structures
- Apply sorting and tree-based algorithms
- Practice recursion
- Show how theoretical DSA concepts can be combined in one application
- Provide an educational example of DSA implementation using C++

Objectives

- Design a basic fitness and workout planning system
- Store and manage exercise information
- Implement a Singly Linked List
- Implement a Doubly Linked List
- Implement a Stack
- Implement a Queue
- Sort exercises using Bubble Sort
- Implement a Binary Search Tree
- Implement an AVL Tree
- Apply recursion to process exercises
- Display exercise information using different data structures

Scope

The Fitness – Gym Planner is designed primarily for educational purposes.

The project demonstrates how different DSA techniques can be applied to organize and process workout exercises.

The current system includes:

- Basic user information
- Workout day selection
- Predefined exercises
- Exercise duration and difficulty
- Multiple data structures
- Workout execution through recursive function calls
- Display of exercises using different structures

The system can be extended in the future to support more workout days, muscle groups, exercises, and advanced fitness-planning features.

Data Structures and Algorithms Used

1. Singly Linked List

A Singly Linked List is used to store exercises sequentially.

Each node contains:

- Exercise information
- Pointer to the next node

2. Doubly Linked List

The Doubly Linked List stores exercises using both previous and next pointers.

This allows the program to display exercises:

- Forward
- Backward

3. Stack

A fixed-size Stack is used to store exercises following the LIFO (Last In, First Out) principle.

4. Queue

A fixed-size Queue is used to store exercises following the FIFO (First In, First Out) principle.

5. Bubble Sort

Bubble Sort is used to arrange exercises according to their duration.

Exercises with shorter durations are placed before exercises with longer durations.

6. Binary Search Tree

A Binary Search Tree is used to organize exercises according to their duration.

The program displays the exercises using an inorder traversal.

7. AVL Tree

An AVL Tree is used to organize exercises based on their difficulty level.

The tree maintains balance using rotations when required.

8. Recursion

Recursion is used in the "performWorkout()" function to process exercises one by one.

Exercise Information

Each exercise contains three main properties:

Name
Duration
Difficulty

For example:

Bench Press
Duration: 10 minutes
Difficulty: 3

Current Workout

The current implementation provides a predefined workout for:

Monday – Chest & Triceps

Exercises include:

- Bench Press
- Incline Press
- Push Ups
- Tricep Pushdown

Additional workout days and muscle groups can be added in future versions.

Program Flow

The program follows these basic steps:

1. Enter user name
2. Enter user ID
3. Enter trainer preference
4. Enter workout day
5. Load predefined exercises
6. Sort exercises by duration
7. Store exercises in different data structures
8. Start the workout
9. Process exercises using recursion
10. Display Doubly Linked List
11. Display BST
12. Display AVL Tree
13. Complete the workout

Technologies Used

- C++
- Dev-C++ IDE
- Standard C++ Library

Concepts Used

- Arrays
- Structures
- Pointers
- Dynamic Memory Allocation
- Singly Linked Lists
- Doubly Linked Lists
- Stacks
- Queues
- Bubble Sort
- Binary Search Trees
- AVL Trees
- Recursion
- Functions
- Conditional Statements
- Loops

How to Run

1. Open the project in Dev-C++ or another C++ compiler.
2. Create/open the "fitness_gym_planner.cpp" file.
3. Compile the program.
4. Run the program.
5. Enter the requested user information.
6. Select a workout day.
7. Follow the workout instructions displayed on the screen.

Example

============ FITNESS - GYM PLANNER =============

Enter Name: Hassaan
Enter ID: 123
Want trainer (yes/no): yes

ENTER THE GYM: PAIN & GAIN
Enter Day (Mon/Tue/Wed/Thu/Fri): Mon

--- START WORKOUT (Chest & Triceps) ---

Exercise: Push Ups (8 mins)
Type done: done

Exercise: Bench Press (10 mins)
Type done: done

...

Limitations

- The current implementation contains a predefined workout for Monday.
- The program does not use a graphical user interface.
- The Stack and Queue have a fixed capacity of 10 exercises.
- The current system does not use an external database.
- User information is not permanently stored.
- The current implementation does not contain a hash table.
- The current Stack is used for storing exercises but does not implement an undo operation.
- Exercise routines are predefined rather than dynamically generated.

Future Improvements

Possible future improvements include:

- Add workout routines for all days of the week
- Add more muscle groups
- Add more exercises
- Implement an actual undo feature using the Stack
- Implement a Hash Table for fast exercise searching
- Add user progress tracking
- Add exercise history
- Add calorie estimation
- Add a graphical user interface
- Add persistent data storage
- Add personalized workout recommendations

Conclusion

The Fitness – Gym Planner demonstrates how multiple Data Structures and Algorithms can be combined to create a practical C++ application.

The project provides hands-on experience with linked lists, stacks, queues, sorting, Binary Search Trees, AVL Trees, recursion, arrays, structures, and pointers.

By applying these concepts to a fitness-related scenario, the project connects theoretical DSA concepts with practical programming and provides a foundation for developing more advanced fitness management systems.

Author

Muhammad Hassaan

Artificial Intelligence Student
SZABIST University, Islamabad
