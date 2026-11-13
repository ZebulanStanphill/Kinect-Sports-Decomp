extern int fn_82AC5088();


unsigned int fn_82AC50E0(unsigned short *param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  
  for (; param_4 != (unsigned int *)0x0; param_4 = (unsigned int *)param_4[1]) {
    if ((unsigned short *)*param_4 == param_1) {
      return 0x80004005;
    }
  }
  if ((*param_1 < 6) && (param_1[1] < 0x13)) {
    uVar2 = *(unsigned int *)(param_1 + 6);
    uVar1 = param_1[5];
    if ((uVar2 <= param_3) && ((unsigned int)uVar1 * 8 + uVar2 <= param_3)) {
      puVar4 = (unsigned int *)(uVar2 + param_2);
      iVar3 = 0;
      if (uVar1 != 0) {
        do {
          uVar2 = fn_82AC5088(param_2,*puVar4,param_3,0xf0);
          if (-1 < (int)uVar2) {
            uVar2 = puVar4[1];
            if (param_3 < uVar2) {
              return 0x80004005;
            }
            if (param_3 < uVar2 + 0x10) {
              return 0x80004005;
            }
            uVar2 = ((int (*)())fn_82AC50E0)(uVar2 + param_2,param_2);
            uVar2 = (int)uVar2 >> 0x1f & uVar2;
          }
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 2;
        } while (iVar3 < (int)(unsigned int)uVar1);
      }
      return 0;
    }
  }
  return 0x80004005;
}

