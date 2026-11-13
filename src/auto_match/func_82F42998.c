extern int fn_82F41ED8();
extern int fn_82F41FE8();


void fn_82F42998(int param_1)

{
  *(int (***)())(param_1 + 0x1bb0) = fn_82F41FE8;
  *(int (***)())(param_1 + 0x1bac) = fn_82F41ED8;
  return;
}

