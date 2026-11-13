typedef unsigned char bool;
extern int fn_82381BC0();


bool fn_82247068(int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  bool lVar4;
  unsigned int * apuStack_30;
  
  lVar4 = 0;
  puVar1 = *(unsigned int **)(param_1[4] + 0x230);
  apuStack_30 = (unsigned int *)*puVar1;
  while (apuStack_30 != puVar1) {
    uVar2 = apuStack_30[4];
    iVar3 = (*(int (**)())(*param_1 + 4))(param_1);
    { int *o=(int *)(iVar3+0x9c); iVar3=(*(int (**)())(*o+0x38))(o,uVar2); }
    lVar4=lVar4 || iVar3>=param_2;
    fn_82381BC0(&apuStack_30);
    puVar1 = *(unsigned int **)(param_1[4] + 0x230);
  }
  return lVar4;
}

