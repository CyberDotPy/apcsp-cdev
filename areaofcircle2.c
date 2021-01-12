#include <stdio.h>
#include <math.h>


float areaOfCircle(float radius)
{
      float area = M_PI * radius * radius;
      return area;
}


int main(int argc, char* argv[])
{
  // first check to see if two args (3 including program name) were entered 
  if (argc < 3)
  {
    printf("two arguments were not passed\n");
    // user input 
    char input[256];
    float startnum;
    float endnum; 
  
    printf("input lower:\n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f", &startnum) == 1) break;
      printf("Not a valid number - try again!\n");
    }

    printf("input upper:\n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f", &endnum) == 1) break;
      printf("Not a valid number - try again!\n");
    }
  
    if (endnum > startnum)
    {
        // calculating radius
        for(float i = startnum; i <= endnum; i++)
        {
            float a = areaOfCircle(i);
            printf("area of circle with a radius of %f is %f\n", i, a);
        }

    } else {
      printf("upper radius must be larger than the lower radius - try again\n");
    }
    return 1;

  } else if (argc > 3) {
    printf("too many arguments, please send only 2 arguemnts\n");
    return 1;
  }


  // two arguments are recieved; checks to see if args are numbers, if not send error
  float arg1;
  
  float found = sscanf(argv[1], "%f", &arg1);
  if (found != 1)
  {
    printf("the lower radius is not number, please enter two numbers\n");
    return 1;
  }

  float arg2;
  found = sscanf(argv[2], "%f", &arg2);
  if (found != 1)
  {
    printf("the upper radius is not a number, please enter two numbers\n");
    return 1;
  }

  if (arg2 <= arg1)
  {
    printf("the upper radius must be greater than the lower radius, enter a different number\n");
    return 1;
  }  
  
  // user input is now validated; calculate radius using areaOfCircle
  
  for(float i = arg1; i <= arg2; i++)
  {
      float a = areaOfCircle(i);
      printf("area of radius %f = %f\n", i, a);
  }

}
