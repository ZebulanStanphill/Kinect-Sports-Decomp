extern unsigned int iStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82D6DD08(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
                  )

{
  int iVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  int iStack_38;
  int *piStack_34;
  
  iStack_38 = param_2[2];
  iVar1 = *param_2;
  stack_pair_40.first = *(unsigned int *)(iVar1 + 0x10);
  stack_pair_40.second = 0xffffffff;
  piStack_34 = param_2;
  (**(int (***)())(**(int **)(param_1 + 0xc) + 0x20))(*(int **)(param_1 + 0xc),&stack_pair_40.first);
  if (*(int *)(param_1 + 0x10) != 0) {
    stack_pair_40.first = *(unsigned int *)(iVar1 + 0x18);
    stack_pair_40.second = 0;
    (**(int (***)())(**(int **)(param_1 + 0x10) + 0x20))
              (*(int **)(param_1 + 0x10),&stack_pair_40.first,param_3,param_4,param_5);
  }
  return;
}

