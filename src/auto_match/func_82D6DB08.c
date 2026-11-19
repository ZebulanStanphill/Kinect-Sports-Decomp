void fn_82D6DB08(unsigned int *self,unsigned __int64 param_2)

{
  int *piVar1;
  
  (*(int (**)())(*(int *)self[3] + 0x1c))(self[3]);
  piVar1 = (int *)self[4];
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 0x1c))(piVar1,param_2);
    self[4] = 0;
  }
  (*(int (**)())*self)(self,1);
  return;
}

