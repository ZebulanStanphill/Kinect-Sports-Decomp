extern unsigned int *auStack_20;
extern int fn_82E2D9C0();
extern int fn_82EEA6E8();
extern unsigned int lbl_82152F10;


void fn_82E3E728(unsigned int *param_1)

{
  unsigned int iVar1;
  unsigned char auStack_20 [16];
  
  iVar1 = param_1[0x19];
  *param_1 = &lbl_82152F10;
  if (iVar1 != 0) {
    do {
      iVar1 = fn_82EEA6E8(param_1,auStack_20);
    } while ((int)iVar1 != 0);
  }
  fn_82E2D9C0(param_1 + 1);
  return;
}

