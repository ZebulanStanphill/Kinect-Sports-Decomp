#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_60;
extern unsigned int fStack_70;
extern unsigned int lbl_82134504;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();


void fn_82D486C8(int param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  unsigned char in_vs44 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  float fStack_70;
  unsigned char auStack_60 [96];
  
  iVar5 = 0;
  dVar8 = (double)lbl_82134504;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar6 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x44) + iVar6);
      (**(int (***)())(*piVar1 + 0x38))(piVar1,param_2,ZEXT48(&stack0x00000000) - 0x60);
      lVar4 = ZEXT48(&stack0x00000000) - 0x70;
      puVar3 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      uVar2 = storeVectorElementWordIndexed(in_vs44,0,lVar4);
      *(unsigned int *)lVar4 = uVar2;
      if (dVar8 < (double)fStack_70) {
        puVar3 = (unsigned int *)((int)in_r0 + param_3 & 0xfffffff0);
        *puVar3 = uVar9;
        puVar3[1] = uVar10;
        puVar3[2] = uVar11;
        puVar3[3] = uVar12;
        dVar8 = (double)fStack_70;
        iVar5 = iVar7;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar7 < *(int *)(param_1 + 0x48));
  }
  *(unsigned int *)(param_3 + 0xc) = (*(unsigned int *)(param_3 + 0xc) & 0xc0ffffff) + iVar5 * 0x100 | 0x3f000000;
  return;
}

