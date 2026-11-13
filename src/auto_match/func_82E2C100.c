extern int fn_82E2BBA0();


unsigned __int64 fn_82E2C100(__int64 param_1,unsigned __int64 param_2,int *param_3)

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
    *(int **)(puVar1 + 4) = param_3;
    *puVar1 = 0xd;
    if (param_3 != (int *)0x0) {
      (*(int (**)())(*param_3 + 4))(param_3);
    }
  }
  RtlLeaveCriticalSection(param_1 + 8);
  return uVar2;
}

