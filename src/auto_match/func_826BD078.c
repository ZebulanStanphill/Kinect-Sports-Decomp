typedef unsigned char bool;


unsigned __int64 fn_826BD078(unsigned int *param_1)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char *pbVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned char *pbVar10;
  
  pbVar7 = (unsigned char *)*param_1;
  bVar2 = *pbVar7;
  uVar8 = (unsigned __int64)(char)bVar2;
  if (uVar8 == 0) {
    return 0;
  }
  pbVar10 = pbVar7 + 1;
  *param_1 = pbVar10;
  if ((bVar2 & 0x80) == 0) {
    return uVar8;
  }
  if ((bVar2 & 0xe0) == 0xc0) {
    bVar2 = *pbVar10;
    if ((__int64)(char)bVar2 == 0) {
      return 0;
    }
    if ((bVar2 & 0xc0) != 0x80) {
      return 0xfffd;
    }
    uVar8 = (__int64)(char)bVar2 & 0x3fU | (uVar8 & 0x1f) << 6;
    bVar1 = uVar8 < 0x80;
  }
  else {
    if ((bVar2 & 0xf0) == 0xe0) {
      bVar2 = *pbVar10;
      if ((__int64)(char)bVar2 == 0) {
        return 0;
      }
      if ((bVar2 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 2;
      bVar3 = pbVar7[2];
      if ((__int64)(char)bVar3 == 0) {
        return 0;
      }
      if ((bVar3 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      uVar8 = (__int64)(char)bVar3 & 0x3fU |
              ((__int64)(char)bVar2 & 0x3fU) << 6 | (uVar8 & 0xf) << 0xc;
      *param_1 = pbVar7 + 3;
      if (uVar8 < 0x800) {
        return 0xfffd;
      }
      if ((0xd7ff < uVar8) && (uVar8 < 0xe000)) {
        return 0xfffd;
      }
      if (uVar8 == 0xfffe) {
        return 0xfffd;
      }
      if (uVar8 == 0xffff) {
        return 0xfffd;
      }
      return uVar8;
    }
    if ((bVar2 & 0xf8) == 0xf0) {
      bVar2 = *pbVar10;
      if ((__int64)(char)bVar2 == 0) {
        return 0;
      }
      if ((bVar2 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 2;
      bVar3 = pbVar7[2];
      if ((__int64)(char)bVar3 == 0) {
        return 0;
      }
      if ((bVar3 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      pbVar10 = pbVar7 + 3;
      *param_1 = pbVar10;
      bVar4 = *pbVar10;
      if ((__int64)(char)bVar4 == 0) {
        return 0;
      }
      if ((bVar4 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      uVar8 = (__int64)(char)bVar4 & 0x3fU |
              ((__int64)(char)bVar3 & 0x3fU) << 6 |
              ((__int64)(char)bVar2 & 0x3fU) << 0xc | (uVar8 & 7) << 0x12;
      uVar9 = 0x10000;
    }
    else if ((bVar2 & 0xfc) == 0xf8) {
      bVar2 = *pbVar10;
      if ((__int64)(char)bVar2 == 0) {
        return 0;
      }
      if ((bVar2 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 2;
      bVar3 = pbVar7[2];
      if ((__int64)(char)bVar3 == 0) {
        return 0;
      }
      if ((bVar3 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 3;
      bVar4 = pbVar7[3];
      if ((__int64)(char)bVar4 == 0) {
        return 0;
      }
      if ((bVar4 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      pbVar10 = pbVar7 + 4;
      *param_1 = pbVar10;
      bVar5 = *pbVar10;
      if ((__int64)(char)bVar5 == 0) {
        return 0;
      }
      if ((bVar5 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      uVar8 = (__int64)(char)bVar5 & 0x3fU |
              ((__int64)(char)bVar4 & 0x3fU) << 6 |
              ((__int64)(char)bVar3 & 0x3fU) << 0xc |
              ((__int64)(char)bVar2 & 0x3fU) << 0x12 | (uVar8 & 3) << 0x18;
      uVar9 = 0x200000;
    }
    else {
      if ((bVar2 & 0xfe) != 0xfc) {
        return 0xfffd;
      }
      bVar2 = *pbVar10;
      if ((__int64)(char)bVar2 == 0) {
        return 0;
      }
      if ((bVar2 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 2;
      bVar3 = pbVar7[2];
      if ((__int64)(char)bVar3 == 0) {
        return 0;
      }
      if ((bVar3 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 3;
      bVar4 = pbVar7[3];
      if ((__int64)(char)bVar4 == 0) {
        return 0;
      }
      if ((bVar4 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 4;
      bVar5 = pbVar7[4];
      if ((__int64)(char)bVar5 == 0) {
        return 0;
      }
      if ((bVar5 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      pbVar10 = pbVar7 + 5;
      *param_1 = pbVar10;
      bVar6 = *pbVar10;
      if ((__int64)(char)bVar6 == 0) {
        return 0;
      }
      if ((bVar6 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      uVar8 = (__int64)(char)bVar6 & 0x3fU |
              ((__int64)(char)bVar5 & 0x3fU) << 6 |
              ((__int64)(char)bVar4 & 0x3fU) << 0xc |
              ((__int64)(char)bVar3 & 0x3fU) << 0x12 |
              ((__int64)(char)bVar2 & 0x3fU) << 0x18 | (uVar8 & 1) << 0x1e;
      uVar9 = 0x4000000;
    }
    bVar1 = uVar8 < uVar9;
  }
  *param_1 = pbVar10 + 1;
  if (bVar1) {
    return 0xfffd;
  }
  return uVar8;
}

