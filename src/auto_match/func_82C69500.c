typedef unsigned char bool;
extern unsigned int lbl_83231E48;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82C69500(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  char in_RESERVE;
  unsigned char in_cr0;
  
  do {
    iVar2 = lbl_83231E48;
    if (in_RESERVE != '\0') {
      lbl_83231E48 = storeWordConditionalIndexed(1,0,0xffffffff83231e48);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  while (iVar2 != 0) {
    do {
    } while (lbl_83231E48 != 0);
    do {
      iVar2 = lbl_83231E48;
      if (in_RESERVE != '\0') {
        lbl_83231E48 = storeWordConditionalIndexed(1,0,0xffffffff83231e48);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  lbl_83231E48 = 0;
  return;
}

