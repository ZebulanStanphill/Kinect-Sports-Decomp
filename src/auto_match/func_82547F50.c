typedef unsigned int U32;
typedef unsigned __int64 U64;
extern int fn_8263CBB0();
extern int fn_82837D98();

void fn_82547F50(int param_1, unsigned int param_2, U64 param_3)
{
  U32 auStack_20[2];

  fn_82837D98(*(U32 *)(param_1 + 0x14), 0, auStack_20);
  fn_8263CBB0(param_3, param_2, auStack_20[0], 0x8000000000000000ULL >> (param_2 + 0x20));
}
