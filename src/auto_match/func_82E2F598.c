extern int fn_82E2F3F8();
extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E2F598(int param_1,unsigned __int64 param_2,unsigned short *param_3,unsigned int *param_4)

{
  int *piVar1;
  int iVar2;
  unsigned short uVar3;
  unsigned __int64 uVar4;
  int * apiStack_40;
  
  uVar4 = 0;
  apiStack_40 = (int *)0x0;
  if ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xfc)) {
    fn_82E50CB8(param_1 + 0x54);
    if (param_4 != (unsigned int *)0x0) {
      *param_4 = 0;
    }
    iVar2 = fn_82E2F3F8(param_1 + 0x94,param_2,&apiStack_40);
    piVar1 = apiStack_40;
    if (iVar2 == 0) {
      uVar4 = 0xffffffffc00d36bf;
    }
    else {
      if (param_3 != (unsigned short *)0x0) {
        uVar3 = (**(int (***)())(*apiStack_40 + 0x88))(apiStack_40);
        *param_3 = uVar3;
      }
      if (param_4 != (unsigned int *)0x0) {
        *param_4 = piVar1;
        (**(int (***)())(*piVar1 + 4))(piVar1);
      }
    }
    fn_82E50F10(param_1 + 0x54);
  }
  else {
    uVar4 = 0xffffffffc00d36bf;
  }
  return uVar4;
}

