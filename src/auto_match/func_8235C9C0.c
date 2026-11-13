extern int fn_82356F98();
extern int fn_8223AAC0();
extern int fn_82356F98();


int * fn_8235C9C0(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int aiStack_50 [4];

  iVar5 = *(int *)(param_2 + 0x17c);
  if (iVar5 == 0) {
LAB_8235ca8c:
    fn_82356F98(param_1);
  }
  else {
    iVar1 = *(int *)(param_2 + 0xa0);
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0x40) == 1) || ((iVar1 != 0 && (*(int *)(iVar1 + 0x40) == 2))))
      goto LAB_8235ca8c;
    }
    iVar1 = *(int *)(param_2 + 0x180);
    iVar3 = 0;
    iVar4 = 0;
    if ((iVar1 != 0) && (cVar2 = fn_8223AAC0(iVar1), cVar2 != '\0')) {
      iVar3 = iVar5;
      iVar4 = iVar1;
    }
    iVar5 = *(int *)(param_2 + 0x180);
    *(unsigned int *)(param_2 + 0x180) = 0;
    *(unsigned int *)(param_2 + 0x17c) = 0;
    if (iVar5 != 0) {
      fn_82356F98();
    }
    *param_1 = 0;
    param_1[1] = 0;
    iVar5 = iVar4;
    if (param_1 != aiStack_50) {
      iVar5 = 0;
      param_1[1] = iVar4;
      *param_1 = iVar3;
    }
    if (iVar5 != 0) {
      fn_82356F98(iVar5);
    }
  }
  return param_1;
}
