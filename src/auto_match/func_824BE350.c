extern unsigned int *auStack_10;
extern int fn_82837D98();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;


unsigned int fn_824BE350(int *param_1)

{
  int iVar1;
  unsigned int auStack_10 [4];
  
  if ((lbl_832659CD == '\0') ||
     ((*(unsigned char *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) & 8) != 0)) {
    iVar1 = param_1[0x3c];
  }
  else {
    iVar1 = param_1[0x1f];
    if (iVar1 == 0) {
      iVar1 = param_1[0x3a];
    }
    else {
      if (iVar1 != 3) {
        if ((iVar1 != 1) && (iVar1 = *(int *)(*param_1 + 0xa4), iVar1 != 0)) {
          return *(unsigned int *)(iVar1 + 0x4c);
        }
        return *(unsigned int *)(*(int *)(*param_1 + 0xa0) + 0x4c);
      }
      iVar1 = param_1[0x3b];
    }
  }
  fn_82837D98(*(unsigned int *)(iVar1 + 0x14),0,auStack_10);
  return auStack_10[0];
}

