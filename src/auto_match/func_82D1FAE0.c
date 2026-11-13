#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_80;
extern int fn_82CEC350();
extern int fn_82D1F7E8();
extern unsigned int lbl_8201E104;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();


double fn_82D1FAE0(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 in_r0;
  unsigned __int64 uVar7;
  char cVar8;
  double dVar9;
  unsigned char in_vs43 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  float fStack_80;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  uVar7 = ZEXT48(&stack0x00000000);
  dVar9 = (double)lbl_821AAD20;
  cVar8 = fn_82D1F7E8();
  if (cVar8 != '\0') {
    for (puVar1 = *(unsigned int **)(param_1 + 0x2c); puVar1 != (unsigned int *)0x0;
        puVar1 = (unsigned int *)*puVar1) {
      iVar2 = puVar1[3];
      iVar3 = puVar1[4];
      puVar4 = (unsigned int *)(puVar1[2] + 0x10 & 0xfffffff0);
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      iVar6 = (int)in_r0;
      puVar5 = (unsigned int *)((unsigned int)(auStack_60 + iVar6) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      puVar4 = (unsigned int *)(iVar2 + 0x10U & 0xfffffff0);
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      puVar5 = (unsigned int *)((unsigned int)(auStack_50 + iVar6) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      puVar4 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      puVar5 = (unsigned int *)((unsigned int)(auStack_40 + iVar6) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      fn_82CEC350(uVar7 - 0x70,uVar7 - 0x60);
      uVar10 = storeVectorElementWordIndexed(in_vs43,0,uVar7 - 0x80);
      *(unsigned int *)(uVar7 - 0x80) = uVar10;
      dVar9 = (double)(float)((double)fStack_80 + dVar9);
    }
    dVar9 = (double)(float)(dVar9 * (double)lbl_8201E104);
  }
  return dVar9;
}

