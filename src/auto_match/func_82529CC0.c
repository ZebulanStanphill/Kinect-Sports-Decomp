#define true 1
extern int fn_82587B68();


void fn_82529CC0(unsigned __int64 param_1,unsigned __int64 param_2,int (**param_3)())

{
  int (**pcVar1)();
  int iVar2;
  int iVar3;
  
  while( true ) {
    iVar2 = fn_82587B68(param_2);
    iVar2 = (**(int (***)())(iVar2 + 8))();
    pcVar1 = *(int (***)())(iVar2 + 8);
    if ((pcVar1 != (int (**)())0x0) && (param_3 != pcVar1)) {
      (*pcVar1)(param_1);
    }
    iVar3 = fn_82587B68(param_2);
    param_2 = (unsigned __int64)*(unsigned int *)(iVar3 + 4);
    if (*(unsigned int *)(iVar3 + 4) == 0) break;
    param_3 = *(int (***)())(iVar2 + 8);
  }
  return;
}

