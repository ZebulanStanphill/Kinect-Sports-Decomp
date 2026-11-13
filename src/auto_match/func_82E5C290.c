#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82E5BFE0();
extern int fn_82F68CC0();
extern unsigned int lbl_820ED038;
extern unsigned int lbl_820ED048;
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int lbl_821533F8;
extern unsigned int lbl_82153400;
extern unsigned int stack0x00000000;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


unsigned __int64 fn_82E5C290(int param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  unsigned __int64 uVar4;
  unsigned char *pbVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  unsigned char *pbVar11;
  unsigned int *puVar12;
  unsigned char *pbVar13;
  unsigned int *puVar14;
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0xffffffffc00d36b6;
  }
  if ((param_4 == (unsigned int *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    return 0xffffffff80070057;
  }
  pbVar10 = (unsigned char *)(param_1 + 0x84);
  puVar12 = (unsigned int *)(param_1 + 0x7c);
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x84) + (unsigned __int64)*(unsigned int *)(param_1 + 0x7c) + 0x4e;
  uVar7 = uVar6;
  if (&stack0x00000000 == (unsigned char *)0x70) {
    uVar7 = uStack_70;
  }
  *(unsigned __int64 *)(param_1 + 0x20) = uVar6;
  if (0xffffffff < uVar7) {
    return 0xffffffffc00d3a9a;
  }
  *param_4 = (unsigned int)uVar7;
  if (param_3 < (unsigned int)uVar7) {
    return 0xffffffffc00d36b1;
  }
  uStack_68 = *(unsigned __int64 *)(param_1 + 0x18);
  uStack_70 = CONCAT44((unsigned int)*(unsigned char *)(param_1 + 0x13) << 0x18 |
                       (unsigned int)*(unsigned char *)(param_1 + 0x12) << 0x10 |
                       (unsigned int)*(unsigned char *)(param_1 + 0x11) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x10),
                       CONCAT22(*(unsigned short *)(param_1 + 0x14) << 8 | *(unsigned short *)(param_1 + 0x14) >> 8,
                                *(unsigned short *)(param_1 + 0x16) << 8 | *(unsigned short *)(param_1 + 0x16) >> 8)
                      );
  fn_82F68CC0(param_2,&uStack_70,0x10);
  uVar7 = *(unsigned __int64 *)(param_1 + 0x20);
  pbVar9 = (unsigned char *)(param_1 + 0x48);
  uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar7)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar7 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  *(unsigned __int64 *)(param_2 + 0x10) =
       ((uVar7 & 0xff) << 0x18 |
       (uVar7 & 0xff00) << 8 |
       (unsigned __int64)((((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20 |
       ((unsigned __int64)(((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
       ((unsigned __int64)(((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
       (unsigned __int64)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 0x18);
  uStack_68 = *(unsigned __int64 *)(param_1 + 0x50);
  uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(CONCAT22(*(unsigned short *)(param_1 + 0x4c) << 8 | *(unsigned short *)(param_1 + 0x4c) >> 8,
                *(unsigned short *)(param_1 + 0x4e) << 8 | *(unsigned short *)(param_1 + 0x4e) >> 8))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uStack_70 = CONCAT44((unsigned int)*(unsigned char *)(param_1 + 0x4b) << 0x18 |
                       (unsigned int)*(unsigned char *)(param_1 + 0x4a) << 0x10 |
                       (unsigned int)*(unsigned char *)(param_1 + 0x49) << 8 | (unsigned int)*pbVar9,(((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF));
  fn_82F68CC0(param_2 + 0x18,&uStack_70,0x10);
  pbVar13 = (unsigned char *)(param_1 + 0x58);
  uStack_68 = *(unsigned __int64 *)(param_1 + 0x60);
  uStack_70 = CONCAT44((unsigned int)*(unsigned char *)(param_1 + 0x5b) << 0x18 |
                       (unsigned int)*(unsigned char *)(param_1 + 0x5a) << 0x10 |
                       (unsigned int)*(unsigned char *)(param_1 + 0x59) << 8 | (unsigned int)*pbVar13,
                       CONCAT22(*(unsigned short *)(param_1 + 0x5c) << 8 | *(unsigned short *)(param_1 + 0x5c) >> 8,
                                *(unsigned short *)(param_1 + 0x5e) << 8 | *(unsigned short *)(param_1 + 0x5e) >> 8)
                      );
  fn_82F68CC0(param_2 + 0x28,&uStack_70,0x10);
  uVar6 = *(unsigned __int64 *)(param_1 + 0x68);
  uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar6 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar6)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  *(unsigned __int64 *)(param_2 + 0x38) =
       ((uVar6 & 0xff) << 0x18 |
       (uVar6 & 0xff00) << 8 |
       (unsigned __int64)((((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20 |
       ((unsigned __int64)(((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
       ((unsigned __int64)(((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
       (unsigned __int64)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 0x18);
  *(unsigned int *)(param_2 + 0x40) =
       (unsigned int)*(unsigned char *)(param_1 + 0x7f) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x7e) << 0x10 |
       (unsigned int)*(unsigned char *)(param_1 + 0x7d) << 8 | (unsigned int)*(unsigned char *)puVar12;
  *(unsigned int *)(param_2 + 0x44) =
       (unsigned int)*(unsigned char *)(param_1 + 0x87) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x86) << 0x10 |
       (unsigned int)*(unsigned char *)(param_1 + 0x85) << 8 | (unsigned int)*pbVar10;
  uVar7 = (unsigned __int64)*(unsigned short *)(param_1 + 0x70) & 0x7f;
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar7 = uVar7 | 0x8000;
  }
  *(unsigned short *)(param_2 + 0x48) = (unsigned short)(uVar7 << 8) | (unsigned short)(uVar7 >> 8);
  puVar14 = (unsigned int *)(param_2 + 0x4e);
  pbVar11 = &lbl_820ED058;
  *(unsigned int *)(param_2 + 0x4a) = 0;
  uStack_70 = uVar6;
  if (*puVar12 == 0) {
code_r0x82e5c698:
    if (*(int *)pbVar10 != 0) {
      if (*(int *)(param_1 + 0x80) == 0) goto LAB_82e5c4f8;
      fn_82F68CC0(puVar14);
      do {
        bVar1 = *pbVar11;
        bVar2 = *pbVar9;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar9 = pbVar9 + 1;
      } while (pbVar11 != &lbl_820ED068);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        pbVar9 = &lbl_820ED038;
        do {
          bVar1 = *pbVar9;
          bVar2 = *pbVar13;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar9 = pbVar9 + 1;
          pbVar13 = pbVar13 + 1;
        } while (pbVar9 != &lbl_820ED048);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          if (*(int *)pbVar10 != 8) {
            return 0xffffffffc00d3a9a;
          }
          *(unsigned short *)((int)puVar14 + 1) =
               *(unsigned short *)((int)puVar14 + 1) << 8 | *(unsigned short *)((int)puVar14 + 1) >> 8;
          *(unsigned short *)((int)puVar14 + 3) =
               *(unsigned short *)((int)puVar14 + 3) << 8 | *(unsigned short *)((int)puVar14 + 3) >> 8;
          *(unsigned short *)((int)puVar14 + 5) =
               *(unsigned short *)((int)puVar14 + 5) << 8 | *(unsigned short *)((int)puVar14 + 5) >> 8;
        }
      }
    }
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x78) != 0) {
      fn_82F68CC0(puVar14);
      pbVar5 = pbVar9;
      pbVar8 = pbVar11;
      do {
        bVar1 = *pbVar8;
        bVar2 = *pbVar5;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar8 = pbVar8 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar8 != &lbl_820ED068);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        uVar4 = fn_82E5BFE0(lbl_821533F8,lbl_82153400,puVar14,*puVar12);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
code_r0x82e5c688:
        if ((int)uVar4 < 0) {
          return uVar4;
        }
      }
      else {
        pbVar8 = &lbl_820F8EB8;
        pbVar5 = pbVar9;
        do {
          bVar1 = *pbVar8;
          bVar2 = *pbVar5;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar8 = pbVar8 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar8 != &lbl_820F8EC8);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
          uVar4 = 0xffffffff80004001;
          goto code_r0x82e5c688;
        }
        if (*puVar12 < 0xc) {
          return 0xffffffffc00d3a9a;
        }
        uVar3 = *(unsigned short *)(param_2 + 0x57);
        *puVar14 = (unsigned int)*(unsigned char *)(param_2 + 0x51) << 0x18 | (unsigned int)*(unsigned char *)(param_2 + 0x50) << 0x10
                   | (unsigned int)*(unsigned char *)(param_2 + 0x4f) << 8 | (unsigned int)*(unsigned char *)puVar14;
        *(unsigned short *)(param_2 + 0x57) = uVar3 << 8 | uVar3 >> 8;
        *(unsigned int *)(param_2 + 0x52) =
             (unsigned int)*(unsigned char *)(param_2 + 0x55) << 0x18 | (unsigned int)*(unsigned char *)(param_2 + 0x54) << 0x10 |
             (unsigned int)*(unsigned char *)(param_2 + 0x53) << 8 | (unsigned int)*(unsigned char *)(param_2 + 0x52);
        if ((*(unsigned char *)(param_2 + 0x56) & 2) == 0) {
          return 0xffffffffc00d3a9a;
        }
        if ((unsigned short)((uVar3 >> 8) << 8 | uVar3 & 0xff) < 0x28) {
          return 0xffffffffc00d3a9a;
        }
        *(unsigned short *)(param_2 + 0x65) =
             *(unsigned short *)(param_2 + 0x65) << 8 | *(unsigned short *)(param_2 + 0x65) >> 8;
        *(unsigned short *)(param_2 + 0x67) =
             *(unsigned short *)(param_2 + 0x67) << 8 | *(unsigned short *)(param_2 + 0x67) >> 8;
        *(unsigned int *)(param_2 + 0x59) =
             (unsigned int)*(unsigned char *)(param_2 + 0x5c) << 0x18 | (unsigned int)*(unsigned char *)(param_2 + 0x5b) << 0x10 |
             (unsigned int)*(unsigned char *)(param_2 + 0x5a) << 8 | (unsigned int)*(unsigned char *)(param_2 + 0x59);
        *(unsigned int *)(param_2 + 0x5d) =
             (unsigned int)*(unsigned char *)(param_2 + 0x60) << 0x18 | (unsigned int)*(unsigned char *)(param_2 + 0x5f) << 0x10 |
             (unsigned int)*(unsigned char *)(param_2 + 0x5e) << 8 | (unsigned int)*(unsigned char *)(param_2 + 0x5d);
        *(unsigned int *)(param_2 + 0x61) =
             (unsigned int)*(unsigned char *)(param_2 + 100) << 0x18 | (unsigned int)*(unsigned char *)(param_2 + 99) << 0x10 |
             (unsigned int)*(unsigned char *)(param_2 + 0x62) << 8 | (unsigned int)*(unsigned char *)(param_2 + 0x61);
        *(unsigned int *)(param_2 + 0x69) =
             (unsigned int)*(unsigned char *)(param_2 + 0x6c) << 0x18 | (unsigned int)*(unsigned char *)(param_2 + 0x6b) << 0x10 |
             (unsigned int)*(unsigned char *)(param_2 + 0x6a) << 8 | (unsigned int)*(unsigned char *)(param_2 + 0x69);
        *(unsigned int *)(param_2 + 0x6d) =
             (unsigned int)*(unsigned char *)(param_2 + 0x70) << 0x18 | (unsigned int)*(unsigned char *)(param_2 + 0x6f) << 0x10 |
             (unsigned int)*(unsigned char *)(param_2 + 0x6e) << 8 | (unsigned int)*(unsigned char *)(param_2 + 0x6d);
        *(unsigned int *)(param_2 + 0x71) =
             (unsigned int)*(unsigned char *)(param_2 + 0x74) << 0x18 | (unsigned int)*(unsigned char *)(param_2 + 0x73) << 0x10 |
             (unsigned int)*(unsigned char *)(param_2 + 0x72) << 8 | (unsigned int)*(unsigned char *)(param_2 + 0x71);
        *(unsigned int *)(param_2 + 0x75) =
             (unsigned int)*(unsigned char *)(param_2 + 0x78) << 0x18 | (unsigned int)*(unsigned char *)(param_2 + 0x77) << 0x10 |
             (unsigned int)*(unsigned char *)(param_2 + 0x76) << 8 | (unsigned int)*(unsigned char *)(param_2 + 0x75);
        *(unsigned int *)(param_2 + 0x79) =
             (unsigned int)*(unsigned char *)(param_2 + 0x7c) << 0x18 | (unsigned int)*(unsigned char *)(param_2 + 0x7b) << 0x10 |
             (unsigned int)*(unsigned char *)(param_2 + 0x7a) << 8 | (unsigned int)*(unsigned char *)(param_2 + 0x79);
        *(unsigned int *)(param_2 + 0x7d) =
             (unsigned int)*(unsigned char *)(param_2 + 0x80) << 0x18 | (unsigned int)*(unsigned char *)(param_2 + 0x7f) << 0x10 |
             (unsigned int)*(unsigned char *)(param_2 + 0x7e) << 8 | (unsigned int)*(unsigned char *)(param_2 + 0x7d);
      }
      puVar14 = (unsigned int *)((int)puVar14 + *puVar12);
      goto code_r0x82e5c698;
    }
LAB_82e5c4f8:
    uVar4 = 0xffffffff8000ffff;
  }
  return uVar4;
}

