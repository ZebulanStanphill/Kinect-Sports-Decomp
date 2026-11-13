typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define _iStack00000010 ((*(unsigned __int64*)&iStack00000010))
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int fStack_60;
extern int fn_82CEC350();
extern unsigned int iStack00000010;
extern unsigned int iStack00000014;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


double fn_82D1FBB8(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned __int64 uVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010060;
  unsigned int in_register_00010064;
  unsigned int in_register_00010068;
  unsigned int in_vr6;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  int iStack00000010;
  int iStack00000014;
  float fStack_60;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  uVar3 = ZEXT48(&stack0x00000000);
  iStack00000010 = (int)((unsigned __int64)param_1 >> 0x20);
  iStack00000014 = (int)param_1;
  if ((*(unsigned int *)((iStack00000014 + 5) * 4 + iStack00000010) & 0xfffffffc) == 0) {
    return (double)lbl_821AAD20;
  }
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000100c0;
  puVar2[1] = in_register_000100c4;
  puVar2[2] = in_register_000100c8;
  puVar2[3] = in_vr12;
  vectorSubtractFloatingPoint(in_vs42,in_vs43);
  puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010090;
  puVar2[1] = in_register_00010094;
  puVar2[2] = in_register_00010098;
  puVar2[3] = in_vr9;
  vectorSubtractFloatingPoint(in_vs39,in_vs40);
  puVar2 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010060;
  puVar2[1] = in_register_00010064;
  puVar2[2] = in_register_00010068;
  puVar2[3] = in_vr6;
  _iStack00000010 = param_1;
  fn_82CEC350(uVar3 - 0x50,uVar3 - 0x40);
  uVar1 = storeVectorElementWordIndexed(in_vs37,0,uVar3 - 0x60);
  *(unsigned int *)(uVar3 - 0x60) = uVar1;
  return (double)fStack_60;
}

