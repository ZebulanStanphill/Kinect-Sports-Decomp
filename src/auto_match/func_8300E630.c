extern int fn_82FF7DB0();


void fn_8300E630(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned short uVar1;
  int *piVar2;
  
  piVar2 = (int *)fn_82FF7DB0(param_3);
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_2;
    uVar1 = *(unsigned short *)(param_2 + 8);
    if (uVar1 == 100) {
      *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
    }
    else if (uVar1 == 0) {
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    }
    *(unsigned int *)(param_3 + 0x14) = (unsigned int)uVar1 + *(int *)(param_3 + 0x14);
  }
  return;
}

