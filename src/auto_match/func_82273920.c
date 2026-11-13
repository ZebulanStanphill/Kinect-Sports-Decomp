extern int fn_822315A0();
extern int fn_8223AAC0();
extern int memcpy();


unsigned int * fn_82273920(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  char cVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = param_2[2];
  uVar2 = param_2[1];
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    if (param_1[2] != 0) {
      fn_822315A0();
    }
    param_1[2] = iVar1;
    param_1[1] = uVar2;
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  memcpy(param_1 + 0xb,param_2 + 0xb,0x800);
  memcpy(param_1 + 0x20b,param_2 + 0x20b,0x800);
  memcpy(param_1 + 0x40b,param_2 + 0x40b,0x80);
  param_1[0x42b] = param_2[0x42b];
  param_1[0x42c] = param_2[0x42c];
  param_1[0x42d] = param_2[0x42d];
  return param_1;
}

