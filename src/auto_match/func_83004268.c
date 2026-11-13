extern int fn_830040C0();


int fn_83004268(int *param_1)

{
  unsigned int uVar1;
  unsigned char cVar3;
  unsigned int iVar2;
  
  uVar1 = param_1[1] - *param_1 >> 3;
  if (((uVar1 < (unsigned int)param_1[2]) || (cVar3 = fn_830040C0(param_1,8), cVar3 != '\0')) &&
     (uVar1 < (unsigned int)param_1[2])) {
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      *(unsigned short *)(iVar2 + 4) = 0;
      *(unsigned short *)(iVar2 + 6) = 0;
    }
    iVar2 = param_1[1];
    param_1[1] = iVar2 + 8;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

