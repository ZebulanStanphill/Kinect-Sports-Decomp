extern unsigned int lbl_8208B4D0;
extern unsigned int lbl_8208CCA8;
extern unsigned int lbl_8208D710;


int * fn_82A58270(unsigned __int64 param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  
  if (param_3 == 0) {
    uVar2 = 0x1e;
    piVar1 = (int *)&lbl_8208B4D0;
  }
  else if (param_2 == 0) {
    uVar2 = 0x16;
    piVar1 = (int *)&lbl_8208CCA8;
  }
  else {
    uVar2 = 0xb;
    piVar1 = (int *)&lbl_8208D710;
  }
  uVar3 = 0;
  piVar4 = piVar1;
  if (uVar2 != 0) {
    while ((*piVar4 != param_4 || (*(unsigned short *)(piVar4 + 1) != param_5))) {
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
      if (uVar2 <= uVar3) {
        return (int *)0x0;
      }
    }
    piVar1 = piVar1 + uVar3 * 4;
    if ((piVar1[3] != 0) && (piVar1[2] != 0)) {
      return piVar1;
    }
  }
  return (int *)0x0;
}

