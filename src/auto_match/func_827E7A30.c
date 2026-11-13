extern int fn_82517A50();
extern int fn_827D50C0();
extern int fn_827DA3D8();
extern int fn_827E4218();


void fn_827E7A30(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = (*(int (**)())(*param_1 + 0x20))(param_1);
  fn_827E4218(uVar1,param_2);
  *(int **)(*param_2 + 0x24) = param_1;
  fn_827D50C0(param_1[5],0x3e5);
  *(int *)*param_2 = param_1[2];
  fn_82517A50(*param_2 + 4,param_1 + 5);
  iVar2 = fn_827DA3D8(param_1[8],param_1[1]);
  (*(int (**)())(**(int **)(iVar2 + 0x20) + 0x30))(*(int **)(iVar2 + 0x20),*param_2);
  return;
}

