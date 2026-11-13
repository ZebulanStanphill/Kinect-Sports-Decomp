typedef struct { unsigned __int64 lo, hi; } V16;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_90;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_a0;
extern int fn_830A6E50();
extern int fn_830A6FF8();
extern int fn_830A7130();
extern unsigned int iStack_7c;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_78;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82D9E6B0(unsigned __int64 param_1,int *param_2,unsigned int *param_3,int param_4,int param_5,
                  int param_6,unsigned int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int in_r0;
  unsigned __int64 uVar7;
  double dVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  float fStack_a0;
  unsigned char auStack_90 [20];
  int iStack_7c;
  unsigned __int64 uStack_78;
  float fStack_70;
  float fStack_6c;
  
  uVar7 = ZEXT48(&stack0x00000000);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  iVar2 = *(int *)(iVar1 + 4);
  iVar3 = *(int *)(param_6 + 0x4c);
  iVar1 = (int)*(float *)*param_3;
  *param_3 = (float *)*param_3 + 4;
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  iVar4 = *(int *)(iVar1 * 4 + *(int *)(param_4 + 0x34));
  puVar5 = (unsigned int *)((iVar2 + 2) * 0x10 + param_5 & 0xfffffff0);
  uVar9 = puVar5[1];
  uVar10 = puVar5[2];
  uVar11 = puVar5[3];
  puVar6 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar9;
  puVar6[2] = uVar10;
  puVar6[3] = uVar11;
  uVar9 = storeVectorElementWordIndexed(in_vs43,0,uVar7 - 0xa0);
  *(unsigned int *)(uVar7 - 0xa0) = uVar9;
  if (iVar4 != 0) {
    uVar9 = *param_7;
    dVar8 = (double)lbl_821AAD20;
    uStack_78 = CONCAT44(lbl_821AAD20,lbl_821AAD20);
    fn_830A6FF8(uVar7 - 0x90,param_5 + 0x10,param_6,uVar9,uVar7 - 0x80);
    fStack_a0 = (float)(iVar1 >> 0x1f);
    fStack_6c = -fStack_a0;
    uStack_78 = *(unsigned __int64 *)(*(int *)(param_5 + 0xb8) * 8 + iVar3);
    fStack_70 = (float)dVar8;
    iStack_7c = param_6;
    fn_830A6E50(iVar4,uVar7 - 0x80,uVar7 - 0x60);
    fn_830A7130(uVar7 - 0x60,param_6,uVar9,param_7);
  }
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

