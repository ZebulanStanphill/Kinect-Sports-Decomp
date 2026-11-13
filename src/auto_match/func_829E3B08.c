extern int fn_829E3AB8();
extern unsigned int lbl_83217BB0;
extern unsigned int lbl_832187B0;


unsigned __int64 fn_829E3B08(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  unsigned int uVar5;
  
  uVar5 = 0;
  puVar3 = (unsigned int *)param_1;
  *puVar3 = 0;
  uVar2 = lbl_832187B0;
  puVar3[2] = 0;
  puVar4 = &lbl_83217BB0;
  puVar3[3] = 0;
  if ((uVar2 & 1) == 0) {
    lbl_832187B0 = uVar2 | 1;
    uVar5 = 0;
    puVar4 = (unsigned char *)fn_829E3AB8();
  }
  iVar1 = (int)param_1;
  *(unsigned char **)(iVar1 + 0x10) = puVar4;
  *(char *)(iVar1 + 0x14) = (char)uVar5;
  *(unsigned int *)(iVar1 + 4) = uVar5;
  return param_1;
}

