extern int fn_82FB0110();


int fn_82FB0530(int *param_1)

{
  unsigned int uVar1;
  unsigned char cVar3;
  int iVar2;
  
  uVar1 = (param_1[1] - *param_1) / 0x14;
  if (((uVar1 < (unsigned int)param_1[2]) || (cVar3 = fn_82FB0110(param_1,3), cVar3 != '\0')) &&
     (uVar1 < (unsigned int)param_1[2])) {
    iVar2 = param_1[1];
    param_1[1] = iVar2 + 0x14;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

