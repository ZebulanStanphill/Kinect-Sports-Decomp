extern int fn_82CEA220();
extern int fn_82CEA280();
extern int fn_82CEA358();
extern int fn_82D00450();


void fn_82E0A4C8(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar3;
  unsigned int uVar2;
  int iVar4;
  
  iVar4 = param_1 + 0x10;
  uVar1 = fn_82CEA280(iVar4,param_2,0);
  if (uVar1 != 0) {
    iVar3 = fn_82D00450(param_1 + 0x1c,uVar1,0);
    if (*(int (**)())(iVar3 + 8) != (int (*)())0) {
      (*(int (**)())(iVar3 + 8))(param_2);
    }
    if (*(unsigned int *)(param_1 + 8) == param_2) {
      *(unsigned int *)(param_1 + 8) = 0;
    }
    uVar2 = fn_82CEA220(iVar4,param_2);
    fn_82CEA358(iVar4,uVar2);
  }
  return;
}

