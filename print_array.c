// Description: write program to print largest and second largest element of the array 

#include <stdio.h>
int main()
{
int size,i,arr[50];  //variable declaration for size of array
int large=0, secondlarge=0;
printf("Enter the size of array: ");
scanf("%d",&size);  //taking input from user for number of elements in array
for(i=0; i<size; i++)
{
    printf("\nEnter the array element ");
    printf("%d :",(i+1));
    scanf("%d",&arr[i]); //Taking input for array elements 
 
    if(large<arr[i])
    {
      secondlarge=large;
      large=arr[i];
    }
    else if(secondlarge<arr[i])
    {
    secondlarge=arr[i];
    }
}
//display result on the screen
printf("\n\nThe largest number in array is %d",large);
printf("\nThe second largest number in array is %d",secondlarge);
return 0;
}
