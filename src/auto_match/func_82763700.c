extern int fn_8267C488();
extern int fn_827B5EA8();

static __forceinline void DtorP_82763700(char *t)
{
  fn_827B5EA8(t + 0x18);
  fn_827B5EA8(t + 8);
}

void fn_82763700(char *p)
{
  DtorP_82763700(p + 0x7c);
  DtorP_82763700(p + 0x34);
  fn_827B5EA8(p + 0x20);
  fn_8267C488(p);
}
