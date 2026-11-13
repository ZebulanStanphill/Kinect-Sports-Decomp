#define true 1
extern int fn_82416D20();
extern int fn_82417D18();
extern int fn_82420AF0();
extern int fn_82D8B6C8();


unsigned __int64 fn_82419700(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x20);
  while( true ) {
    if (piVar3 == *(int **)(param_1 + 0x24)) {
      piVar3 = *(int **)(param_1 + 0x88);
      while( true ) {
        if (piVar3 == *(int **)(param_1 + 0x8c)) {
          return 0;
        }
        iVar1 = *piVar3;
        iVar2 = *(int *)(iVar1 + 0x10);
        if (iVar2 == param_2) break;
        piVar3 = piVar3 + 1;
      }
      fn_82D8B6C8(*(unsigned int *)(iVar2 + 0x7c0),1,1,0);
      fn_82420AF0((double)*(float *)(**(int **)(param_1 + 0x188) + 0x9a8),iVar1);
      return 1;
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x28) == param_2) break;
    piVar3 = piVar3 + 1;
  }
  fn_82D8B6C8(*(unsigned int *)(*(int *)(iVar1 + 0x28) + 0x7c0),1,1,0);
  if (iVar1 == *(int *)(param_1 + 0x30)) {
    fn_82417D18(param_1,1,iVar1,0);
    return 1;
  }
  iVar2 = param_1 + 0xa0;
  if (*(int *)(iVar1 + 0x30) != 0) {
    iVar2 = param_1 + 0x110;
  }
  fn_82416D20(iVar2,iVar1);
  return 1;
}

