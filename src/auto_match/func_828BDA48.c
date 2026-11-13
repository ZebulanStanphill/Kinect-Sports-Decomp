extern int fn_828A0B00();


void fn_828BDA48(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  
  param_1[6] = param_2;
  if (((param_2 >= 0) && (uVar1 = fn_828A0B00(param_2), uVar1 != 0)) &&
     (param_1[0x1b] == 0)) {
    (*(int (**)())(*param_1 + 0x7c))(param_1,uVar1);
  }
  return;
}

