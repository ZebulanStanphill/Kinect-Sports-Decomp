extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82932B38();


unsigned fn_82980440(int param_1,int *param_2)

{
  unsigned iVar2;
  unsigned iVar3;
  unsigned uVar1;
  
  iVar2 = fn_82930318(0x34);
  if (iVar2 != 0) {
    iVar2 = fn_82932B38(iVar2);
  } else {iVar2=0;}
  if (iVar2 != 0) {
    *(unsigned int *)(iVar2 + 0x10) = 0;
    *(unsigned int *)(iVar2 + 0x30) = *(unsigned int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    if (param_2 != (int *)0x0) {
      iVar3 = (*(int (**)())(*param_2 + 4))(param_2);
      *(int *)(iVar2 + 0x14) = iVar3;
      if (iVar3 == 0) {
        return 0;
      }
    }
    uVar1 = fn_82930318(0x14);
    if (uVar1 != 0) {
      uVar1 = fn_829304E0(uVar1,iVar2,0,"Stmts");
    } else {uVar1=0;}
    if ((uVar1 & 0xffffffff) != 0) {
      return uVar1;
    }
  }
  return 0;
}

