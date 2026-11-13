extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_823599A8();
extern int fn_82359C18();
extern int fn_82363BF0();
extern int fn_82364FF0();
extern int fn_823F2E20();
extern int fn_824048B0();
extern int fn_824550A8();
extern int fn_82456250();
extern int fn_824563F0();
extern int fn_82458748();
extern int fn_82458DC8();
extern int fn_82490FC8();
extern int fn_824CCD80();
extern int fn_825603C8();
extern unsigned int iStack_4c;
extern unsigned int iStack_7c;
extern unsigned int lbl_821B2C5C;
extern unsigned int lbl_821B7CC4;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_82404B68;
extern unsigned int uStack_64;
extern unsigned int uStack_78;


void fn_82363490(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  unsigned int *puVar7;
  double dVar8;
  unsigned char auStack_80 [4];
  int iStack_7c;
  unsigned int uStack_78;
  unsigned char **ppuStack_70;
  unsigned char *puStack_6c;
  unsigned int *puStack_68;
  unsigned int uStack_64;
  unsigned char ***pppuStack_60;
  unsigned char **ppuStack_50;
  int iStack_4c;
  unsigned char ***pppuStack_40;
  
  piVar3 = *(int **)**(int **)(param_1 + 8);
  piVar6 = (int *)((int *)**(int **)(param_1 + 8))[1];
  uVar1 = fn_822ABA88(*(unsigned int *)(piVar3[4] * 4 + *piVar3),0);
  uVar2 = fn_822ABA88(*(unsigned int *)(piVar6[4] * 4 + *piVar6));
  fn_82458748(param_1 + 0x408,uVar1);
  fn_82458748(param_1 + 0x408,uVar2);
  fn_82363BF0(param_1,0,1,uVar1,uVar2);
  fn_82363BF0(param_1,1,0,uVar2,uVar1);
  piVar3 = (int *)(**(int (***)())(**(int **)(param_1 + 0x3ec) + 8))();
  (**(int (***)())(*piVar3 + 0x10))(piVar3,uVar1,uVar2);
  piVar3 = (int *)(**(int (***)())(**(int **)(param_1 + 0x3ec) + 0xc))();
  (**(int (***)())(*piVar3 + 4))();
  puVar7 = (unsigned int *)(param_1 + 0x6b0);
  *(unsigned int *)(param_1 + 0x6b0) = 0;
  *(unsigned int *)(param_1 + 0x70c) = 0;
  *(unsigned int *)(param_1 + 0x710) = 0;
  *(unsigned int *)(param_1 + 0x714) = 0;
  fn_824048B0(puVar7,0,uVar1);
  fn_824048B0(puVar7,1,uVar2);
  pppuStack_60 = &ppuStack_70;
  uStack_64 = uStack_78;
  ppuStack_70 = &lbl_821B7CC4;
  puStack_6c = &lbl_82404B68;
  puStack_68 = puVar7;
  uVar1 = fn_824563F0(auStack_80,param_1 + 0x820,&ppuStack_70);
  fn_823F2E20(param_1 + 0x704,uVar1);
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  *puVar7 = *puVar7 | 0x800;
  (**(int (***)())(**(int **)(param_1 + 0x3ec) + 4))();
  fn_82456250(param_1 + 0x548,1);
  dVar8 = (double)ltcg_pool_0_0f;
  fn_82458DC8(dVar8,param_1 + 0x538);
  *(float *)(param_1 + 0x444) = (float)dVar8;
  *(unsigned int *)(param_1 + 0x448) = 0xffffffff;
  if (*(int *)(param_1 + 0x788) != 0) {
    fn_82490FC8();
  }
  fn_824550A8(param_1 + 0x6a8);
  *(unsigned int *)(*(int *)(param_1 + 0x6ac) + 0x1d0) = 1;
  uVar4 = fn_82364FF0(param_1);
  pppuStack_40 = &ppuStack_50;
  *(unsigned int *)(param_1 + 0x794) = uVar4;
  ppuStack_50 = &lbl_821B2C5C;
  iStack_4c = param_1;
  fn_823599A8(param_1,&ppuStack_50);
  fn_82359C18(&ppuStack_50);
  iVar5 = fn_82364FF0(param_1);
  if (iVar5 != 0) {
    iVar5 = **(int **)(param_1 + 0x30);
    if (*(int *)(iVar5 + 0x22c) != 1) {
      uVar1 = fn_824CCD80(*(unsigned int *)(iVar5 + 0x10));
      fn_825603C8(uVar1,iVar5 + 0x20,1);
      *(unsigned int *)(iVar5 + 0x22c) = 1;
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x30) + 8);
    if (*(int *)(iVar5 + 0x22c) != 1) {
      uVar1 = fn_824CCD80(*(unsigned int *)(iVar5 + 0x10));
      fn_825603C8(uVar1,iVar5 + 0x20,1);
      *(unsigned int *)(iVar5 + 0x22c) = 1;
    }
  }
  *(unsigned int *)(param_1 + 1000) = 0;
  return;
}

