extern int fn_82CE5410();
extern unsigned int fn_82CFBE40();


void fn_82CFFA08(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned int uVar3;
  
  uVar1 = *param_3 & 0xfffffffe;
  if ((*param_3 & 0xfffffffe) != 0) {
    uVar2 = fn_82CFBE40(uVar1);
    iVar4 = fn_82CE5410();
    uVar3 = (*(int (**)())(**(int **)(iVar4 + 0x10) + 0x2c))(*(int **)(iVar4 + 0x10),uVar1,uVar2);
    (*(int (**)())(*param_1 + 0x14))(param_1,3,param_2,uVar1,uVar2,uVar3);
  }
  return;
}

