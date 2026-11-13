extern int fn_828E0DE0();


void fn_828E0390(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) != param_2) {
    fn_828E0DE0(param_1,0);
    *(int *)(param_1 + 8) = param_2;
  }
  return;
}

