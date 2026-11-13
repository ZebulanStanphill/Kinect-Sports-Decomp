typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82DAD288();
extern int fn_82DAEFD0();
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x82dab1e4) */

unsigned __int64 fn_82DAB098(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned short uVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs50 [16];
  unsigned char auVar6 [16];
  unsigned char auVar7 [16];
  unsigned char in_vs56 [16];
  unsigned char in_vs57 [16];
  unsigned char in_vs58 [16];
  unsigned char in_vs59 [16];
  
  uVar4 = ZEXT48(&stack0x00000000);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  vectorSubtractFloatingPoint(in_vs32,in_vs44);
  uVar5 = 0;{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs58,in_vs59); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs56,in_vs57); memcpy(auVar6, &_vt1, 16); }{ V16 _vt2 = vectorAddFloatingPoint(auVar7,in_vs37); memcpy(auVar7, &_vt2, 16); }{ V16 _vt3 = vectorAddFloatingPoint(auVar6,in_vs35); memcpy(auVar6, &_vt3, 16); }
  vectorSubtractFloatingPoint(auVar6,auVar7);
  uVar3 = storeVectorElementWordIndexed(in_vs50,0,uVar4 - 0x90);
  *(unsigned int *)(uVar4 - 0x90) = uVar3;
  if (*(int *)(param_1 + 8) == 0) {
    uVar5 = *(unsigned short *)(param_1 + 0x12);
  }
  fn_82DAEFD0(*(unsigned int *)(param_1 + 0xc),uVar4 - 0x80);
  if (*(short *)(iVar1 + 0x204) != 0) {
    fn_82DAD288(iVar1,uVar4 - 0x80);
  }
  if (*(short *)(iVar2 + 0x204) != 0) {
    fn_82DAD288(iVar2,uVar4 - 0x80);
  }
  *(unsigned short *)(param_1 + 0x18) = uVar5;
  return 0;
}

