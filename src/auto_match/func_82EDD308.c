typedef unsigned char bool;
extern int fn_82EDD170();
extern unsigned int iStack00000014;
extern unsigned int stack0x00000014;


bool fn_82EDD308(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int param_5)

{
  __int64 lVar1;
  int iStack00000014;
  
  *(int *)(param_1 + 0x20) = (int)param_4;
  *(int *)(param_1 + 0x10) = (int)param_2;
  *(int *)(param_1 + 0x14) = (int)param_3;
  *(int *)(param_1 + 0x28) = (int)param_2;
  *(int *)(param_1 + 0x30) = (int)param_4;
  *(int *)(param_1 + 0x2c) = (int)param_3;
  *(unsigned int *)(param_1 + 0x24) = param_5;
  *(unsigned int *)(param_1 + 0x34) = param_5;
  iStack00000014 = param_1;
  lVar1 = fn_82EDD170(&stack0x00000014,0,0,param_2,param_3,0,0,param_4);
  return lVar1 != 0;
}

