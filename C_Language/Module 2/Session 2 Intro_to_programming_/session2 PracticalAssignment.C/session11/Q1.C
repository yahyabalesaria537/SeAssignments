#include <stdio.h>
int main(){
    int likes = 100;
    int *ptrlikes;
    ptrlikes = &likes;

    printf("\nlikes value = %d", likes);
    printf("\naddress stored in ptrlikes = %p", (void *)ptrlikes);

}
