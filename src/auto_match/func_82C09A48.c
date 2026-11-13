int fn_82C09A48(unsigned char *param_1, unsigned char *param_2, unsigned int param_3, int *param_4)
{
  unsigned char bVar1;
  unsigned short uVar3;
  unsigned short uVar5;
  unsigned int uVar4;

  uVar4 = (param_3 >> 1) & 0x7fff;
  uVar3 = 0;
  bVar1 = 0;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      if (bVar1 == 1 && (*param_2 < 0x30 || 0x39 < *param_2)) {
        bVar1 = 0;
        uVar3 = uVar3 + 1;
      }
      if (*param_1 == 0x25 && (bVar1 = 1, param_4 != 0)) {
        param_4[uVar3] = 0;
      }
      if (bVar1 == 1 && param_4 != 0) {
        param_4[uVar3] = param_4[uVar3] * 10 + *param_2 - 0x30;
      }
      if (bVar1 == 0 && *param_1 != 0x3f && *param_2 != *param_1) {
        return -1;
      }
      param_2 = param_2 + 2;
      param_1 = param_1 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return 0;
}
