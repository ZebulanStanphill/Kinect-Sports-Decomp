extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82517978();


void fn_827DDD08(int param_1,unsigned int *param_2)

{
  int *piVar1;
  unsigned int *puStack0000001c;
  unsigned char auStack_30 [16];
  
  piVar1 = *(int **)(param_1 + 0xc);
  puStack0000001c = param_2;
  fn_82517978(auStack_30,*param_2,param_2[1],0);
  (**(int (***)())(*piVar1 + 0xc))(piVar1,auStack_30);
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

