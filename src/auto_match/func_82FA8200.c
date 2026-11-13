extern int fn_82FA8128();


int fn_82FA8200(int *param_1)

{
  unsigned int uVar1;
  unsigned char cVar3;
  int iVar2;
  
  uVar1 = (param_1[1] - *param_1) / 0x28;
  if (((uVar1 < (unsigned int)param_1[2]) || (cVar3 = fn_82FA8128(param_1,1), cVar3 != '\0')) &&
     (uVar1 < (unsigned int)param_1[2])) {
    iVar2 = param_1[1];
    param_1[1] = iVar2 + 0x28;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

