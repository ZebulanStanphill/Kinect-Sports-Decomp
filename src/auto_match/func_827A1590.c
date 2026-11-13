typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827A0BD0();


unsigned __int64 fn_827A1590(int param_1,unsigned int param_2)

{
  int *piVar1;
  bool bVar2;
  
  fn_827A0BD0();
  if ((((int *)(param_1 + 0x24) == (int *)0x0) || (*(unsigned int *)(param_1 + 0x28) <= param_2)) ||
     (bVar2 = false, (int)param_2 < 0)) {
    bVar2 = true;
  }
  if (!bVar2) {
    piVar1 = *(int **)(param_2 * 4 + *(int *)(param_1 + 0x24));
    if (-1 < *piVar1) {
      return (unsigned __int64)(unsigned int)piVar1[2];
    }
    if (((unsigned __int64)(unsigned int)piVar1[2] & 0xffffff) != 0xffffff) {
      return (unsigned __int64)(unsigned int)piVar1[2] & 0xffffff;
    }
  }
  return 0xffffffffffffffff;
}

