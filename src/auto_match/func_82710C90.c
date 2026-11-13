extern int fn_82681838();
extern int fn_82693A98();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_82710AD8();


void fn_82710C90(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar5;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  double dVar11;
  int aiStack_40 [2];
  __int64 lStack_38;
  
  cVar5 = fn_82695468(param_1,8);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff82005ea4,0,0);
  }
  else {
    lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      lVar6 = 0;
    }
    uVar9 = 0;
    lVar7 = -1;
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      dVar11 = (double)fn_826972E0(uVar3,uVar2);
      lStack_38 = (__int64)(int)dVar11;
      uVar9 = (unsigned __int64)(unsigned int)(int)dVar11;
    }
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,1);
      dVar11 = (double)fn_826972E0(uVar3,uVar2);
      uVar1 = (unsigned int)dVar11;
      lStack_38 = (__int64)(int)uVar1;
      uVar8 = (unsigned __int64)uVar1;
      uVar10 = uVar9;
      if (((int)uVar1 < (int)uVar9) &&
         (iVar4 = fn_82693A98(lVar6 + 0x30), uVar8 = uVar9, uVar10 = (unsigned __int64)uVar1,
         iVar4 <= (int)uVar9)) {
        fn_82681838(*(unsigned int *)(param_1 + 4),
                          (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
        return;
      }
      uVar9 = (uVar10 >> 0x1f) - 1 & uVar10;
      lVar7 = uVar8 - uVar9;
    }
    uVar3 = fn_82710AD8(aiStack_40,lVar6 + 0x30,uVar9,lVar7);
    fn_82681838(*(unsigned int *)(param_1 + 4),uVar3);
    lVar6 = (unsigned __int64)*(unsigned int *)(aiStack_40[0] + 8) - 1;
    *(int *)(aiStack_40[0] + 8) = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8(aiStack_40[0]);
    }
  }
  return;
}

