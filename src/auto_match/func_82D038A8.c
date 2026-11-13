extern int fn_82D02A58();
extern int fn_82D02B68();


void fn_82D038A8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar5 = (int)param_2;
    lVar4 = param_2 - 0x10;
    uVar2 = (unsigned __int64)*(unsigned int *)(iVar5 + -0xc) & 0xfffffffc;
    uVar6 = uVar2 + lVar4;
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) - (int)uVar2;
    *(unsigned int *)(param_1 + 0xc0) =
         (*(int *)(param_1 + 0xc0) - (*(unsigned int *)(iVar5 + -0xc) & 0xfffffffc)) + 0x10;
    if ((*(unsigned int *)(iVar5 + -0xc) & 1) == 0) {
      uVar1 = *(unsigned int *)lVar4;
      lVar4 = lVar4 - (unsigned __int64)uVar1;
      param_1 = fn_82D02B68(param_1,lVar4);
      uVar2 = uVar1 + uVar2;
    }
    uVar3 = (unsigned int)uVar2;
    uVar1 = *(unsigned int *)((int)uVar6 + 4);
    iVar5 = (int)lVar4;
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar6 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 0x10)) {
        *(int *)(param_1 + 0x10) = iVar5;
        uVar3 = uVar3 + *(int *)(param_1 + 0x14);
        *(unsigned int *)(param_1 + 0x14) = uVar3;
        *(unsigned int *)(iVar5 + 4) = uVar3 | 1;
        return;
      }
      uVar3 = (uVar1 & 0xfffffffc) + uVar3;
      param_1 = fn_82D02B68(param_1,uVar6);
      *(unsigned int *)((int)lVar4 + 4) = uVar3 | 1;
    }
    else {
      *(unsigned int *)((int)uVar6 + 4) = uVar1 & 0xfffffffe;
      *(unsigned int *)(iVar5 + 4) = uVar3 | 1;
    }
    *(unsigned int *)(uVar3 + (int)lVar4) = uVar3;
    fn_82D02A58(param_1,lVar4);
  }
  return;
}

