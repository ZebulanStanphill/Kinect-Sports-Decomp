extern unsigned int *auStack_70;
extern int fn_82CE2A00();


void fn_82CE2008(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                  __int64 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned int *in_stack_00000074;
  unsigned char auStack_70 [112];
  
  lVar3 = 0x4c;
  if ((param_3 & 0x200) != 0) {
    lVar3 = 0x50;
  }
  iVar1 = (int)(param_4 + 0x1e20);
  XMsgInProcessCall(0xfc,0x58004,auStack_70,0);
  iVar2 = fn_82CE2A00(param_5,param_1,0xffffffff8323a8f0,param_2,param_3,lVar3 + param_5,
                            param_4 + 0x1e20,in_stack_0000006c);
  if (-1 < iVar2) {
    *in_stack_0000005c = iVar1 + (int)(lVar3 + param_5);
    *in_stack_00000064 = param_6 - (iVar1 + (int)lVar3 + 0x1000);
    *in_stack_00000074 = (int)param_5;
  }
  return;
}

