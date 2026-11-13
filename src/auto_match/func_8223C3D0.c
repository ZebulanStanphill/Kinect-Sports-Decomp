extern int fn_8223C368();
extern int fn_82F63CA0();


void fn_8223C3D0(int *param_1,unsigned int param_2)

{
  int iVar1;
  unsigned char *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = param_1[1];
  if (param_2 < (unsigned int)(iVar1 - iVar3)) {
    iVar3 = iVar3 + param_2;
    if (iVar3 == iVar1) {
      return;
    }
    fn_82F63CA0(iVar3,iVar1,0);
  }
  else {
    if (param_2 <= (unsigned int)(iVar1 - iVar3)) {
      return;
    }
    fn_8223C368(param_1,(iVar3 - iVar1) + param_2);
    iVar3 = (*param_1 - param_1[1]) + param_2;
    if (iVar3 != 0) {
      puVar2 = (unsigned char *)(param_1[1] + -1);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
      }
    }
    iVar3 = *param_1 + param_2;
  }
  param_1[1] = iVar3;
  return;
}

