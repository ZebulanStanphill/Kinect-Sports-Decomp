extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_82FF9188(int param_1)

{
  if ((*(unsigned char *)(param_1 + 0x48) & 0x40) != 0) {
    fn_82FA5190(lbl_831BC768,*(unsigned int *)(param_1 + 0x28));
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned char *)(param_1 + 0x48) = *(unsigned char *)(param_1 + 0x48) & 0xbf;
    return;
  }
  *(unsigned int *)(param_1 + 0x28) = 0;
  return;
}

