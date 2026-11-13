typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern unsigned int uStack_8;
extern unsigned int uStack_c;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D6F590(double param_1,unsigned char *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char uVar3;
  unsigned char in_vs32 [16];
  unsigned char auVar4 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar5 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs56 [16];
  unsigned char in_vs58 [16];
  unsigned char in_vs59 [16];
  unsigned char in_vs60 [16];
  unsigned char in_vs62 [16];
  unsigned int uStack_10;
  unsigned int uStack_c;
  unsigned int uStack_8;
  
  uVar2 = ZEXT48(&stack0x00000000);
  vectorSubtractFloatingPoint(in_vs43,in_vs32);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs43,in_vs45); memcpy(auVar4, &_vt0, 16); }
  vectorSubtractFloatingPoint(in_vs32,in_vs43);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  vectorSubtractFloatingPoint(in_vs60,in_vs62);{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs58,in_vs59); memcpy(auVar5, &_vt1, 16); }
  uVar1 = storeVectorElementWordIndexed(in_vs56,0,uVar2 - 0x10);
  *(unsigned int *)(uVar2 - 0x10) = uVar1;
  if (param_1 <= (double)uStack_10) {
    uVar1 = storeVectorElementWordIndexed(auVar5,0,uVar2 - 0x10);
    *(unsigned int *)(uVar2 - 0x10) = uVar1;
    if (param_1 <= (double)uStack_10) {
      vectorSubtractFloatingPoint(in_vs45,in_vs32);
      uVar1 = storeVectorElementWordIndexed(in_vs45,0,uVar2 - 0x10);
      *(unsigned int *)(uVar2 - 0x10) = uVar1;
      uVar3 = 0;
      uVar1 = storeVectorElementWordIndexed(auVar5,0,uVar2 - 0xc);
      *(unsigned int *)(uVar2 - 0xc) = uVar1;
      uVar1 = storeVectorElementWordIndexed(auVar4,0,uVar2 - 8);
      *(unsigned int *)(uVar2 - 8) = uVar1;
      if (uStack_c * uStack_10 - uStack_8 * uStack_8 != lbl_821AAD20) goto LAB_82d6f66c;
    }
  }
  uVar3 = 1;
LAB_82d6f66c:
  *param_2 = uVar3;
  return;
}

