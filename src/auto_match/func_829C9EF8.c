typedef unsigned char bool;
extern unsigned int lbl_8315C3E8;
extern unsigned int lbl_83215018;
extern unsigned int lbl_83215280;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_829C9EF8(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (lbl_83215018 == 0) {
    *param_1 = 1;
    do {
      if (in_RESERVE != '\0') {
        lbl_83215280 = storeWordConditionalIndexed((unsigned __int64)lbl_83215280 + 1,0,0xffffffff83215280)
        ;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar1 = (*(int (**)())lbl_8315C3E8)(param_1 + 2);
    if ((int)uVar1 == 0x103) {
      uVar1 = 0;
    }
    else if ((int)uVar1 != 0) {
      *param_1 = 0;
      do {
        uVar2 = (unsigned __int64)lbl_83215280;
        if (in_RESERVE != '\0') {
          lbl_83215280 = storeWordConditionalIndexed(uVar2 - 1,0,0xffffffff83215280);
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)(uVar2 - 1) == 0) {
        sync(0);
        KeSetEvent(0xffffffff83215618,1,0);
      }
    }
  }
  else {
    uVar1 = 0xffffffffc000004b;
  }
  return uVar1;
}

