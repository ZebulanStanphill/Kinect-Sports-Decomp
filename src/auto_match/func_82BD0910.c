typedef unsigned int uint;
void fn_82BD0910(uint **param_1)
{
  uint *p = *param_1;
  uint i;
  for (i = 0; i < *p; i++) {
    p[i + 2] = 0;
  }
}
