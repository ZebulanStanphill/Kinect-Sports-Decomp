extern int fn_8268AF70();
extern int fn_82724840();


int fn_826CC060(unsigned int *param_1,unsigned int *param_2)

{
  int uVar1;
  unsigned int uVar2;
  
  if (*param_1 == 0) {
    uVar1 = -1;
  }
  else {
    uVar2 = fn_8268AF70((char *)(*param_2 & 0xfffffffc) + 8,
                         *(unsigned int *)(*param_2 & 0xfffffffc) & 0x7fffffff,0x1505);
    uVar1 = fn_82724840(param_1,param_2,*(unsigned int *)(*param_1 + 4) & uVar2);
  }
  return uVar1;
}

