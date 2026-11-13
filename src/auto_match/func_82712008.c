extern int fn_8267C498();
extern int fn_82711FA8();


unsigned __int64 fn_82712008(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  unsigned __int64 uVar3;
  int *apiStack_20 [2];
  
  if (**(int **)(param_1 + 0xc) == 0) {
    uVar3 = 0;
  }
  else {
    fn_82711FA8(apiStack_20,**(int **)(param_1 + 0xc));
    if ((((apiStack_20[0] == (int *)0x0) ||
         (iVar1 = (**(int (***)())(*apiStack_20[0] + 0x9c))(apiStack_20[0]), iVar1 != 4)) ||
        (cVar2 = (**(int (***)())(*apiStack_20[0] + 0x170))(apiStack_20[0]), cVar2 == '\0')) ||
       (uVar3 = 1, apiStack_20[0] != param_2)) {
      uVar3 = 0;
    }
    if (apiStack_20[0] != (int *)0x0) {
      fn_8267C498(apiStack_20[0]);
    }
  }
  return uVar3;
}

