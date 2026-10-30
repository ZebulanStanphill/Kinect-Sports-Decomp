typedef struct { int f0; int f4; int f8; int fc; int f10; int f14; int f18; int f1c; int f20; } Ent_82BC6A88;
extern Ent_82BC6A88 lbl_8316EBC0[];
extern int fn_82AB15D0(int, const char *, ...);

int fn_82BC6A88(int op_code)
{
  if (op_code < 0 || op_code >= 0x88) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "(0 <= op_code) && (op_code < (ILOpCode)IL_OP_EXT_LAST)", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\IL2IRTable.hpp", 0x14e7);
  }
  return lbl_8316EBC0[op_code].f18;
}
