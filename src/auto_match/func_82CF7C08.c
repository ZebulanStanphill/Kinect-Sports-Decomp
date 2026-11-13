extern unsigned int *auStack_120;
extern unsigned int *auStack_1a0;
extern int fn_82CFBB60();
extern int fn_82D00D38();
extern int fn_82D00D60();


void fn_82CF7C08(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  unsigned char auStack_1a0 [128];
  unsigned char auStack_120 [256];
  
  fn_82CFBB60(auStack_120,0x100,0xffffffff821336b8,param_3,param_4[1]);
  (**(int (***)())(param_1 + 0x3c))(param_2,*(unsigned int *)(param_1 + 0x40));
  (**(int (***)())(param_1 + 0x3c))(auStack_120,*(unsigned int *)(param_1 + 0x40));
  uVar1 = fn_82D00D60(param_1 + 8,*param_4,auStack_1a0,0x20);
  fn_82D00D38(*(unsigned int *)(param_1 + 4),auStack_1a0,uVar1,*(unsigned int *)(param_1 + 0x3c),
               *(unsigned int *)(param_1 + 0x40));
  (**(int (***)())(param_1 + 0x3c))(0xffffffff82133670,*(unsigned int *)(param_1 + 0x40));
  return;
}

