extern int fn_822315A0();
extern int fn_8223AAC0();


unsigned int * fn_8250B068(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  char cVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  puVar2 = (unsigned int *)((unsigned int)(param_2 + 4) & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(param_1 + 4) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  param_1[8] = param_2[8];
  puVar2 = (unsigned int *)((unsigned int)(param_2 + 0xc) & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  iVar1 = param_2[0x14];
  uVar5 = param_2[0x13];
  if ((iVar1 != 0) && (cVar4 = fn_8223AAC0(iVar1), cVar4 != '\0')) {
    if (param_1[0x14] != 0) {
      fn_822315A0();
    }
    param_1[0x14] = iVar1;
    param_1[0x13] = uVar5;
  }
  return param_1;
}

