#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_10;
extern unsigned int fStack_c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_821425C8;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();


unsigned __int64 fn_82DBC718(unsigned __int64 param_1,int *param_2,__int64 param_3,int param_4)

{
  float fVar1;
  unsigned int uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  __int64 lVar7;
  __int64 lVar8;
  int iVar9;
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  float fStack_10;
  float fStack_c;
  
  fVar6 = lbl_821425C8;
  fVar5 = lbl_82002C28;
  fVar4 = lbl_82002AE0;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) {
      return 1;
    }
    lVar8 = ZEXT48(&stack0x00000000) - 0xc;
    lVar7 = ZEXT48(&stack0x00000000) - 0x10;
    iVar9 = *param_2 + param_4;
    fVar3 = *(float *)(iVar9 + 0xb0);
    if (fVar4 - *(float *)(iVar9 + 0xb0) < 0.0) {
      fVar3 = fVar4;
    }
    uVar2 = storeVectorElementWordIndexed(in_vs45,0,lVar8);
    *(unsigned int *)lVar8 = uVar2;
    uVar2 = storeVectorElementWordIndexed(in_vs43,0,lVar7);
    *(unsigned int *)lVar7 = uVar2;
    if ((*(unsigned short *)(iVar9 + 0xc) & 0x7f) < (*(unsigned short *)(iVar9 + 10) & 0x7f)) {
      fVar1 = *(float *)(iVar9 + 0xfc);
    }
    else {
      fVar1 = *(float *)(iVar9 + 0x10c);
    }
    if (fVar1 < (fStack_10 * fVar3 * fVar3 + fStack_c) * fVar5 - fVar6) break;
    param_2 = param_2 + 1;
  }
  return 0;
}

