extern unsigned int lbl_821533F8;
extern unsigned int stack0x00000010;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;


unsigned __int64 fn_82E279A0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned short *param_3,unsigned int param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned int uVar7;
  unsigned short uVar8;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack00000018;
  
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  if (param_3 == (unsigned short *)0x0) {
    return 0xffffffff80004003;
  }
  pbVar6 = (unsigned char *)&stack0x00000010;
  pbVar5 = (unsigned char *)&lbl_821533F8;
  do {
    bVar1 = *pbVar6;
    bVar2 = *pbVar5;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar6 = pbVar6 + 1;
    pbVar5 = pbVar5 + 1;
  } while (pbVar6 != &stack0x00000020);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    uVar4 = 0x12;
    if (0x11 < param_4) {
      uVar8 = *param_3 << 8 | *param_3 >> 8;
      *param_3 = uVar8;
      param_3[1] = param_3[1] << 8 | param_3[1] >> 8;
      uVar7 = (param_3[8] & 0xff) << 8 | (unsigned int)(param_3[8] >> 8);
      *(unsigned int *)(param_3 + 2) =
           (unsigned int)*(unsigned char *)((int)param_3 + 7) << 0x18 | (unsigned int)*(unsigned char *)(param_3 + 3) << 0x10 |
           (unsigned int)*(unsigned char *)((int)param_3 + 5) << 8 | (unsigned int)*(unsigned char *)(param_3 + 2);
      *(unsigned int *)(param_3 + 4) =
           (unsigned int)*(unsigned char *)((int)param_3 + 0xb) << 0x18 | (unsigned int)*(unsigned char *)(param_3 + 5) << 0x10 |
           (unsigned int)*(unsigned char *)((int)param_3 + 9) << 8 | (unsigned int)*(unsigned char *)(param_3 + 4);
      param_3[8] = (unsigned short)uVar7;
      param_3[6] = param_3[6] << 8 | param_3[6] >> 8;
      param_3[7] = param_3[7] << 8 | param_3[7] >> 8;
      if (uVar8 == 0xfffe) {
        uVar4 = 0x28;
        if (param_4 < 0x28) goto LAB_82e27a0c;
        param_3[0xf] = param_3[0xf] << 8 | param_3[0xf] >> 8;
        param_3[9] = param_3[9] << 8 | param_3[9] >> 8;
        param_3[0xe] = param_3[0xe] << 8 | param_3[0xe] >> 8;
        *(unsigned int *)(param_3 + 10) =
             (unsigned int)*(unsigned char *)((int)param_3 + 0x17) << 0x18 | (unsigned int)*(unsigned char *)(param_3 + 0xb) << 0x10 |
             (unsigned int)*(unsigned char *)((int)param_3 + 0x15) << 8 | (unsigned int)*(unsigned char *)(param_3 + 10);
        *(unsigned int *)(param_3 + 0xc) =
             (unsigned int)*(unsigned char *)((int)param_3 + 0x1b) << 0x18 | (unsigned int)*(unsigned char *)(param_3 + 0xd) << 0x10 |
             (unsigned int)*(unsigned char *)((int)param_3 + 0x19) << 8 | (unsigned int)*(unsigned char *)(param_3 + 0xc);
      }
      if (((uVar7 < 0x4001) && (uVar4 <= uVar7 + uVar4)) && (uVar7 + uVar4 <= param_4)) {
        if (uVar8 == 0x160) {
          if (3 < uVar7) {
            param_3[9] = param_3[9] << 8 | param_3[9] >> 8;
            param_3[10] = param_3[10] << 8 | param_3[10] >> 8;
            return 0;
          }
        }
        else if (uVar8 == 0x161) {
          if (9 < uVar7) {
            param_3[0xb] = param_3[0xb] << 8 | param_3[0xb] >> 8;
            *(unsigned int *)(param_3 + 9) =
                 (unsigned int)*(unsigned char *)((int)param_3 + 0x15) << 0x18 |
                 (unsigned int)*(unsigned char *)(param_3 + 10) << 0x10 | (unsigned int)*(unsigned char *)((int)param_3 + 0x13) << 8 |
                 (unsigned int)*(unsigned char *)(param_3 + 9);
            *(unsigned int *)(param_3 + 0xc) =
                 (unsigned int)*(unsigned char *)((int)param_3 + 0x1b) << 0x18 |
                 (unsigned int)*(unsigned char *)(param_3 + 0xd) << 0x10 | (unsigned int)*(unsigned char *)((int)param_3 + 0x19) << 8
                 | (unsigned int)*(unsigned char *)(param_3 + 0xc);
            return 0;
          }
        }
        else {
          if ((uVar8 != 0x162) && (uVar8 != 0x163)) goto LAB_82e27be0;
          if (0x11 < uVar7) {
            param_3[0x10] = param_3[0x10] << 8 | param_3[0x10] >> 8;
            param_3[0x11] = param_3[0x11] << 8 | param_3[0x11] >> 8;
            *(unsigned int *)(param_3 + 10) =
                 (unsigned int)*(unsigned char *)((int)param_3 + 0x17) << 0x18 |
                 (unsigned int)*(unsigned char *)(param_3 + 0xb) << 0x10 | (unsigned int)*(unsigned char *)((int)param_3 + 0x15) << 8
                 | (unsigned int)*(unsigned char *)(param_3 + 10);
            *(unsigned int *)(param_3 + 0xc) =
                 (unsigned int)*(unsigned char *)((int)param_3 + 0x1b) << 0x18 |
                 (unsigned int)*(unsigned char *)(param_3 + 0xd) << 0x10 | (unsigned int)*(unsigned char *)((int)param_3 + 0x19) << 8
                 | (unsigned int)*(unsigned char *)(param_3 + 0xc);
            param_3[9] = param_3[9] << 8 | param_3[9] >> 8;
            *(unsigned int *)(param_3 + 0xe) =
                 (unsigned int)*(unsigned char *)((int)param_3 + 0x1f) << 0x18 |
                 (unsigned int)*(unsigned char *)(param_3 + 0xf) << 0x10 | (unsigned int)*(unsigned char *)((int)param_3 + 0x1d) << 8
                 | (unsigned int)*(unsigned char *)(param_3 + 0xe);
            return 0;
          }
        }
      }
    }
LAB_82e27a0c:
    uVar3 = 0xffffffffc00d36b4;
  }
  else {
LAB_82e27be0:
    uVar3 = 0xffffffffc00d3e98;
  }
  return uVar3;
}

