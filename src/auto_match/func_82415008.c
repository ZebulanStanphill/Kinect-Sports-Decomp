typedef unsigned char bool;
#define true 1
#define false 0


/* WARNING: Removing unreachable block (ram,0x82415034) */

unsigned __int64 fn_82415008(int param_1)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if ((piVar1 == (int *)0x0) || (*(int *)(param_1 + 8) == 0)) {
    if ((piVar1 == (int *)0x0) || (bVar2 = true, *piVar1 != 10)) {
      bVar2 = false;
    }
    if (!bVar2) {
      return 0;
    }
  }
  return 1;
}

