extern int fn_827B5F38();
extern int fn_827B6E70();


void fn_827B6F18(int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                  unsigned __int64 param_6)

{
  int iVar1;
  __int64 lVar2;
  
  fn_827B6E70();
  *(unsigned int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  *(unsigned int *)(param_1 + 0xc) = param_4;
  iVar1 = (int)((unsigned __int64)param_5 / (param_6 & 0xffffffff));
  lVar2 = (__int64)iVar1 * (__int64)param_3;
  *(unsigned int *)(param_1 + 0x10) = param_5;
  *(int *)(param_1 + 0x14) = (int)param_6;
  *(int *)(param_1 + 0x18) = iVar1;
  trapWord(6,param_6,0);
  fn_827B5F38(param_1 + 0x78,lVar2,0);
  *(int *)(param_1 + 0x7c) = (int)lVar2;
  return;
}

