extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696480();
extern int fn_82696AD0();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_8269A418();
extern int fn_8269B0E8();
extern int fn_826C59F8();


void fn_826C7E00(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  double dVar9;
  int aiStack_40 [2];
  __int64 lStack_38;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  uVar8 = 0;
  *puVar1 = 0;
  lVar3 = fn_826C59F8(param_1);
  if ((lVar3 != 0) && (1 < *(int *)(param_1 + 0x1c))) {
    if (*(int *)(param_1 + 0x1c) == 3) {
      uVar2 = *(unsigned int *)(param_1 + 0x18);
      uVar8 = fn_826957D0(param_1,2);
      uVar8 = fn_82696AD0(uVar8,uVar2);
    }
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    fn_82696D38(aiStack_40,uVar4,uVar2,0xffffffffffffffff,0);
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,1);
    dVar9 = (double)fn_826972E0(uVar4,uVar2);
    lStack_38 = (__int64)(int)dVar9;
    iVar5 = fn_8269B0E8(lVar3,aiStack_40,(unsigned __int64)(unsigned int)(int)dVar9 + 0x4000,uVar8);
    if (iVar5 != 0) {
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    }
    lVar7 = (unsigned __int64)*(unsigned int *)(aiStack_40[0] + 8) - 1;
    *(int *)(aiStack_40[0] + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8(aiStack_40[0]);
    }
    uVar6 = fn_8269A418(lVar3);
    if (5 < uVar6) {
      fn_82696480(*(unsigned int *)(param_1 + 4),iVar5);
    }
    if (iVar5 != 0) {
      fn_8267C498(iVar5);
    }
  }
  return;
}

