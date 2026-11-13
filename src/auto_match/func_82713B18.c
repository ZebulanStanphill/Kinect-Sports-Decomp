extern char lbl_82196F18[];
extern char lbl_82196F10[];
unsigned int  fn_82713B18(int param_1)

{
  if (*(char *)(param_1 + 0x20) != '\0') {
    return lbl_82196F18;
  }
  return lbl_82196F10;
}

