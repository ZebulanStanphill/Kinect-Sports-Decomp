extern int fn_83037EB8();


int fn_830298E8(int *param_1)

{
  unsigned int uVar1;
  unsigned char cVar3;
  int iVar2;
  
  uVar1 = param_1[1] - *param_1 >> 3;
  if (((uVar1 < (unsigned int)param_1[2]) || (cVar3 = fn_83037EB8(param_1,8), cVar3 != '\0')) &&
     (uVar1 < (unsigned int)param_1[2])) {
    iVar2 = param_1[1];
    param_1[1] = iVar2 + 8;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

