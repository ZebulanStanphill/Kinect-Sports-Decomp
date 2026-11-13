extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern unsigned int lbl_82197A54;
extern unsigned int lbl_821AD588;


unsigned int * fn_8224ABC8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int auStack_50 [4];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (unsigned int *)0x0) {
    iVar5 = param_2[1];
    uVar1 = *param_2;
    uVar3 = 0;
    iVar4 = 0;
    if ((iVar5 != 0) && (cVar2 = fn_8223AAC0(iVar5), cVar2 != '\0')) {
      uVar3 = uVar1;
      iVar4 = iVar5;
    }
    param_1[4] = 0;
    param_1[3] = &lbl_82197A54;
    param_1[5] = 0;
    param_1[6] = 0;
    iVar5 = iVar4;
    if (param_1 + 5 != auStack_50) {
      iVar5 = param_1[6];
      param_1[6] = iVar4;
      param_1[5] = uVar3;
    }
    if (iVar5 != 0) {
      fn_822315A0(iVar5);
    }
  }
  return param_1;
}

