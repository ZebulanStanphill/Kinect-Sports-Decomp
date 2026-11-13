extern unsigned int *auStack_3c;
extern int fn_82811400();
extern int memcpy();


void fn_827D5260(int *param_1)

{
  int *piVar1;
  unsigned char auStack_3c [36];
  
  fn_82811400(auStack_3c,0x10);
  piVar1 = (int *)param_1[9];
  memcpy(auStack_3c,param_1 + 10,0x18);
  (**(int (***)())(*param_1 + 8))(param_1,0);
  (**(int (***)())(*piVar1 + 0x18))(piVar1,param_1,auStack_3c);
  return;
}

