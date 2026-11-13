extern int fn_82FF2AA0();
extern int fn_83013880();


unsigned __int64
fn_83008390(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int *apiStack_40 [16];
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0x1c) == param_2) {
    if (*(int *)(param_1 + 0x18) == 0) {
      apiStack_40[0] = (int *)0x0;
      uVar2 = fn_83013880(0xffffffff831bc7f4,*(int *)(param_1 + 0x1c),apiStack_40);
      if ((int)uVar2 != 1) {
        return uVar2;
      }
      if (apiStack_40[0] != (int *)0x0) {
        *(int **)(param_1 + 0x18) = apiStack_40[0];
        uVar2 = (**(int (***)())(*apiStack_40[0] + 0xc))(apiStack_40[0],0xffffffff831bc7f4,0,0);
        if ((int)uVar2 != 1) {
          return uVar2;
        }
      }
    }
    piVar1 = *(int **)(param_1 + 0x18);
    if ((piVar1 != (int *)0x0) &&
       (uVar2 = (**(int (***)())(*piVar1 + 4))(piVar1,param_3,param_4,param_5), (int)uVar2 == 1)) {
      uVar2 = fn_82FF2AA0(piVar1,param_3,param_4,param_5);
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

