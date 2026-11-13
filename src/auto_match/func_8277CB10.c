extern int fn_8277CB68();
extern void *memmove(void *, const void *, unsigned int);


unsigned int * fn_8277CB10(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int iVar1;
  
  if (param_2 != param_1) {
    iVar1 = param_2[1];
    fn_8277CB68(param_1,iVar1,0);
    param_1[1] = iVar1;
    if (iVar1 != 0) {
      memmove((void *)*param_1,(void *)*param_2,iVar1 << 2);
    }
  }
  return param_1;
}

