extern int iRam8326504c;
extern int iRam83265050;


unsigned __int64 fn_8304F020(unsigned __int64 param_1,unsigned int param_2)

{
  int *piVar1;
  
  if (param_2 < (unsigned int)(iRam83265050 - iRam8326504c >> 2)) {
    piVar1 = *(int **)(param_2 * 4 + iRam8326504c);
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 0x14))();
      *(unsigned int *)(param_2 * 4 + iRam8326504c) = 0;
      return 1;
    }
  }
  return 0x1f;
}

