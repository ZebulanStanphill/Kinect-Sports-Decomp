extern int fn_828252D0();


void fn_8282C280(int param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned char bVar5;
  
  if ((*(char *)(param_1 + 0x52) == '\0') ||
     (bVar5 = 1, *(unsigned int *)(param_1 + 0x58) <= *(unsigned int *)(param_1 + 0x68))) {
    bVar5 = 0;
  }
  if ((*(char *)(param_1 + 0x52) == '\0') ||
     (bVar2 = 1, *(unsigned int *)(param_1 + 0x6c) <= *(unsigned int *)(param_1 + 0x7c))) {
    bVar2 = 0;
  }
  bVar1 = *param_2;
  if ((bVar1 & 0x80) == 0) {
    if ((bVar1 & 0x40) != 0) {
      uVar4 = fn_828252D0(((unsigned __int64)*(unsigned int *)(param_1 + 0x58) +
                           (unsigned __int64)*(unsigned char *)(param_1 + 0x51) * -0x21) -
                           (unsigned __int64)*(unsigned int *)(param_1 + 0x54));
      *(unsigned int *)(param_1 + 0xbc) = uVar4;
      goto LAB_8282c358;
    }
    if ((bVar1 & 0x20) == 0) goto LAB_8282c358;
    lVar3 = (-(unsigned __int64)bVar5 & 0x80) + (unsigned __int64)*(unsigned int *)(param_1 + 0x58);
  }
  else {
    lVar3 = (unsigned __int64)*(unsigned char *)(param_1 + 0x51) * 0x21 + (unsigned __int64)*(unsigned int *)(param_1 + 0x54);
  }
  uVar4 = fn_828252D0(lVar3);
  *(unsigned int *)(param_1 + 0xb8) = uVar4;
LAB_8282c358:
  if (((*param_2 & 0x10) != 0) && ((unsigned __int64)*(unsigned int *)(param_1 + 0x6c) != 0)) {
    uVar4 = fn_828252D0((-(unsigned __int64)bVar2 & 0x80) + (unsigned __int64)*(unsigned int *)(param_1 + 0x6c));
    *(unsigned int *)(param_1 + 0xc0) = uVar4;
  }
  return;
}

