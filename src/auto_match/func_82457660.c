typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_4c;
extern int fn_822B2F90();
extern int fn_822B3488();
extern int fn_82457328();
extern unsigned int uStack_50;
extern V16 vectorCompareEqualToFloatingPoint();


unsigned int *
fn_82457660(double param_1,unsigned int *param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  int in_r0;
  unsigned int *puVar2;
  unsigned int **ppuVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned char in_cr6;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int *puStack_60;
  unsigned int *apuStack_5c [3];
  unsigned int uStack_50;
  float fStack_4c;
  
  uVar1 = *(unsigned int *)(param_3 + 0x14);
  fn_822B3488(-param_1,&uStack_50,uVar1);
  puVar2 = (unsigned int *)((int)&uStack_50 + in_r0 & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  vectorCompareEqualToFloatingPoint(in_vs45,in_vs32);
  uVar4 = (~((unsigned __int64)in_cr6 << 4) & 0xffffffff) >> 7 & 1;
  if ((uVar4 != 0) && (param_5 != 0)) {
    iVar5 = 4;
    fn_822B2F90(&uStack_50,uVar1);
    if (uStack_50 == 0) {
      iVar5 = 0;
    }
    else if (uStack_50 == 1) {
      iVar5 = 1;
    }
    else if (uStack_50 < 3) {
      iVar5 = 2;
    }
    else if (uStack_50 == 3) {
      iVar5 = 3;
    }
    puStack_60 = *(unsigned int **)(param_3 + 8);
    puVar2 = (unsigned int *)(*(unsigned int **)(param_3 + 8))[1];
    while (*(char *)((int)puVar2 + 0x31) == '\0') {
      if ((int)puVar2[3] < iVar5) {
        puVar2 = (unsigned int *)puVar2[2];
      }
      else {
        puStack_60 = puVar2;
        puVar2 = (unsigned int *)*puVar2;
      }
    }
    if ((puStack_60 == *(unsigned int **)(param_3 + 8)) || (iVar5 < (int)puStack_60[3])) {
      ppuVar3 = apuStack_5c;
      apuStack_5c[0] = *(unsigned int **)(param_3 + 8);
    }
    else {
      ppuVar3 = &puStack_60;
    }
    fn_82457328((double)fStack_4c,ZEXT48(*ppuVar3) + 0x10);
  }
  *param_2 = (int)uVar4;
  puVar2 = (unsigned int *)((unsigned int)(param_2 + 4) & 0xfffffff0);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  return param_2;
}

