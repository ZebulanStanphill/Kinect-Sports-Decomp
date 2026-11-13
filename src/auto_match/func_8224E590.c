extern int fn_8265C9E0();
extern int fn_82897FE8();
extern unsigned int lbl_821C2CA0;


void fn_8224E590(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int *piVar3;
  char cVar4;
  __int64 lVar2;
  
  piVar3 = (int *)fn_8265C9E0(0x7dc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[1] = 1;
    *piVar3 = (int)&lbl_821C2CA0;
    piVar3[0x1f6] = 0;
  }
  cVar4 = (**(int (***)())(*piVar3 + 0x18))(piVar3,param_2);
  if (cVar4 == '\0') {
    uVar1 = piVar3[1];
    piVar3[1] = (int)((unsigned __int64)uVar1 - 1);
    if ((unsigned __int64)uVar1 - 1 == 0) {
      (**(int (***)())(*piVar3 + 0x14))(piVar3,1);
    }
  }
  else {
    lVar2 = (**(int (***)())(*param_1 + 8))(param_1);
    fn_82897FE8(lVar2 + 0x2e8,piVar3);
  }
  return;
}

