extern int fn_828EA790();


void fn_828A1E60(unsigned int param_1,int param_2,int *param_3)

{
  
  while (param_1 != param_2) {
    *param_3 = *param_3 + 1;
    fn_828EA790(&param_1);
  }
  return;
}

