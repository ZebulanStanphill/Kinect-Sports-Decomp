extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_8267C5B0();
extern int fn_8269CEE0();
extern int fn_826F6FA8();
extern int fn_8271F610();


void fn_826FD490(int param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar4;
  int *piVar5;
  unsigned __int64 uVar3;
  int *apiStack_40 [16];
  
  piVar5 = (int *)(param_1 + 0xad8);
  fn_8269CEE0(apiStack_40,piVar5);
  if (apiStack_40[0] != (int *)0x0) {
    apiStack_40[0][1] = apiStack_40[0][1] + 1;
    fn_8267C498(apiStack_40[0]);
  }
  if (apiStack_40[0] != param_2) {
    if ((apiStack_40[0] != (int *)0x0) && (apiStack_40[0][8] != 0)) {
      (**(int (***)())(*apiStack_40[0] + 200))(apiStack_40[0],0,param_2,param_3);
    }
    if (param_2 == (int *)0x0) {
      puVar1 = (unsigned int *)*piVar5;
      if (puVar1 != (unsigned int *)0x0) {
        uVar2 = *puVar1;
        *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
        if ((unsigned __int64)uVar2 - 1 == 0) {
          fn_8267BE38();
        }
      }
      *piVar5 = 0;
    }
    else {
      iVar4 = fn_8267C5B0(param_2);
      puVar1 = (unsigned int *)*piVar5;
      if (puVar1 != (unsigned int *)0x0) {
        uVar2 = *puVar1;
        *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
        if ((unsigned __int64)uVar2 - 1 == 0) {
          fn_8267BE38(puVar1);
        }
      }
      *piVar5 = iVar4;
    }
    if (param_2 != (int *)0x0) {
      (**(int (***)())(*param_2 + 200))(param_2,1,apiStack_40[0],param_3);
    }
    piVar5 = (int *)fn_826F6FA8(param_1,0);
    uVar3 = (**(int (***)())(*piVar5 + 0x5c))();
    fn_8271F610(uVar3,apiStack_40[0],param_2);
  }
  if (apiStack_40[0] != (int *)0x0) {
    fn_8267C498(apiStack_40[0]);
  }
  return;
}

