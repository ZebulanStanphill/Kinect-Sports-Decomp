typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82275128();
extern int fn_8227F578();
extern int fn_82628520();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_8227F358(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  unsigned __int64 *puVar6;
  unsigned __int64 *puVar7;
  int *piVar8;
  int iVar9;
  __int64 lVar10;
  int iStack_30;
  int iStack_2c;
  
  param_1[4] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_82F68CC0(param_1 + 5,param_2,0x58);
  uVar1 = param_1[8];
  param_1[0x1b] = 0;
  param_1[0x3d] = 0;
  param_1[0x1e] = uVar1;
  iStack_30 = ltcg_pool_0_0f;
  param_1[0x24] = uVar1;
  param_1[0x20] = uVar1;
  iStack_2c = iStack_30;
  uVar2 = param_1[7];
  param_1[0x1d] = uVar2;
  param_1[0x1f] = uVar2;
  param_1[0x22] = uVar1;
  param_1[0x1f] = (float)param_1[9] + (float)param_1[0x1f];
  param_1[0x21] = param_1[0x1f];
  param_1[0x22] = (float)param_1[10] + (float)param_1[0x22];
  param_1[0x24] = (float)param_1[0x24] + (float)param_1[10];
  param_1[0x23] = uVar2;
  iVar5 = fn_8265C9E0(0x44);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    *(unsigned __int64 *)(iVar5 + 0x20) = CONCAT44(iStack_30,iStack_2c);
    puVar6 = (unsigned __int64 *)(iVar5 + -8);
    *(unsigned __int64 *)(iVar5 + 0x28) = CONCAT44(iStack_30,iStack_2c);
    uVar1 = lbl_821CA460;
    puVar7 = (unsigned __int64 *)(param_1 + 0x1b);
    *(unsigned int *)(iVar5 + 0x34) = 1;
    *(unsigned int *)(iVar5 + 0x30) = uVar1;
    *(unsigned int *)(iVar5 + 0x38) = 3;
    lVar10 = 4;
    do {
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar7;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    *(unsigned int *)(iVar5 + 0x3c) = 0;
    *(unsigned int *)(iVar5 + 0x40) = 0;
  }
  param_1[0x1c] = iVar5;
  iVar5 = fn_8227F578(param_1);
  iVar9 = 0;
  do {
    iVar5 = fn_82275128(iVar5);
    iVar3 = *(int *)(iVar9 + iVar5);
    iStack_30 = param_1[0x1c];
    iVar5 = iVar3 + 0x4c;
    for (piVar8 = *(int **)(iVar3 + 0x4c); piVar8 != *(int **)(iVar3 + 0x50); piVar8 = piVar8 + 1) {
      if (*piVar8 == iStack_30) {
        bVar4 = true;
        goto LAB_8227f4d0;
      }
    }
    bVar4 = false;
LAB_8227f4d0:
    if (!bVar4) {
      iVar5 = fn_82628520(iVar5,&iStack_30);
    }
    iVar9 = iVar9 + 4;
    if (7 < iVar9) {
      return param_1;
    }
  } while( true );
}

