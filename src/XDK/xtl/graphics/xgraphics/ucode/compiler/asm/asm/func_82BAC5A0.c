extern int fn_82AB14E0();
extern int fn_82AB1538();
extern int fn_82AB15D0();
extern int fn_82BC7368();

void fn_82BAC5A0(int param_1, int param_2)
{
  int a;
  unsigned b;
  a = fn_82BC7368(*(int *)(param_1 + 0x78));
  b = fn_82AB14E0(a, 0x22, 1);
  if (b != 0 && param_2 <= (a - *(int *)(param_1 + 8)) / 6) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "target_addr > ourAddress", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\asm\\asm.cpp", 0x68d);
  }
  fn_82AB1538(a, 1, 0xd, param_2);
}
