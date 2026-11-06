extern int fn_82528BF8(unsigned int, int, int, int, int, int);
int fn_82350810(int param_1,int param_2,int param_3,int param_4)
{
  int r = 0;
  if (*(unsigned int *)(param_1 + 0x90) != 0)
    r = fn_82528BF8(*(unsigned int *)(param_1 + 0x90),param_2,param_3,param_4,0,1);
  if (r == 0 && *(unsigned int *)(param_1 + 0x94) != 0)
    r = fn_82528BF8(*(unsigned int *)(param_1 + 0x94),param_2,param_3,param_4,0,1);
  return r;
}
