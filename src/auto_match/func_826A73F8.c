extern int strchr();


unsigned int fn_826A73F8(int *param_1)

{
  unsigned int uVar1;
  unsigned int iVar3;
  unsigned int uVar2;
  
  if ((((unsigned int *)*param_1)[3] & 0x4000000) == 0) {
    uVar1 = *(unsigned int *)*param_1;
    iVar3 = strchr(uVar1,0x3a);
    if (((iVar3 == 0) && (iVar3 = strchr(uVar1,0x2f), iVar3 == 0)) &&
       (uVar2 = strchr(uVar1,0x2e), uVar2 == 0)) {
      *(unsigned int *)(*param_1 + 0xc) = *(unsigned int *)(*param_1 + 0xc) | 0x6000000;
      return uVar2;
    }
    *(unsigned int *)(*param_1 + 0xc) = *(unsigned int *)(*param_1 + 0xc) | 0x4000000;
  }
  return 1;
}

