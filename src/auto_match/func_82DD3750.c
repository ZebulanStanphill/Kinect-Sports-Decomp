typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_70;
extern int fn_82D33008();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82139D30;
extern unsigned int lbl_82139D32;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_82DD3750(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int iVar6;
  double dVar7;
  double dVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar9 [16];
  unsigned char in_vs63 [16];
  float fStack_70;
  
  dVar7 = (double)lbl_8200133C;
  dVar8 = (double)lbl_821AAD20;
  iVar6 = 0;
  do {
    cVar2 = (&lbl_82139D30)[iVar6];
    cVar1 = (&lbl_82139D32)[iVar6];
    if ((dVar8 <= (double)param_3[cVar1]) && (dVar8 <= (double)param_3[cVar2])) {
      vectorSubtractFloatingPoint(in_vs45,in_vs32);
      vectorSubtractFloatingPoint(in_vs44,in_vs32);
      vectorSubtractFloatingPoint(in_vs41,in_vs32);
      vectorSubtractFloatingPoint(in_vs40,in_vs32);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs63,in_vs33); memcpy(auVar9, &_vt0, 16); }
      uVar3 = storeVectorElementWordIndexed(auVar9,0,ZEXT48(&stack0x00000000) - 0x70);
      *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x70) = uVar3;
      iVar5 = fn_82D33008((double)fStack_70);
      if (iVar5 == 0) {
        param_3[cVar1] = (float)dVar7;
      }
      else {
        param_3[cVar2] = (float)dVar7;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  if ((double)*param_3 <= dVar8) {
    if ((double)param_3[1] <= dVar8) {
      uVar4 = 2;
      if ((double)param_3[2] <= dVar8) {
        uVar4 = 0xffffffffffffffff;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

