#define true 1
extern int fn_82248B90();
extern int fn_82594C50();
extern int fn_8288F948();
extern int fn_828A12E8();


void fn_82513668(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int aiStack_2c;
  
  (**(int (***)())(**(int **)(param_2 + 8) + 100))();
  fn_82594C50(*(unsigned int *)(param_2 + 8));
  uVar1 = *(unsigned int *)(param_2 + 8);
  uVar2 = fn_828A12E8(uVar1);
  iVar3 = fn_8288F948(uVar2,1);
  aiStack_2c = **(int **)(iVar3 + 4);
  while( true ) {
    iVar3 = aiStack_2c;
    uVar2 = fn_828A12E8(uVar1);
    iVar4 = fn_8288F948(uVar2,1);
    if (iVar3 == *(int *)(iVar4 + 4)) break;
    (**(int (***)())(**(int **)(iVar3 + 0x14) + 0x50))();
    fn_82248B90(&aiStack_2c);
  }
  (**(int (***)())(**(int **)(param_2 + 0x18) + 0x28))(param_1);
  return;
}

