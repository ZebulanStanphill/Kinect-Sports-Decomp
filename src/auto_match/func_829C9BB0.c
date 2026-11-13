extern unsigned int *auStack_20;
extern int fn_829C9B88();
extern unsigned int lbl_8315C3E8;
extern unsigned int uStack_10;
extern unsigned int uStack_1c;


unsigned __int64 fn_829C9BB0(int param_1)

{
  unsigned __int64 uVar1;
  unsigned char auStack_20 [4];
  unsigned int uStack_1c;
  unsigned int ***pppuStack_18;
  unsigned int ***pppuStack_14;
  unsigned int uStack_10;
  
  auStack_20[0] = 0;
  pppuStack_18 = &pppuStack_18;
  *(unsigned char **)(param_1 + 0x10) = auStack_20;
  pppuStack_14 = &pppuStack_18;
  *(int (***)())(param_1 + 0x14) = fn_829C9B88;
  uStack_1c = 0;
  uVar1 = (*(int (**)())lbl_8315C3E8)();
  if ((int)uVar1 == 0x103) {
    KeWaitForSingleObject(auStack_20,3,0,0,0);
    uVar1 = (unsigned __int64)uStack_10;
  }
  return uVar1;
}

