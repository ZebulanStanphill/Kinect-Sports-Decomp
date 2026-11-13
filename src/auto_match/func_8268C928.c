typedef unsigned char bool;
extern int fn_8268ACE8();
extern int fn_8268C6A8();
extern int fn_826BD7D0();
extern unsigned int lbl_83155184;
extern unsigned int lbl_83155188;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_8268C928(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar2 = fn_8268ACE8(param_2);
  if ((param_3 < uVar2) && (param_3 < param_4)) {
    piVar1 = (int *)(*param_2 & 0xfffffffc);
    if (*piVar1 < 0) {
      iVar3 = param_4 - param_3;
      iVar4 = (int)piVar1 + param_3 + 8;
    }
    else {
      iVar3 = fn_826BD7D0(param_3,piVar1 + 2,0xffffffffffffffff);
      iVar4 = (int)piVar1 + iVar3 + 8;
      iVar3 = fn_826BD7D0(param_4 - param_3,iVar4,0xffffffffffffffff);
    }
    fn_8268C6A8(param_1,iVar4,iVar3);
  }
  else {
    *param_1 = &lbl_83155184;
    do {
      if (in_RESERVE != '\0') {
        lbl_83155188 = storeWordConditionalIndexed((unsigned __int64)lbl_83155188 + 1,0,0xffffffff83155188)
        ;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  return param_1;
}

