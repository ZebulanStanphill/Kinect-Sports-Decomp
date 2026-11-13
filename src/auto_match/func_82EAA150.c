extern unsigned int *auStack_2e0;
extern int fn_82E9AC18();
extern unsigned int iStack_2f8;
extern unsigned int *iStack_2fc;


void fn_82EAA150(int param_1,unsigned __int64 param_2,__int64 param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned int param_7,unsigned int param_8)

{
  int (**pcVar1)();
  int iVar2;
  int *in_stack_00000054;
  unsigned int *in_stack_0000005c;
  int *in_stack_00000064;
  unsigned int *in_stack_0000006c;
  int iStack_2fc;
  int iStack_2f8;
  unsigned char auStack_2e0 [736];
  
  pcVar1 = (int (**)())*in_stack_0000005c;
  (**(int (***)())(param_1 + 0xa5c))
            ((__int64)((int)param_8 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
             (__int64)((int)param_7 >> 2) + param_3,*(int *)(param_1 + 0x564),auStack_2e0,8,
             param_7 & 3,param_8 & 3,*(unsigned int *)(param_1 + 0x618));
  if (*(int *)(param_1 + 0x6d74) == 0) {
    iVar2 = (*pcVar1)(param_2,0x10,auStack_2e0,8);
    *in_stack_00000064 = iVar2;
    *in_stack_0000006c = 0;
  }
  else {
    fn_82E9AC18(param_1,param_2,0x10,auStack_2e0,8,8,8,param_4);
    if (*in_stack_00000054 != 0) {
      iStack_2fc = iStack_2fc + 1;
    }
    *in_stack_00000064 = *(int *)(param_4 + 0x6c) * iStack_2fc + iStack_2f8;
    *in_stack_0000006c = 0;
  }
  return;
}

