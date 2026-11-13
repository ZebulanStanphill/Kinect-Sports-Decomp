extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696BC8();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_82711100();


void fn_827114B0(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  char cVar5;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  double dVar10;
  unsigned int *apuStack_40 [2];
  __int64 alStack_38;
  
  cVar5 = fn_82695468(param_1,8);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff82005ea4,0,0);
  }
  else {
    lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      lVar7 = 0;
    }
    uVar8 = 0;
    puVar1 = *(unsigned int **)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
    puVar1[2] = puVar1[2] + 1;
    puVar9 = puVar1;
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar8 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(apuStack_40,uVar4,uVar8,0xffffffffffffffff,0);
      puVar9 = apuStack_40[0];
      apuStack_40[0][2] = apuStack_40[0][2] + 1;
      uVar6 = puVar1[2];
      puVar1[2] = (int)((unsigned __int64)uVar6 - 1);
      if ((unsigned __int64)uVar6 - 1 == 0) {
        fn_826944C8(puVar1);
      }
      uVar6 = apuStack_40[0][2];
      apuStack_40[0][2] = (int)((unsigned __int64)uVar6 - 1);
      if ((unsigned __int64)uVar6 - 1 == 0) {
        fn_826944C8(apuStack_40[0]);
      }
      uVar8 = *puVar9;
    }
    uVar6 = 0x3fffffff;
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,1);
      dVar10 = (double)fn_826972E0(uVar4,uVar2);
      uVar6 = (unsigned int)dVar10;
      alStack_38 = (__int64)(int)uVar6;
      uVar6 = 0xffffffffU - ((int)uVar6 >> 0x1f) & uVar6;
    }
    fn_82711100(&alStack_38,*(unsigned int *)(param_1 + 0x18),lVar7 + 0x30,uVar8,uVar6);
    iVar3 = ((unsigned int)((unsigned __int64)(alStack_38) >> 32));
    fn_82696BC8(*(unsigned int *)(param_1 + 4),((unsigned int)((unsigned __int64)(alStack_38) >> 32)));
    if (iVar3 != 0) {
      fn_826824B0(iVar3);
    }
    uVar6 = puVar9[2];
    puVar9[2] = (int)((unsigned __int64)uVar6 - 1);
    if ((unsigned __int64)uVar6 - 1 == 0) {
      fn_826944C8(puVar9);
    }
  }
  return;
}

