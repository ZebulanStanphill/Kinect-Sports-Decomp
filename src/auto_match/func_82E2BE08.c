extern int fn_82E2BBA0();


unsigned __int64 fn_82E2BE08(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned short *puVar1;
  unsigned __int64 uVar2;
  
  RtlEnterCriticalSection(param_1 + 8);
  puVar1 = (unsigned short *)fn_82E2BBA0(param_1,param_2);
  uVar2 = 0;
  if (puVar1 == (unsigned short *)0x0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    *(unsigned __int64 *)(puVar1 + 4) = param_3;
    *puVar1 = 0x15;
  }
  RtlLeaveCriticalSection(param_1 + 8);
  return uVar2;
}

