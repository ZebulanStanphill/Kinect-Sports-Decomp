typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_828AC540(int param_1,int param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  
  if ((*(char *)(param_1 + 4) != *(char *)(param_2 + 4)) ||
     (bVar1 = true, *(int *)(param_1 + 8) != *(int *)(param_2 + 8))) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, *(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc))) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, *(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    bVar1 = false;
  }
  if ((!bVar1) || (uVar2 = 1, *(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14))) {
    uVar2 = 0;
  }
  return uVar2;
}

