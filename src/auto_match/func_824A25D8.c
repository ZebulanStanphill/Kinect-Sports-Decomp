typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack00000010;
extern unsigned int fStack00000018;
extern int fn_8249ABC0();
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned __int64 fn_824A25D8(double param_1)

{
  int iVar1;
  bool bVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  float in_register_00010010;
  float in_register_00010018;
  float fStack00000010;
  float fStack00000018;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  fStack00000010 = in_register_00010010;
  fStack00000018 = in_register_00010018;
  iVar4 = fn_8249ABC0();
  iVar4 = *(int *)(iVar4 + 0xec);
  iVar1 = *(int *)(iVar4 + 0x44);
  if (*(int *)(iVar4 + 0x40) == iVar1) {
    uStack_20 = *(float *)(iVar4 + 0x20);
    uStack_1c = *(float *)(iVar4 + 0x24);
    uStack_18 = *(float *)(iVar4 + 0x28);
    uStack_14 = *(float *)(iVar4 + 0x2c);
  }
  else {
    uStack_20 = *(float *)(iVar1 + -0x14);
    uStack_1c = *(float *)(iVar1 + -0x10);
    uStack_18 = *(float *)(iVar1 + -0xc);
    uStack_14 = *(float *)(iVar1 + -8);
  }
  if ((fStack00000010 < (float)((double)uStack_20 + param_1)) ||
     (uVar5 = 1, (float)((double)uStack_18 - param_1) <= fStack00000010)) {
    uVar5 = 0;
  }
  if ((fStack00000018 < (float)((double)uStack_1c + param_1)) ||
     (bVar2 = true, (float)((double)uStack_14 - param_1) <= fStack00000018)) {
    bVar2 = false;
  }
  if (((unsigned int)LZCOUNT(uVar5) >> 5 != 0) || (uVar3 = 0, !bVar2)) {
    uVar3 = 1;
  }
  return uVar3;
}

