# User Registration Application

## Project Overview
A C++ console-based application allowing users to register personal details and retrieve them via a unique identifier.

## Technical Requirements & Implementation Steps

### 1. Structure and Setup
* **Headers:** Include necessary standard library headers.
* **Data Structure:** Define a custom class to represent a single record.
    * **Member Variables:** `Name` and `Age`.
* **Storage:** Declare a fixed-size array to store objects.
    * **Constraint:** Maximum capacity is strictly **100 records**.

### 2. Core Functions
* **Add Record:**
    * Accepts `Name` and `Age` as parameters.
    * Creates a new object.
    * Stores the object in the next available index of the array.
* **Fetch Record:**
    * Accepts a `User ID` as a parameter.
    * Searches the array and returns the specific record associated with that ID.

### 3. Application Logic (Main Function)
* **Main Loop:** Implement a generic loop to maintain application execution.
* **User Interface:** Display a menu with three options:
    1. Add Record
    2. Fetch Record
    3. Quit
* **Input Handling:**
    * Capture the user's menu selection.
    * Use a `switch` statement to execute the corresponding branch.

### 4. Workflow Branches
* **Case 1 (Add):** Prompt user for Name and Age → Call `AddRecord`.
* **Case 2 (Fetch):** Prompt user for User ID → Call `FetchRecord` → Display results.
* **Case 3 (Quit):** Terminate the application loop.