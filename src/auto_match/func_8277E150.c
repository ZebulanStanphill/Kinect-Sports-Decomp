extern int fn_8277CA30();
void *memmove(void *d, const void *s, unsigned int n);


unsigned int * fn_8277E150(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  
  if (param_2 != param_1) {
    uVar1 = param_2[1];
    fn_8277CA30(param_1,(unsigned __int64)uVar1,0);
    param_1[1] = uVar1;
    if (uVar1 != 0) {
      memmove(*param_1,*param_2,uVar1 * 0xc);
    }
  }
  return param_1;
}

