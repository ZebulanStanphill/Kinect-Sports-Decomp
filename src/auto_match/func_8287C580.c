#include <math.h>
typedef unsigned char bool;

bool fn_8287C580(float a, float b, float eps)
{
  return fabsf(a - b) <= eps;
}
