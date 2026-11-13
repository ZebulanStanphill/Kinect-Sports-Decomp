extern int fn_83007F58();


int fn_83008038(int *param_1)

{
  unsigned int uVar1;
  unsigned char cVar3;
  unsigned int iVar2;
  
  uVar1 = param_1[1] - *param_1 >> 5;
  if (((uVar1 < (unsigned int)param_1[2]) || (cVar3 = fn_83007F58(param_1,2), cVar3 != '\0')) &&
     (uVar1 < (unsigned int)param_1[2])) {
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      *(unsigned int *)(iVar2 + 0x14) = 0;
      *(unsigned int *)(iVar2 + 0x18) = 0;
      *(unsigned int *)(iVar2 + 0x1c) = 0;
    }
    iVar2 = param_1[1];
    param_1[1] = iVar2 + 0x20;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

