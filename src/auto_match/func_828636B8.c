typedef unsigned char bool;
extern unsigned int lbl_831575AC;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int fn_828636B8(void)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (lbl_831575AC == 0xffffffff) {
    uVar2 = KeTlsAlloc();
    do {
      uVar1 = lbl_831575AC;
      uVar3 = (unsigned __int64)lbl_831575AC;
      if (lbl_831575AC != 0xffffffff) {
        if (in_RESERVE != '\0') {
          lbl_831575AC = storeWordConditionalIndexed(uVar3,0,0xffffffff831575ac);
        }
        break;
      }
      if (in_RESERVE != '\0') {
        lbl_831575AC = storeWordConditionalIndexed(uVar2,0,0xffffffff831575ac);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 != 0xffffffff) {
      KeTlsFree(uVar3);
    }
  }
  return lbl_831575AC;
}

