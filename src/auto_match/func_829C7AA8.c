typedef unsigned char bool;
extern unsigned int lbl_83214FFC;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_829C7AA8(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (lbl_83214FFC == 0) {
    return 0xffffffff8000ffff;
  }
  if (((unsigned int)param_2 < 2) && (param_1 == 0)) {
    lVar2 = param_2 * 0x184 + -0x7cdea954;
    do {
      puVar3 = (unsigned int *)lVar2;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar3 + 1,0,lVar2);
        *puVar3 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    return 0;
  }
  return 0xffffffff80070057;
}

