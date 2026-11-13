extern int fn_827BA7C0();


void fn_827BA890(int param_1,short param_2,short param_3)

{
  unsigned __int64 uVar1;
  short *psVar2;
  unsigned int uVar3;
  int iVar4;
  short sStack_20;
  short sStack_1e;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14) - 1;
  psVar2 = (short *)(*(int *)(((unsigned int)((uVar1 & 0xffffffff) >> 4) & 0xffffffc) +
                             *(int *)(param_1 + 0x20)) + ((unsigned int)((uVar1 & 0xffffffff) << 2) & 0xfc))
  ;
  if ((param_2 != *psVar2) || (param_3 != psVar2[1])) {
    sStack_20 = param_2;
    sStack_1e = param_3;
    fn_827BA7C0(param_1 + 0x14,&sStack_20);
    uVar3 = *(int *)(param_1 + 4) - 1;
    iVar4 = *(int *)((uVar3 >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x10)) + (uVar3 * 8 & 0x78);
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  }
  return;
}

