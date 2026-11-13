typedef struct { unsigned int x[4]; } Four;
extern int fn_82E1C598();


int fn_82E1C840(int param_1,unsigned int *param_2)

{
  int uVar1;
  
  if (param_2 == (unsigned int *)0x0) {
    uVar1 = 0x80004003;
  }
  else if ((*(char *)(param_1 + 0x20) != '\0') || (uVar1 = fn_82E1C598(param_1), uVar1 >= 0))
  {
    uVar1 = 0;
    *(Four *)param_2 = *(Four *)(param_1 + 64);
  }
  return uVar1;
}

