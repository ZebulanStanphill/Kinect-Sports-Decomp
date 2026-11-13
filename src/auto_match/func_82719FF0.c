extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_8269A418();
extern int fn_826A7398();
extern int fn_826A98D8();
extern int fn_826F5C10();
extern int fn_827032E0();
extern int fn_827035B0();
extern unsigned int iStack_5c;
extern unsigned int lbl_82196582;


void fn_82719FF0(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar8;
  unsigned __int64 uVar6;
  char *pcVar9;
  unsigned __int64 uVar7;
  int iVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned int *puStack_60;
  int iStack_5c;
  unsigned int *puStack_58;
  unsigned int *puStack_54;
  unsigned char * apuStack_50;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  lVar12 = 0;
  *puVar1 = 2;
  puVar1[4] = 0;
  if (*(int *)(param_1 + 0x1c) < 2) {
    return;
  }
  iVar8 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
  if ((iVar8 == 0x19) && ((unsigned __int64)*(unsigned int *)(param_1 + 8) != 0)) {
    lVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x18);
  uVar6 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_60,uVar6,uVar2,0xffffffffffffffff,0);
  pcVar9 = (char *)fn_826957D0(param_1,1);
  uVar2 = *(unsigned int *)(param_1 + 0x18);
  if (*pcVar9 == '\a') {
    uVar6 = fn_826957D0(param_1,1);
    iVar8 = fn_82695370(uVar6,uVar2);
    if (iVar8 != 0) {
      *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
    }
  }
  else {
    uVar6 = fn_826957D0(param_1,1);
    fn_82696D38(&iStack_5c,uVar6,uVar2,0xffffffffffffffff,0);
    iVar8 = fn_826A98D8(*(unsigned int *)(param_1 + 0x18),&iStack_5c,0);
    if (iVar8 != 0) {
      *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
    }
    lVar11 = (unsigned __int64)*(unsigned int *)(iStack_5c + 8) - 1;
    *(int *)(iStack_5c + 8) = (int)lVar11;
    if (lVar11 == 0) {
      fn_826944C8(iStack_5c);
    }
  }
  if (iVar8 == 0) {
    apuStack_50 = &lbl_82196582;
    uVar7 = fn_8269A418(*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x74));
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar6 = fn_826957D0(param_1,1);
    fn_82696D38(&puStack_58,uVar6,uVar2,0xffffffffffffffff,0);
    iVar10 = fn_826F5C10(*puStack_58,&apuStack_50,-(6 < uVar7) & 1);
    uVar5 = puStack_58[2];
    puStack_58[2] = (int)((unsigned __int64)uVar5 - 1);
    if ((unsigned __int64)uVar5 - 1 == 0) {
      fn_826944C8(puStack_58);
    }
    if (iVar10 == -1) goto LAB_8271a284;
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = *puStack_60;
    uVar6 = fn_826957D0(param_1,1);
    fn_82696D38(&puStack_54,uVar6,uVar2,0xffffffffffffffff,0);
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = *puStack_54;
    uVar6 = fn_826A7398(uVar2);
    fn_827032E0(uVar6,uVar4,uVar3,uVar2,0,lVar12);
    uVar5 = puStack_54[2];
    puStack_54[2] = (int)((unsigned __int64)uVar5 - 1);
    if ((unsigned __int64)uVar5 - 1 == 0) {
      fn_826944C8(puStack_54);
    }
  }
  else {
    uVar2 = *puStack_60;
    uVar6 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
    fn_827035B0(uVar6,iVar8,uVar2,0,lVar12);
  }
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 2;
  puVar1[4] = 1;
  if (iVar8 != 0) {
    fn_8267C498(iVar8);
  }
LAB_8271a284:
  uVar5 = puStack_60[2];
  puStack_60[2] = (int)((unsigned __int64)uVar5 - 1);
  if ((unsigned __int64)uVar5 - 1 == 0) {
    fn_826944C8(puStack_60);
  }
  return;
}

