extern int fn_8301A5D0();


int fn_82FF5D28(int *param_1)

{
  unsigned int uVar1;
  unsigned char cVar3;
  int iVar2;
  
  uVar1 = param_1[1] - *param_1 >> 2;
  if (((uVar1 < (unsigned int)param_1[2]) || (cVar3 = fn_8301A5D0(param_1,8), cVar3 != '\0')) &&
     (uVar1 < (unsigned int)param_1[2])) {
    iVar2 = param_1[1];
    param_1[1] = iVar2 + 4;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

