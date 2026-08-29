***SESSION 1***

***Q.5.ANS: Below are 3 major problems faced in the C version and how c++ classes solved them:
1. Lack of data security and encapsulation:***

* ***problem in C:*** variables like the task array and tge total cout are open and accessible globally or across functions. any part of the code can accidentally modify the couny variable(e.g.,setting total =0),which leads to the data corruption.
* ***OOP solution:*** C++ uses encapsulation. by wrapping variables inside a class and making them private, data cannot be accessed or modified directly from outside. it can only be changed safely using controlled public methods like addtask() and marktaskDone().

**2.Complex argument passing (separation of data and functions)**

* &#x20;***Problems in C:*** Function and data structure exist independently. every time a function is called, you must pass the task array, array size, and the task details code cluttered and error-prone.
* ***OOP solution:*** in C++, class methods automatically  have direct access to the member variables of that class. you simple call myList.addtask("study") without repeatedly by passing arrays or counters as parameters.

***3.Difficulty in managing multiple instances(reusability)***

* ***Problems in C:*** if you want to maintain multiple separate task list(e.g., personal task and college tasks), you have to manually create separate arrays(personalarray\[100], collegearray\[100]) and separate track variables(pcount , ccount), making the program bloated.
* ***OOP Solution:*** A C++ class acts as a reusable blueprint. you can create multiple independent list object with a single line: Tasklist personallist and tasklist collegelist; . each object automatically maintains its own isolated data and counter.

