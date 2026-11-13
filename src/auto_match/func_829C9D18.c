typedef unsigned char bool;
#define true 1
extern unsigned int lbl_8315C3E8;
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215018;
extern unsigned int lbl_83215070;
extern unsigned int lbl_8321507C;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_829C9D18(void)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar5 = 0;
  lbl_8321507C = 0;
  puVar1 = &lbl_83215000;
  do {
    puVar6 = puVar1 + 0x20;
    if (lbl_83215018 != 0) {
      return 0xffffffffc000004b;
    }
    *puVar6 = 1;
    do {
      if (in_RESERVE != '\0') {
        lbl_83215070 = storeWordConditionalIndexed((unsigned __int64)lbl_83215070 + 1,0,0xffffffff83215070)
        ;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar2 = (*(int (**)())lbl_8315C3E8)(puVar1 + 0x22);
    iVar3 = (int)uVar2;
    if (iVar3 == 0x103) {
      uVar2 = 0;
    }
    else if (iVar3 != 0) {
      *puVar6 = 0;
      do {
        uVar4 = (unsigned __int64)lbl_83215070;
        if (in_RESERVE != '\0') {
          lbl_83215070 = storeWordConditionalIndexed(uVar4 - 1,0,0xffffffff83215070);
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)(uVar4 - 1) == 0) {
        sync(0);
        KeSetEvent(0xffffffff83215618,1,0);
      }
      if (iVar3 < 0) {
        return uVar2;
      }
    }
    uVar5 = uVar5 + 0x80;
    puVar1 = puVar6;
    if (0x1ff < uVar5) {
      return uVar2;
    }
  } while( true );
}

