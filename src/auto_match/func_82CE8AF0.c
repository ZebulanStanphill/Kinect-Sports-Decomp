extern int fn_82CE8A48();


void fn_82CE8AF0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  RtlEnterCriticalSection();
  fn_82CE8A48(param_1,*(unsigned int *)(param_1 + 0x1c),param_2,param_3);
  RtlLeaveCriticalSection(param_1);
  return;
}

