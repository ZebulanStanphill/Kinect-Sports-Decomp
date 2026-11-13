extern int fn_827D9EA8();
extern int fn_827DB6D0();
extern int fn_827DBA00();
extern int fn_827DBD80();


void fn_82628A10(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_827DB6D0(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0xc),param_2,0
                            ,param_3,param_1 + 0x24);
  if (iVar2 == 0) {
    uVar1 = fn_827D9EA8(*(unsigned int *)(param_1 + 0xc));
    iVar2 = fn_827DBA00(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0xc),uVar1,0
                              ,0,0,param_1 + 0x1c,param_1 + 0x20);
    if (iVar2 == 0) {
      fn_827DBD80(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0xc),param_2,0,
                        param_3,param_1 + 0x34);
    }
  }
  return;
}

