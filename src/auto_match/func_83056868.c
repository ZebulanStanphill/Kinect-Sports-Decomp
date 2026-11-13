extern int fn_83056B10();


unsigned __int64 fn_83056868(unsigned int *param_1,int *param_2)

{
  unsigned int *puVar1;
  
  if (param_1[2] != 0) {
    fn_83056B10(param_1[2]);
    puVar1 = (unsigned int *)param_1[2];
    if (puVar1 != (unsigned int *)0x0) {
      (*(int (**)())*puVar1)(puVar1,1);
    }
    param_1[2] = 0;
  }
  (*(int (**)())*param_1)(param_1,1);
  (*(int (**)())(*param_2 + 8))(param_2,param_1);
  return 1;
}

