extern int fn_82E2AC98();


unsigned __int64 fn_82E2B280(__int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned short *puVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  RtlEnterCriticalSection(param_1 + 8);
  puVar1 = (unsigned short *)fn_82E2AC98(param_1,param_2);
  if (puVar1 != 0) { *param_3 = *puVar1; } else { uVar2 = 0xffffffffc00d36e6; }
  RtlLeaveCriticalSection(param_1 + 8);
  return uVar2;
}

