#include <noise.h>


int test_setup()
{
  int bx0, bx1;
  float rx0, rx1, t, vec[1];
  vec[0] = 1.32;
  setup(0, bx0, bx1, rx0, rx1);
  printf("%d, %d, %f, %f\n", bx0, bx1, rx0, rx1);
  return 0; 
}


int main()
{
  // init();
  // test_setup();
  // noise1(1.32);

  float vec[2];
  vec[0] = 1.32;
  vec[1] = 2.61;
  noise2(vec);
  return 0;
}
