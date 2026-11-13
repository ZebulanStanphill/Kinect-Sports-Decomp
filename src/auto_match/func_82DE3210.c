typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *fStack_1c;
extern unsigned int fStack_20;
extern int fn_82DE35A0();
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_82142EE8;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82DE3210(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  __int64 lVar9;
  int iVar10;
  int iVar11;
  __int64 lVar12;
  unsigned char in_vs32 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  float fStack_20;
  float fStack_1c;
  
  fn_82DE35A0();
  fVar7 = lbl_821AAD20;
  fVar6 = lbl_82142EE8;
  fVar5 = lbl_8201DFF4;
  iVar11 = 0;
  bVar4 = false;
  iVar8 = param_2;
  do {
    if (bVar4) {
      return;
    }
    iVar10 = 0;
    *(unsigned int *)(iVar8 + 0x44) = 3;
    iVar3 = iVar8;
    do {
      if (iVar3 + 0x10 != iVar11) {
        lVar9 = ZEXT48(&stack0x00000000) - 0x20;
        lVar12 = ZEXT48(&stack0x00000000) - 0x1c;
        vectorSubtractFloatingPoint(in_vs45,in_vs32);
        uVar2 = storeVectorElementWordIndexed(in_vs43,0,lVar9);
        *(unsigned int *)lVar9 = uVar2;
        vectorSubtractFloatingPoint(in_vs36,in_vs37);
        uVar2 = storeVectorElementWordIndexed(in_vs34,0,lVar12);
        *(unsigned int *)lVar12 = uVar2;
        if (ABS(fStack_1c) * fStack_1c < fStack_20 * fVar6) {
          iVar1 = *(int *)(*(int *)(iVar3 + 0x18) + 0xc);
          if ((*(float *)(param_2 + 0x40) <= fVar7) ||
             (*(float *)(param_2 + 0x40) * fVar5 <= *(float *)(iVar1 + 0x40))) {
            iVar11 = *(int *)(iVar10 * 0x10 + iVar8 + 0x18);
            bVar4 = *(int *)(iVar1 + 0x44) == 3;
            iVar8 = iVar1;
            break;
          }
        }
      }
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar10 < 3);
    if (iVar10 == 3) {
      return;
    }
  } while( true );
}

