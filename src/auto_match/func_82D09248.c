typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_30;
extern int fn_82D08DA0();
extern unsigned int lbl_820D2840;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_821CEA90;
extern unsigned int lbl_821CEAA0;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82D09248(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int in_r0;
  char *pcVar4;
  unsigned char in_vs35 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  float fStack_30;
  
  pcVar4 = (char *)fn_82D08DA0(param_1,param_2,0x1e);
  if (*pcVar4 == '\0') {
    puVar1 = (unsigned int *)((unsigned int)(&lbl_821CEAA0 + in_r0) & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(&lbl_820D2840 + in_r0) & 0xfffffff0);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    uVar11 = puVar2[2];
    uVar12 = puVar2[3];
    puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar8;
    puVar1 = (unsigned int *)((unsigned int)(&lbl_821CEA90 + in_r0) & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar8 = puVar1[2];
    uVar7 = puVar1[3];
    puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
    puVar1 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar8;
    puVar1[3] = uVar7;
  }
  else {
    iVar3 = (int)param_2;
    puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar8;
    puVar1 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar8;
    puVar1 = (unsigned int *)(iVar3 + 0x20U & 0xfffffff0);
    uVar6 = *puVar1;
    uVar8 = puVar1[1];
    uVar7 = puVar1[2];
    uVar9 = puVar1[3];
    puVar1 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
    *puVar1 = uVar6;
    puVar1[1] = uVar8;
    puVar1[2] = uVar7;
    puVar1[3] = uVar9;
    vectorSubtractFloatingPoint(in_vs37,in_vs38);
    uVar5 = storeVectorElementWordIndexed(in_vs35,0,ZEXT48(&stack0x00000000) - 0x30);
    *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x30) = uVar5;
    if (fStack_30 < lbl_821AAD20) {
      puVar1 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
      *puVar1 = uVar6;
      puVar1[1] = uVar8;
      puVar1[2] = uVar7;
      puVar1[3] = uVar9;
    }
  }
  return;
}

