#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void caesar(int k, int message);


int main(int argc, char* argv[]){
  
  if (argc != 2){
    printf("Incorrect number of arguements\n");
    return 1;
  }
  
  for (int i = 0, n = strlen(argv[1]); i < n; i++){
    
    if (isalpha(argv[1][i]) == 0){
      
      printf("Only accepts alphabetical characters in key");
      return 1;
      
    }
    
  }

  char* k = argv[1];
  int klength = strlen(k);
  char* message = GetString();
  int j = 0;
  
  for (int i = 0, n = strlen(message); i < n; i++){
    
    if (isalpha(message[i])){
      
      if (isupper(k[j % klength])){
        
        int key = k[j % klength] - 65;
        caesar(key, message[i]);
        
      }
      
      else{
        
        int key = k[j % klength] - 97;
        caesar(key, message[i]);
        
      }
      
      j++;
    
    }
    
    else{
      printf("%c", message[i]);
      
    }
  } 
  printf("\n");
  
}



void caesar (int k, int message){
  
  if (isupper(message)){
    
    int message1 = (message + k - 65) % 26 + 65;
    printf("%c", message1);
    
  }
  
  else{
    
    int message1 = (message + k - 97) % 26 + 97;
    printf("%c", message1);
    
  }
  
}