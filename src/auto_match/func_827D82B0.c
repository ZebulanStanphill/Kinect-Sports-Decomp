extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D7D48();
extern int fn_82A1E300();


void fn_827D82B0(int param_1,unsigned int *param_2)

{
  int iVar1;
  __int64 lVar2;
  unsigned int *puStack0000001c;
  unsigned char auStack_30 [16];
  
  if (*(int *)(param_1 + 0x2c8) == 0) {
    *(unsigned int *)(param_1 + 0x2cc) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x348);
  *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 1;
  puStack0000001c = param_2;
  while (iVar1 == 0) {
    (**(int (***)())(**(int **)(param_1 + 0x2c4) + 0x10))();
    fn_82A1E300();
    iVar1 = *(int *)(param_1 + 0x348);
  }
  fn_82517978(auStack_30,*param_2,param_2[1],0);
  fn_827D7D48(param_1,auStack_30);
  lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c8) - 1;
  *(int *)(param_1 + 0x2c8) = (int)lVar2;
  if (lVar2 == 0) {
    *(unsigned int *)(param_1 + 0x2cc) = 0;
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

