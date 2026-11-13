extern int KeSetEvent();


void fn_82C0D7C0(__int64 param_1)

{
  KeSetEvent(param_1 + 0xa4,0x1,0x0);
  return;
}
