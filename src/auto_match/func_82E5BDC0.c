extern int fn_82E279A0();
extern int fn_82E57820();
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int lbl_821533F8;
extern unsigned int lbl_82153400;


unsigned __int64 fn_82E5BDC0(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned short uVar7;
  
  if ((param_2 == (unsigned int *)0x0) || ((param_3 & 0xffffffff) == 0)) {
    uVar3 = 0xffffffff80004003;
  }
  else {
    uVar3 = fn_82E57820(param_2,param_3,param_4);
    if (-1 < (int)uVar3) {
      pbVar4 = (unsigned char *)(param_1 + 0x48);
      pbVar5 = &lbl_820ED058;
      pbVar6 = pbVar4;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar6;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar5 != &lbl_820ED068);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        uVar3 = fn_82E279A0(lbl_821533F8,lbl_82153400,param_2,param_4);
      }
      else {
        pbVar6 = &lbl_820F8EB8;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar4;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar6 != &lbl_820F8EC8);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          if (0xb < (param_4 & 0xffffffff)) {
            uVar7 = *(unsigned short *)((int)param_2 + 9) << 8 | *(unsigned short *)((int)param_2 + 9) >> 8;
            *param_2 = (unsigned int)(unsigned char)*param_2 << 0x18 | (unsigned int)*(unsigned char *)((int)param_2 + 2) << 0x10 |
                       (unsigned int)*(unsigned char *)((int)param_2 + 1) << 8 | (unsigned int)*(unsigned char *)param_2;
            *(unsigned short *)((int)param_2 + 9) = uVar7;
            param_2[1] = (unsigned int)*(unsigned char *)((int)param_2 + 7) << 0x18 |
                         (unsigned int)*(unsigned char *)((int)param_2 + 6) << 0x10 |
                         (unsigned int)*(unsigned char *)((int)param_2 + 5) << 8 | (unsigned int)*(unsigned char *)(param_2 + 1);
            if (((param_2[2] & 0x2000000) != 0) && (0x27 < uVar7)) {
              *(unsigned short *)((int)param_2 + 0x17) =
                   *(unsigned short *)((int)param_2 + 0x17) << 8 | *(unsigned short *)((int)param_2 + 0x17) >> 8;
              *(unsigned short *)((int)param_2 + 0x19) =
                   *(unsigned short *)((int)param_2 + 0x19) << 8 | *(unsigned short *)((int)param_2 + 0x19) >> 8;
              *(unsigned int *)((int)param_2 + 0xb) =
                   (unsigned int)*(unsigned char *)((int)param_2 + 0xe) << 0x18 |
                   (unsigned int)*(unsigned char *)((int)param_2 + 0xd) << 0x10 | (unsigned int)*(unsigned char *)(param_2 + 3) << 8 |
                   (unsigned int)*(unsigned char *)((int)param_2 + 0xb);
              *(unsigned int *)((int)param_2 + 0xf) =
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x12) << 0x18 |
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x11) << 0x10 | (unsigned int)*(unsigned char *)(param_2 + 4) << 8
                   | (unsigned int)*(unsigned char *)((int)param_2 + 0xf);
              *(unsigned int *)((int)param_2 + 0x13) =
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x16) << 0x18 |
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x15) << 0x10 | (unsigned int)*(unsigned char *)(param_2 + 5) << 8
                   | (unsigned int)*(unsigned char *)((int)param_2 + 0x13);
              *(unsigned int *)((int)param_2 + 0x1b) =
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x1e) << 0x18 |
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x1d) << 0x10 | (unsigned int)*(unsigned char *)(param_2 + 7) << 8
                   | (unsigned int)*(unsigned char *)((int)param_2 + 0x1b);
              *(unsigned int *)((int)param_2 + 0x1f) =
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x22) << 0x18 |
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x21) << 0x10 | (unsigned int)*(unsigned char *)(param_2 + 8) << 8
                   | (unsigned int)*(unsigned char *)((int)param_2 + 0x1f);
              *(unsigned int *)((int)param_2 + 0x23) =
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x26) << 0x18 |
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x25) << 0x10 | (unsigned int)*(unsigned char *)(param_2 + 9) << 8
                   | (unsigned int)*(unsigned char *)((int)param_2 + 0x23);
              *(unsigned int *)((int)param_2 + 0x27) =
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x2a) << 0x18 |
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x29) << 0x10 | (unsigned int)*(unsigned char *)(param_2 + 10) << 8
                   | (unsigned int)*(unsigned char *)((int)param_2 + 0x27);
              *(unsigned int *)((int)param_2 + 0x2b) =
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x2e) << 0x18 |
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x2d) << 0x10 |
                   (unsigned int)*(unsigned char *)(param_2 + 0xb) << 8 | (unsigned int)*(unsigned char *)((int)param_2 + 0x2b);
              *(unsigned int *)((int)param_2 + 0x2f) =
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x32) << 0x18 |
                   (unsigned int)*(unsigned char *)((int)param_2 + 0x31) << 0x10 |
                   (unsigned int)*(unsigned char *)(param_2 + 0xc) << 8 | (unsigned int)*(unsigned char *)((int)param_2 + 0x2f);
              return uVar3;
            }
          }
          uVar3 = 0xffffffffc00d3a9a;
        }
        else {
          uVar3 = 0xffffffff80004001;
        }
      }
    }
  }
  return uVar3;
}

