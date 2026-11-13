typedef unsigned char bool;
extern int fn_8267BF50();
extern int fn_8268B368();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_8268C750(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  __int64 lVar3;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar1 = *param_2;
  uVar2 = (unsigned __int64)uVar1 & 0xfffffffc;
  uVar4 = lbl_831E7E64;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 3) == 1) {
      uVar4 = fn_8267BF50(param_2);
    }
    else {
      uVar4 = 0;
      if ((uVar1 & 3) < 3) {
        uVar4 = param_2[1];
      }
    }
  }
  if (uVar4 == lbl_831E7E64) {
    *param_1 = (unsigned int *)uVar2;
    do {
      puVar5 = (unsigned int *)(uVar2 + 4);
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,uVar2 + 4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else {
    uVar1 = *(unsigned int *)uVar2;
    uVar4 = uVar1 & 0x7fffffff;
    lVar3 = fn_8268B368(param_1,lbl_831E7E64,uVar4,uVar1 & 0x80000000);
    fn_82F68CC0(lVar3 + 8,uVar2 + 8,uVar4);
    *param_1 = (int)lVar3;
  }
  return param_1;
}

