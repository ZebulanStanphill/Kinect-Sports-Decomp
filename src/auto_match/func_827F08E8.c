extern int fn_827F05E0();


void fn_827F08E8(int param_1)

{
  unsigned short uVar1;
  char cVar2;
  unsigned __int64 uVar3;
  
  uVar3 = (unsigned __int64)*(unsigned short *)(param_1 + 0xe8);
  if (uVar3 == 0) {
    *(unsigned int *)(param_1 + 0xf0) = 0xffff;
  }
  else {
    do {
      uVar3 = uVar3 - 1;
      if ((__int64)uVar3 < 0) goto LAB_827f0948;
      cVar2 = fn_827F05E0(param_1,uVar3 & 0xffff);
    } while (cVar2 != '\0');
    *(int *)(param_1 + 0xf0) = (int)uVar3;
  }
LAB_827f0948:
  uVar1 = *(unsigned short *)(param_1 + 0xea);
  *(unsigned short *)(param_1 + 0xea) = uVar1 | 2;
  *(unsigned short *)(param_1 + 0xea) = uVar1 & 0xfffe | 2;
  return;
}

