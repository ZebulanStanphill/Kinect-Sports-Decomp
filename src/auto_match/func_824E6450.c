extern int fn_824E6468();


void fn_824E6450(unsigned __int64 param_1,unsigned int param_2)

{
  if (param_2 == 0) {
    return;
  }
  *(int (***)())(param_2 + 0x28) = fn_824E6468;
  return;
}

