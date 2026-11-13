extern unsigned int *auStack_30;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_826CDDC0();
extern int fn_826D4148();
extern int fn_826D6888();
extern int fn_826F6E98();
extern int fn_82703090();
extern unsigned int lbl_821AAD20;


int * fn_826D7318(int *param_1,unsigned __int64 param_2,char param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  unsigned int auStack_30;
  
  uVar1 = *(unsigned int *)(param_1[7] + 0x14);
  uVar2 = (**(int (***)())(*param_1 + 0x30))();
  piVar4 = (int *)fn_826D6888(uVar2,param_2,uVar1 >> 0x1c & 1);
  if (piVar4 != (int *)0x0) {
    uVar3 = fn_8267B890(piVar4[5],0x1d8,0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      auStack_30 = 0x40000;
      uVar3 = fn_826D4148(uVar3,*(unsigned int *)(param_1[7] + 0xc),param_1,piVar4,0,&auStack_30,
                                0);
    }
    if ((uVar3 & 0xffffffff) != 0) {
      fn_826CDDC0(uVar3,0);
      fn_82703090(piVar4,0,uVar3);
      fn_826F6E98(piVar4);
      if (param_3 != '\0') {
        (**(int (***)())(*piVar4 + 0x8c))((double)lbl_821AAD20,piVar4);
      }
      fn_8267C498(uVar3);
      return piVar4;
    }
    fn_8267C4F0(piVar4);
  }
  return (int *)0x0;
}

