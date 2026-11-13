typedef unsigned char bool;
extern unsigned int lbl_8315C3E8;
extern unsigned int lbl_83215018;
extern unsigned int lbl_83215064;
extern unsigned int lbl_83215280;
extern unsigned int lbl_83215284;
extern unsigned int lbl_83215288;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_829C9FE0(void)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar1 = 0;
  if (lbl_83215064 != 0) {
    lbl_83215284 = 0;
    uVar3 = 0;
    puVar4 = &lbl_83215288;
    do {
      if (lbl_83215018 == 0) {
        *puVar4 = 1;
        do {
          if (in_RESERVE != '\0') {
            lbl_83215280 = storeWordConditionalIndexed
                                     ((unsigned __int64)lbl_83215280 + 1,0,0xffffffff83215280);
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        uVar1 = (*(int (**)())lbl_8315C3E8)(puVar4 + 2);
        if ((int)uVar1 == 0x103) {
          uVar1 = 0;
          goto LAB_829ca0c8;
        }
        if ((int)uVar1 != 0) {
          *puVar4 = 0;
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
          goto LAB_829ca0c8;
        }
      }
      else {
        uVar1 = 0xffffffffc000004b;
LAB_829ca0c8:
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      uVar3 = uVar3 + 0x80;
      puVar4 = puVar4 + 0x20;
    } while ((uVar3 & 0xffffffff) < 0x200);
  }
  return uVar1;
}

