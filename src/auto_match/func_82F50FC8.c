typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_4c;
extern unsigned int fStack_5c;
extern int fn_82A1DD38();
extern int fn_82F53548();
extern int fn_82F59D58();
extern int fn_82F59E40();
extern int fn_82F59F48();
extern int fn_8306ED28();
extern int fn_8306ED30();
extern unsigned int lbl_821AAD20;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82F50FC8(unsigned __int64 param_1,int *param_2,__int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 in_r0;
  __int64 lVar4;
  __int64 lVar5;
  double dVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_60 [4];
  float fStack_5c;
  unsigned char auStack_50 [4];
  float fStack_4c;
  
  fn_82A1DD38(param_3,param_2,0x1c0);
  if (*param_2 == 2) {
    puVar1 = (unsigned int *)((unsigned int)(param_2 + 8) & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(auStack_50 + (int)in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    dVar6 = (double)lbl_821AAD20;
    puVar1 = (unsigned int *)((unsigned int)(param_2 + 0x28) & 0xfffffff0);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    fStack_4c = lbl_821AAD20;
    fn_8306ED30();
    puVar1 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    fStack_5c = (float)dVar6;
    fn_82F53548();
    puVar1 = (unsigned int *)((unsigned int)(param_2 + 0x48) & 0xfffffff0);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    fn_8306ED30();
    puVar1 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    fStack_5c = (float)dVar6;
    fn_82F53548();
    fn_8306ED28();
    fn_82F53548();
    fn_82F59F48();
    lVar4 = param_3 + 0x20;
    lVar5 = 0x14;
    do {
      iVar3 = (int)lVar4;
      puVar1 = (unsigned int *)((int)param_2 + (iVar3 - (int)param_3) & 0xfffffff0);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs32,in_vs45); memcpy(in_vs32, &_vt0, 16); }
      puVar2 = (unsigned int *)((int)in_r0 + iVar3 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      fn_82F59E40();
      puVar1 = (unsigned int *)((int)in_r0 + iVar3 & 0xfffffff0);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      fn_82F59D58();
      puVar1 = (unsigned int *)((int)in_r0 + iVar3 & 0xfffffff0);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 != 0);
  }
  return;
}

