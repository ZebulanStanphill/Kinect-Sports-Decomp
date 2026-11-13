extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_826E9FE8();
extern int fn_8270D2D8();
extern unsigned int lbl_82005FD0;
extern unsigned int lbl_831E7E64;


unsigned __int64 fn_82693880(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar2;
  char cVar5;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  piVar2 = (int *)fn_826E9FE8(param_2,param_3,param_4);
  if (*(int *)(param_1 + 8) != 0) {
    fn_8267C4F0();
  }
  *(int **)(param_1 + 8) = piVar2;
  if ((piVar2 != (int *)0x0) && (cVar5 = (**(int (***)())(*piVar2 + 8))(), cVar5 != '\0')) {
    if ((param_3 & 0x20) != 0) {
      uVar1 = fn_8267B890(lbl_831E7E64,0x28,0);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_8270D2D8(uVar1,*(unsigned int *)(param_1 + 8));
      }
      if (*(int *)(param_1 + 8) != 0) {
        fn_8267C4F0();
      }
      *(unsigned int *)(param_1 + 8) = uVar3;
    }
    return 1;
  }
  puVar4 = (unsigned int *)fn_8267B890(lbl_831E7E64,8,0);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[1] = 1;
    *puVar4 = &lbl_82005FD0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_8267C4F0();
  }
  *(unsigned int **)(param_1 + 8) = puVar4;
  return 0;
}

