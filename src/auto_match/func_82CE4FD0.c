#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82CE4F10();
extern unsigned int lbl_82002AE0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_c;
extern unsigned __int64 storeVectorElementWordIndexed();


unsigned __int64 fn_82CE4FD0(unsigned __int64 param_1)

{
  unsigned int uVar1;
  char *pcVar2;
  __int64 lVar3;
  unsigned char uVar4;
  double extraout_f1;
  unsigned char in_vs45 [16];
  unsigned int uStack_c;
  
  pcVar2 = (char *)fn_82CE4F10(ZEXT48(&stack0x00000000) - 0x10);
  if (*pcVar2 != '\0') {
    lVar3 = ZEXT48(&stack0x00000000) - 0xc;
    uVar1 = storeVectorElementWordIndexed(in_vs45,0,lVar3);
    *(unsigned int *)lVar3 = uVar1;
    uVar4 = 1;
    if (ABS((double)(uStack_c - lbl_82002AE0)) < extraout_f1) goto LAB_82ce5028;
  }
  uVar4 = 0;
LAB_82ce5028:
  *(unsigned char *)param_1 = uVar4;
  return param_1;
}

