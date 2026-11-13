extern int KeSetEvent();


void fn_82C0D770(__int64 param_1)

{
  KeSetEvent(param_1 + 0x54,0x1,0x0);
  return;
}
