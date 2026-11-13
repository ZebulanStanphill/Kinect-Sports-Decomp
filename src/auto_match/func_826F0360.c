extern int fn_82F65B18();
extern int fn_82F66A80();


unsigned __int64 fn_826F0360(int *param_1,unsigned __int64 param_2,char param_3)

{
  unsigned char *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  puVar1 = (unsigned char *)*param_1;
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      if ((puVar1[uVar3] == '\0') || (puVar1[uVar3] == param_3)) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (unsigned int)param_1[1]);
  }
  if (((uVar3 != 0) && (puVar1 != (unsigned char *)0x0)) && (iVar2 = fn_82F66A80(*puVar1), iVar2 != 0)
     ) {
    uVar4 = 1;
    if (1 < uVar3) {
      do {
        iVar2 = fn_82F66A80(puVar1[uVar4]);
        if (iVar2 == 0) break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    uVar3 = param_1[1];
    if (uVar3 < uVar4) {
      uVar4 = uVar3;
    }
    param_1[1] = uVar3 - uVar4;
    *param_1 = *param_1 + uVar4;
    param_2 = fn_82F65B18(puVar1);
  }
  return param_2;
}

