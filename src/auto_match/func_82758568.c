extern int fn_8267B890();
extern int fn_8275D280();
extern int fn_82761DE8();
extern int fn_82765CA0();
extern unsigned int lbl_831E7E64;

void fn_82758568(int param_1)
{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int old;

  fn_8275D280(param_1 + 0xc);
  uVar1 = fn_8267B890(lbl_831E7E64, 0x7c, 0);
  if (uVar1 != 0) {
    uVar2 = fn_82765CA0(uVar1, 0x1ff8);
  } else {
    uVar2 = 0;
  }
  old = *(unsigned int *)(param_1 + 8);
  if (old != 0) {
    fn_82761DE8(old);
  }
  *(unsigned int *)(param_1 + 8) = uVar2;
  *(unsigned char *)(param_1 + 0x84) = 0;
}
