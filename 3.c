#include<stdio.h>
#include<string.h>
int cmpstr(char s1[5], char s2[5]);

  void main() 
  {
    char arr1[5] = "world";
    char arr2[5] = "world";
    printf(" %d", cmpstr(arr1, arr2));
    
    return 0;
    }
    
    int cmpstr(char s1[5], char s2[5]) {
    //strlen function returns the length of argument string passed
    int i = strlen(s1);
    int k = strlen(s2);
    int bigger;
    if (i < k) {
      bigger = k;
    }
    else if (i > k) {
      bigger = i;
    }
    else {
      bigger = i;
    }

    for (i = 0; i < bigger; i++) {
     
      if (s1[i] == s2[i]) {
      }
      
      else {
        return (s1[i] - s2[i]);
      }
    }
    
    return (0);
  }
