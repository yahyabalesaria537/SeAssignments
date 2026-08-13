***SECTION D ANSWERS***

***1.THE EXACT PROMPT GIVEN TO AI TOOL IS:***

Hey, write a C program that asks the user to enter 10 numbers using loop and saves them in an array. Calculate minimum , maximum, and average (format average to 2 decimal places). Also sort in the ascending order and display it. at the end , check if the mean is closer to min, closer to max, or exactly in the middle.



***3.Explanation note (3 to 4 lines):***

The original AI code contained an integer division bug where calculating sum / 10 truncated the fractional part before assigning it to the floating-point mean variable. I corrected this by typecasting sum to float using (float)sum / 10.0 to preserve accurate decimal values. The original version needed this correction because truncating the mean leads to inaccurate calculations when determining whether the mean is closer to the minimum, maximum, or midway.

