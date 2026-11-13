extern int fn_824F5A20();
extern int fn_82522D98();
extern int fn_8265C9E0();


void fn_823C5598(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0;
    *(unsigned int *)(param_1 + 0x2b4) = 0;
  }
  else {
    *(int *)(param_1 + 0x2b4) = param_2 + 0x81c;
    iVar1 = *(int *)(param_2 + 0xd54);
    if (*(int *)(iVar1 + 0x38) == 0) {
      uVar4 = *(unsigned int *)(param_2 + 0x93c);
      uVar2 = fn_8265C9E0(0x24);
      if ((uVar2 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_824F5A20(uVar2,uVar4);
      }
      *(int *)(iVar1 + 0x38) = iVar3;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98(8);
      }
    }
    uVar4 = *(unsigned int *)(iVar1 + 0x38);
  }
  *(unsigned int *)(param_1 + 0x360) = uVar4;
  return;
}

