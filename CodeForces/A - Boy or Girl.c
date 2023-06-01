#include <stdio.h>
#include <string.h>
 
int main()
{
    char name[101];
    
    scanf("%s", name);
 
    int distinct[26] = {0};
    int count = 0;
 
    for(int i = 0; i < strlen(name); i++) {
        int index = name[i] - 'a'; 
        if(distinct[index] == 0) {
            distinct[index] = 1;
            count++;
        }
    }
 
    if(count % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }
 
    return 0;
}
