extern char lbl_82196F10[];
extern int fn_82AB15D0(int, const char *, ...);

int fn_82BC6C80(unsigned int type)
{
  switch (type) {
  case 0: return 3;
  case 1: return 0;
  case 2: return 1;
  case 3: return 3;
  default:
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", lbl_82196F10, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\IL2IRTable.hpp", 0x1548);
  }
  return 3;
}
