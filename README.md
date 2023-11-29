# C++ Linked List Implementation
This code snippet demonstrates a basic implementation of a singly linked list.

## Explanation:
The code comprises two key components:

### Node structure
This structure defines the building blocks of the linked list. Each node contains an integer data field and a pointer to the next node in the list.

### Linked List Class:

- The `Linked_list` class manages the linked list operations.
- It contains a constructor to initialize an empty list (`head` and `tail` set to NULL).
- The `add_node` function adds a new node with data 'n' to the end of the list:
  - If the list is empty, it sets both `head` and `tail` to the new node.
  - If the list already has nodes, it appends the new node to the end and updates the `tail` pointer.

This implementation serves as the foundation for a singly linked list in C++. Each node in the list stores an integer value and a pointer to the next node, enabling sequential storage and retrieval of data.
