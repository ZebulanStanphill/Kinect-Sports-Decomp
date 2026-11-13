extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82475C28();
extern int fn_8249ABC0();
extern int fn_8249B598();
extern int fn_824FC118();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8252AFE0();
extern int fn_8252CAF8();
extern int fn_8265C9E0();
extern int fn_82F4EBE8();
extern int fn_82F52188();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C6674;
extern unsigned int lbl_831C667C;
extern unsigned int lbl_831C6698;


void fn_824754D0(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  int iVar9;
  __int64 lVar10;
  double dVar11;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  iVar9 = param_2 * 0x18 + param_1;
  dVar11 = (double)ltcg_pool_0_0f;
  if (*(int *)(iVar9 + 0x54) == 0) {
    puVar8 = (unsigned int *)(param_1 + 0xc);
    if (puVar8 == (unsigned int *)0x0) {
      return;
    }
    uVar7 = (unsigned __int64)*puVar8;
    if (uVar7 == (uVar7 - 1) + (unsigned __int64)(uVar7 == 0)) {
      return;
    }
    uVar4 = fn_8249ABC0();
    fn_8249B598(uVar4,param_2);
    uVar4 = fn_82F4EBE8();
    fn_82F52188(auStack_40,uVar4,1);
    fn_82475C28(auStack_50,param_1);
    uVar7 = fn_8251F720(puVar8,0);
    uVar5 = fn_8265C9E0(0x60);
    if ((uVar5 & 0xffffffff) == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)fn_824FC118(uVar5,uVar7,*(unsigned int *)(param_1 + 0x50),param_2);
    }
    *(int **)(iVar9 + 0x54) = piVar6;
    puVar8 = (unsigned int *)(*piVar6 + 0x1dc);
    lVar10 = 2;
    do {
      puVar1 = puVar8 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *puVar1 | 8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    fn_8252AFE0(dVar11,**(unsigned int **)(iVar9 + 0x54));
    fn_8252CAF8(**(unsigned int **)(iVar9 + 0x54),1,0);
    fn_8252CAF8(**(unsigned int **)(iVar9 + 0x54),3,0);
    fn_8252CAF8(**(unsigned int **)(iVar9 + 0x54),2,1);
    if ((uVar7 & 0xffffffff) != 0) {
      fn_8251FA58(uVar7);
    }
  }
  *(float *)(iVar9 + 100) = (float)dVar11;
  uVar3 = lbl_831C667C;
  uVar2 = lbl_831C6674;
  *(unsigned int *)(iVar9 + 0x5c) = lbl_831C6698;
  *(unsigned int *)(iVar9 + 0x58) = uVar3;
  *(unsigned int *)((param_2 + 4) * 0x18 + param_1) = uVar2;
  return;
}

