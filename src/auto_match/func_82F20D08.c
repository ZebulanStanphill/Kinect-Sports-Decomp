extern int fn_82F20998();
extern int fn_82F20B58();


void fn_82F20D08(int param_1)

{
  *(int (***)())(param_1 + 0x86c) = fn_82F20998;
  *(int (***)())(param_1 + 0x870) = fn_82F20B58;
  return;
}

