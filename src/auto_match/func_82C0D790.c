extern int KeSetEvent();


void fn_82C0D790(__int64 param_1)

{
  KeSetEvent(param_1 + 0x74,0x1,0x0);
  return;
}
