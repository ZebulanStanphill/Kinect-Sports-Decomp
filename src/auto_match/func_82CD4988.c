int fn_82CD4988(int *param_1)

{
  unsigned short sVar1;
  unsigned iVar2;
  int iVar3;
  unsigned iVar4;
  
  iVar2 = *(unsigned *)(*param_1 + 0x10);
  if ((((iVar2 != 0x56555949) && (iVar2 != 0x30323449)) && (iVar2 != 0x32315659)) &&
     ((iVar2 != 0x32323450 && (iVar2 != 0x31313450)))) {
    return 3;
  }
  iVar3 = param_1[1];
  iVar4 = *(unsigned *)(iVar3 + 0x10);
  if (((iVar4 == 0x56555949) || (iVar4 == 0x30323449)) ||
     ((iVar4 == 0x32315659 ||
      ((((iVar4 == 0x32323450 || (iVar4 == 0x32595559)) || (iVar4 == 0x59565955)) ||
       ((iVar4 == 0x55595659 || (iVar4 == 0x3231564e)))))))) {
LAB_82cd4a68:
    if ((iVar4 != 0) && (iVar4 != 3)) goto LAB_82cd4a9c;
  }
  else if (iVar4 != 0) {
    if (iVar4 != 3) {
      return 4;
    }
    goto LAB_82cd4a68;
  }
  sVar1 = *(unsigned short *)(iVar3 + 0xe);
  if ((sVar1 != 8) && (((sVar1 != 0x10 && (sVar1 != 0x18)) && (sVar1 != 0x20)))) {
    return 4;
  }
LAB_82cd4a9c:
  if ((((iVar2 == 0x56555949) || (iVar2 == 0x30323449)) || (iVar2 == 0x32315659)) &&
     ((iVar4 == 3 && (*(unsigned short *)(iVar3 + 0xe) == 8)))) {
    return 5;
  }
  if ((((iVar2 == 0x56555949) || (iVar2 == 0x30323449)) || (iVar2 == 0x32315659)) &&
     (((iVar4 == 0x56555949 || (iVar4 == 0x30323449)) || (iVar4 == 0x32315659)))) {
    return 0;
  }
  return iVar2 == iVar4 ? 7 : 0;
}

