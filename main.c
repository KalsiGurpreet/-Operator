#define FUNCTION(name,a) int fun_##name(int x) { return (a) * x; }
#define SNAP(X) printf("variable "#X" = %d\n",X);
FUNCTION(quadruple, 4)
FUNCTION(double, 2)

#undef FUNCTION
#define FUNCTION 34
#define OUTPUT(a) puts( #a )

#include<stdio.h>
  
int main(void)
{

  int a = 89;
  int b = 77;
    printf("quadruple(13): %d\n", fun_quadruple(13) );
    printf("double(21): %d\n", fun_double(21) );
    printf("%d\n", FUNCTION);
    OUTPUT(65765);               // note the lack of quotes
    SNAP(a);
    SNAP(b);
}
  
