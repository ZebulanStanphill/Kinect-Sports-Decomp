typedef unsigned char bool;
extern unsigned int lbl_83231E48;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82C69448(int *param_1,int param_2)

{
  int iVar1;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (param_2 == *param_1) {
    return;
  }
  do {
    iVar1 = lbl_83231E48;
    if (in_RESERVE != '\0') {
      lbl_83231E48 = storeWordConditionalIndexed(1,0,0xffffffff83231e48);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  while (iVar1 != 0) {
    do {
    } while (lbl_83231E48 != 0);
    do {
      iVar1 = lbl_83231E48;
      if (in_RESERVE != '\0') {
        lbl_83231E48 = storeWordConditionalIndexed(1,0,0xffffffff83231e48);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  if (param_2 != 0) {
    *(int *)(param_2 + 0x26c) = *(int *)(param_2 + 0x26c) + 1;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x26c) = *(int *)(iVar1 + 0x26c) + -1;
  }
  *param_1 = param_2;
  lbl_83231E48 = 0;
  return;
}

