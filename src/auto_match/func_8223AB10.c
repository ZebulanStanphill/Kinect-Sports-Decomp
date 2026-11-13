typedef unsigned char bool;
#define true 1
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_8223AB10(void)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r10;
  unsigned __int64 in_r11;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char in_cr6;
  
  do {
    if ((bool)(in_cr6 >> 1 & 1)) {
      return 0;
    }
    do {
      puVar3 = (unsigned int *)in_r10;
      uVar1 = *puVar3;
      if (uVar1 != (unsigned int)in_r11) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,in_r10);
          *puVar3 = uVar2;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(in_r11 + 1,0,in_r10);
        *puVar3 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 == (unsigned int)in_r11) {
      return 1;
    }
    in_r11 = (unsigned __int64)*puVar3;
    in_cr6 = (*puVar3 == 0) << 1;
  } while( true );
}

