#include <stdio.h>

#include<conio.h>

#include<stdlib.h>

#include<time.h>

int SnakeWaterGun(char you , char computer){

    // return 1 if you win ,-1 if you loose and 0 if draw;
    
    if (you==computer)
    
    {
    
        return 0;
        
    }
    
    if(you=='s' && computer=='w'){
    
        return 1;
        
    }
    
    else if(you=='w' && computer=='s'){
    
        return -1;
        
    }
    
    if(you=='s' && computer=='g'){
    
        return -1;
        
    }
    
    else if(you=='g' && computer=='s'){
    
        return 1;
        
    }
    
    if(you=='w' && computer=='g'){
    
        return 1;
        
    }
    
    else if(you=='g' && computer=='w'){
    
        return -1;
        
    }
    
}

int main()

{  
  char you , computer;
  

  srand(time(0));
  
 int number = rand()%100+1;
 
if(number<33){

    computer = 's';
    
}
else if(number>33 && number<66){

    computer = 'w';
    
}

else{

    computer = 'g';
    
}

  printf("Enter s for snake , w for water and g for gun\n");
  
  
  scanf("%c", &you);
  
  int result = SnakeWaterGun(you,computer);
  
  printf("you choose %c and computer choose %c \n",you , computer);
  
  if(result==0){
  
      printf("it's a Draw !! play Again plzz\n");
      
  }
  
  else if(result==1){
  
      printf("well played !! you are a champ!!\n");
      
  }
  
  else
  
  {
  
     printf("Unfortunality you loose the Game try again \n");
     
  }
  
  printf("Press Any key to Exit !!");
  
    
    getch();
    
    return 0;
    
    
}
