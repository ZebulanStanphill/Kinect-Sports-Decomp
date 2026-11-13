extern int KeSetEvent();


void fn_82C0D7A0(__int64 param_1)

{
  KeSetEvent(param_1 + 0x84,0x1,0x0);
  return;
}
