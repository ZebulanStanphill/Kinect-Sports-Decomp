extern int fn_827D9EA8();
extern int fn_827DB6D0();
extern int fn_827DBA00();
extern int fn_827DBD80();


unsigned __int64 fn_8260C508(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  *(unsigned int *)(param_1 + 0x34) = 0;
  RtlEnterCriticalSection(param_1 + 0x1a0);
  iVar2 = param_1 + 0x60;
  uVar1 = fn_827DB6D0(*(unsigned int *)(param_1 + 0x40),iVar2,*(unsigned int *)(param_1 + 0x10),0,
                            0,param_1 + 0x48);
  if ((int)uVar1 == 0) {
    uVar1 = fn_827D9EA8(iVar2);
    uVar1 = fn_827DBA00(*(unsigned int *)(param_1 + 0x40),iVar2,uVar1,0,0,0,0,0);
    if (((int)uVar1 == 0) &&
       (uVar1 = fn_827DBD80(*(unsigned int *)(param_1 + 0x40),iVar2,
                                  *(unsigned int *)(param_1 + 0x10),0,0,param_1 + 0x58),
       (int)uVar1 == 0)) {
      uVar1 = 0x3e5;
    }
  }
  return uVar1;
}

