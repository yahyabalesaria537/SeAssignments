#include <stdio.h>
main(){
    int arr[10];
    int sum = 0;
    int i, j, temp;
    float mean, dist_min, dist_max;
    printf("Enter 10 integer values:\n");
    for(i=0;i<10;i++){
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    mean = (float)sum / 10.0;
    for(i=0;i<9;i++){
        for(j=0;j<9-i;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int min = arr[0];
    int max = arr[9];
    printf("\nSorted Array in Ascending Order:\n");
    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\nMinimum Value = %d\n", min);
    printf("Maximum Value = %d\n", max);
    printf("Mean Value    = %.2f\n", mean);
    dist_min = mean - min;
    dist_max = max - mean;

    if (dist_min == dist_max){
        printf("The mean is exactly midway between min and max.\n");
    } else if (dist_min < dist_max) {
        printf("The mean is closer to minimum.\n");
    } else {
        printf("The mean is closer to maximum.\n");
    }
}
