extern int fn_82F65FE0();


unsigned __int64 fn_82631D78(unsigned int *param_1,char param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char abStack_40 [64];
  
  if (param_2 == '\0') {
    fn_82F65FE0(param_1 + 1,*param_1,4,0xffffffff82631e68);
  }
  uVar2 = 1;
  uVar9 = 0;
  uVar3 = 0;
  abStack_40[0] = 0xff;
  abStack_40[1] = 0xff;
  abStack_40[2] = 0xff;
  abStack_40[3] = 0xff;
  abStack_40[4] = 0xff;
  abStack_40[5] = 0xff;
  abStack_40[6] = 0xff;
  abStack_40[7] = 0xff;
  uVar4 = 0;
  abStack_40[8] = 0xff;
  abStack_40[9] = 0xff;
  abStack_40[10] = 0xff;
  abStack_40[0xb] = 0xff;
  abStack_40[0xc] = 0xff;
  abStack_40[0xd] = 0xff;
  abStack_40[0xe] = 0xff;
  abStack_40[0xf] = 0xff;
  uVar5 = 0;
  puVar6 = param_1;
  if (*param_1 != 0) {
    do {
      uVar1 = puVar6[1];
      uVar8 = uVar1 >> 0x14 & 0xf;
      uVar7 = (unsigned int)abStack_40[uVar8];
      if (uVar7 == 0xff) {
        uVar7 = uVar8;
        if (param_2 == '\0') {
          uVar7 = uVar9;
          uVar9 = uVar9 + 1;
        }
        abStack_40[uVar8] = (unsigned char)uVar7;
        if (uVar8 < 0x10) {
          uVar3 = 1 << uVar8 | uVar3;
        }
        if (uVar7 < 0x10) {
          uVar4 = 1 << (uVar7 & 0x3f) | uVar4;
        }
      }
      uVar5 = uVar5 + 1;
      puVar6[1] = (uVar7 & 0xf) << 0x10 | uVar1 & 0xfff0ffff;
      puVar6 = puVar6 + 1;
    } while (uVar5 < *param_1);
  }
  if ((param_2 == '\0') && (uVar3 != uVar4)) {
    uVar2 = 0;
  }
  return uVar2;
}

