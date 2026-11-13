extern unsigned int *auStack_30;
extern int fn_82A1E338();
extern int fn_82A1E3B8();
extern int fn_82A476E0();


void fn_82A403F0(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  int *piVar3;
  unsigned int auStack_30;
  
  auStack_30 = 0;
  iVar2 = fn_82A476E0(param_1 + 0x3ea0,&auStack_30);
  if (iVar2 != 0) {
    uVar1 = fn_82A1E3B8(0xfffffffffffffffe);
    fn_82A1E338(0xfffffffffffffffe,0xf);
    (**(int (***)())(**(int **)(param_1 + 0xb0) + 0x40))();
    piVar3 = (int *)(param_1 + 0x2c);
    (**(int (***)())(*(int *)(param_1 + 0x2c) + 8))(piVar3);
    do {
      (**(int (***)())(**(int **)(param_1 + 0xb0) + 0x34))(*(int **)(param_1 + 0xb0),auStack_30);
      iVar2 = fn_82A476E0(param_1 + 0x3ea0,&auStack_30);
    } while (iVar2 != 0);
    (**(int (***)())(*piVar3 + 0x14))(piVar3);
    (**(int (***)())(**(int **)(param_1 + 0xb0) + 0x44))();
    fn_82A1E338(0xfffffffffffffffe,uVar1);
  }
  return;
}

