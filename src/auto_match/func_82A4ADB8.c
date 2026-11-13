extern int fn_82A5ABE8();


void fn_82A4ADB8(int param_1,int *param_2,int *param_3)

{
  int uVar1;
  int uVar2;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = (*(int (**)())(*param_2 + 0x28))(param_2);
  }
  uVar1 = (*(int (**)())(*param_3 + 0x28))(param_3);
  fn_82A5ABE8(*(unsigned int *)(param_1 + 0x48),uVar2,uVar1);
  return;
}

