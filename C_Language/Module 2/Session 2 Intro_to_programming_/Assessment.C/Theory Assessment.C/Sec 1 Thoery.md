**\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*ASSESMENT C PROGRAMMING\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\***

**SECTION A:**



**Q.1.Development methodology**

ANS.I would recommend the Agile methodology for this project. Agile is suitable because the project has changing requirements and the client needs to review working features regularly. Agile allows the team to develop the project in small iterations, collect feedback, and make changes quickly.

\*Two risks of choosing wrong methodology are:

1.Changing requirements may become difficult to handle: In a rigid methodology like waterfall, changes after development has started can be costly and time consuming.

2.Client dissatisfaction: If the client cannot review working features regularly the final product may not meet their expectation.



**Q.2 Git Workflow**

ANS**.** The team should follow a proper git branching and pull request workflow. each developer should create a separate branch for their work instead of directly modifying the main branch. after completing the work, the developer should commit the changes and push the branch. another team member should review the changes before merging them into main branch.


Two important Git commands are:

1. git checkout -b feature-name: Creates a new branch and switches to it. this allows developer to work on a feature without affecting the main branch.
2. git commit -m "messages": Saves the changes to the local git repository with a meaningful message, making the work easy to track.


other useful commands include git pull to get the latest changes an git push to upload local commit to the remote repository.



**Q.3.HTML Input Types And Validation**
ANS. for a form containing five fields, appropriate HTML5 input types can be:

**Field                HTML input types**

NAME                 text
EMAIL                email                  
PASSWORD            password       
AGE                 number       
DATE OF BIRTH       date


HTML5 built in validation attributes can be used to enforce constraints. For e.g:

* required ensures that a field cannot be left empty.
* min/max can restrict a numeric value to a specific range.
* minlength/maxlength can restrict the length of text.
* pattern can enforce a specific format.



for example, if a field is mandatory, we can use required. if the age must be between 18 and 60 we can use min="18" and max="60"

However, HTML5 validation alone is not sufficient for production-level validation because client-side validation can be bypassed or disabled by users. Therefore, the server must also validate and sanitize the submitted data before processing or storing it.


**Q.4. Bootstrap Grid System**
ANS. Bootstrap uses a 12 column grid system to create a responsive layouts. The col classes decide how much space an element occupies on different screen sizes.



For the article column i would use:

<div class="col-12 col-md-8">

* col-12 - On small screens, the articles takes all 12 columns(100% width)
* col-md-8 - On medium and larger screens, the article takes 8 out of 12 columns.
* This makes the layout responsive because the article becomes full width on small devices and narrow on longer devices



**Q.5. Array And Average**

ANS. An array is the correct data structure because it can store the temperature of all 30 days under one variable name. using 30 separate variables would make the program longer and difficult to manage.

The program would follow two steps:

1. **calculate the average:** add the temperatures of all 30 days and divide the total by 30.
2. **find above average days:** traverse the array again and compare each temperature  with the calculated average. if a temperature is greater than the average ,display that day.

Both steps cannot normally be completed in a single loop because the average is not known until all 30 temperatures have been processed. we need the final average before we can correctly identify which values are above it.


**Q.6. Pointer and Empty string**

ANS. The program crashes on an empty string because there is no valid character to access. if the pointer is dereferenced without checking whether it points to a valid character, the program may access invalid memory crash.



A pointer based solution must first check whether the pointer is NULL before deferenching  it.



For example:

if (ptr != NULL) {

&#x20;   // safely use \*ptr

}



When traversing a string using array indexing, we use srt\[i]. with a pointer, we move through the string by changing the pointer, such as ptr++, accessing the current character using \*ptr

&#x09;Pointer traversal can make the empty input bug easier to notice because we must explicitly check whether the pointer is valid before deferencing it.














































