extern int fn_82A1BB18();
extern int fn_82A403F0();
extern int fn_82A406A0();
extern int fn_82A41998();
extern int fn_82A4F4E0();


void fn_82A50A48(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(int (***)())(*(int *)(param_1[0xc] + 0x2c) + 8))(param_1[0xc] + 0x2c);
  iVar2 = param_1[0xc];
  iVar1 = fn_82A1BB18();
  if ((iVar1 == *(int *)(iVar2 + 0xac)) || (param_1[0x1c] != 0)) {
    (**(int (***)())(*(int *)(param_1[0xc] + 0x2c) + 0x14))(param_1[0xc] + 0x2c);
  }
  else {
    iVar2 = (**(int (***)())(*param_1 + 0x54))(param_1);
    if (iVar2 == 4) {
      fn_82A406A0(param_1[0xc],1);
    }
    fn_82A41998(param_1[0xc],param_1);
    (**(int (***)())(*(int *)(param_1[0xc] + 0x2c) + 0x14))(param_1[0xc] + 0x2c);
    (**(int (***)())(**(int **)(param_1[0xc] + 0xb0) + 0x40))();
    (**(int (***)())(*param_1 + 0x50))(param_1);
    fn_82A403F0(param_1[0xc]);
    (**(int (***)())(**(int **)(param_1[0xc] + 0xb0) + 0x44))();
    (**(int (***)())(*param_1 + 0x4c))(param_1,0);
    fn_82A4F4E0();
  }
  return;
}

