#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_20;
extern int fn_82CE4F10();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82006848;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();


char * fn_82CE5710(char *param_1)

{
  unsigned int uVar1;
  char cVar2;
  unsigned char in_vs45 [16];
  float fStack_20;
  
  fn_82CE4F10();
  uVar1 = storeVectorElementWordIndexed(in_vs45,0,ZEXT48(&stack0x00000000) - 0x20);
  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x20) = uVar1;
  if ((*param_1 == '\0') || (cVar2 = '\x01', lbl_82006848 <= ABS(fStack_20 - lbl_82002AE0))) {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  return param_1;
}

