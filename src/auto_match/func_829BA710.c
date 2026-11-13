extern unsigned int *auStack_50;
extern int fn_829AB0F0();
extern int fn_829AB2C8();
extern int png_calculate_crc();
extern int png_read_data();
extern int fn_829B5130();
extern int d3dx_inflateReset();
extern int d3dx_inflate();
extern int fn_829B9B60();
extern unsigned int lbl_82054B24;
extern unsigned int lbl_82054B40;
extern unsigned int lbl_82054B5C;
extern unsigned int lbl_82054B78;
extern unsigned int lbl_82054B94;


void fn_829BA710(int param_1)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned char *pbVar6;
  unsigned int uVar7;
  unsigned char bVar9;
  unsigned char *pbVar8;
  unsigned char *pbVar10;
  unsigned char auStack_50 [4];
  unsigned char bStack_4c;
  unsigned char bStack_4b;
  unsigned char bStack_4a;
  unsigned char bStack_49;
  
  uVar7 = *(int *)(param_1 + 0x5d4) + 1;
  *(unsigned int *)(param_1 + 0x5d4) = uVar7;
  if (*(unsigned int *)(param_1 + 0x5c0) <= uVar7) {
    if (*(char *)(param_1 + 0x613) != '\0') {
      *(unsigned int *)(param_1 + 0x5d4) = 0;
      fn_829B5130(param_1,*(unsigned int *)(param_1 + 0x5d8),0,
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x5c8) + 1);
      bVar9 = *(unsigned char *)(param_1 + 0x614);
      do {
        bVar9 = bVar9 + 1;
        *(unsigned char *)(param_1 + 0x614) = bVar9;
        if (6 < bVar9) break;
        trapWord(6,(unsigned __int64)*(unsigned int *)(&lbl_82054B40 + (unsigned int)*(unsigned char *)(param_1 + 0x614) * 4),0);
        iVar4 = (int)(((((unsigned __int64)*(unsigned int *)(&lbl_82054B40 + (unsigned int)*(unsigned char *)(param_1 + 0x614) * 4)
                        - (unsigned __int64)*(unsigned int *)(&lbl_82054B24 + (unsigned int)bVar9 * 4)) +
                       (unsigned __int64)*(unsigned int *)(param_1 + 0x5b8)) - 1 & 0xffffffff) /
                     (unsigned __int64)*(unsigned int *)(&lbl_82054B40 + (unsigned int)*(unsigned char *)(param_1 + 0x614) * 4));
        *(int *)(param_1 + 0x5d0) = iVar4;
        *(unsigned int *)(param_1 + 0x5cc) = ((unsigned int)*(unsigned char *)(param_1 + 0x619) * iVar4 + 7 >> 3) + 1;
        if ((*(unsigned int *)(param_1 + 0x560) & 2) != 0) break;
        bVar9 = *(unsigned char *)(param_1 + 0x614);
        trapWord(6,(unsigned __int64)*(unsigned int *)(&lbl_82054B78 + (unsigned int)bVar9 * 4),0);
        *(int *)(param_1 + 0x5c0) =
             (int)(((((unsigned __int64)*(unsigned int *)(&lbl_82054B78 + (unsigned int)bVar9 * 4) -
                     (unsigned __int64)*(unsigned int *)(&lbl_82054B5C + (unsigned int)bVar9 * 4)) +
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x5bc)) - 1 & 0xffffffff) /
                  (unsigned __int64)*(unsigned int *)(&lbl_82054B78 + (unsigned int)bVar9 * 4));
      } while (*(int *)(param_1 + 0x5d0) == 0);
      if (*(unsigned char *)(param_1 + 0x614) < 7) {
        return;
      }
    }
    if ((*(unsigned int *)(param_1 + 0x55c) & 0x20) == 0) {
      *(unsigned char **)(param_1 + 0x570) = auStack_50;
      *(unsigned int *)(param_1 + 0x574) = 1;
LAB_829ba880:
      if (*(int *)(param_1 + 0x568) == 0) {
        if (*(int *)(param_1 + 0x5fc) == 0) {
          pbVar10 = (unsigned char *)(param_1 + 0x60c);
          do {
            fn_829B9B60(param_1,0);
            png_read_data(param_1,&bStack_4c,4);
            *(unsigned int *)(param_1 + 0x5fc) =
                 (((unsigned int)bStack_4c * 0x100 + (unsigned int)bStack_4b) * 0x100 + (unsigned int)bStack_4a) * 0x100 +
                 (unsigned int)bStack_49;
            fn_829AB2C8(param_1);
            png_read_data(param_1,pbVar10,4);
            png_calculate_crc(param_1,pbVar10,4);
            pbVar6 = &lbl_82054B94;
            pbVar8 = pbVar10;
            do {
              bVar9 = *pbVar8;
              bVar1 = *pbVar6;
              if ((unsigned __int64)bVar9 - (unsigned __int64)bVar1 != 0) break;
              pbVar8 = pbVar8 + 1;
              pbVar6 = pbVar6 + 1;
            } while (pbVar8 != (unsigned char *)(param_1 + 0x610));
            if ((int)((unsigned __int64)bVar9 - (unsigned __int64)bVar1) != 0) {
              fn_829AB0F0(param_1,0xffffffff82052520);
            }
          } while (*(int *)(param_1 + 0x5fc) == 0);
        }
        uVar2 = *(unsigned int *)(param_1 + 0x59c);
        *(unsigned int *)(param_1 + 0x568) = *(unsigned int *)(param_1 + 0x5a0);
        *(unsigned int *)(param_1 + 0x564) = uVar2;
        if (*(unsigned int *)(param_1 + 0x5fc) < *(unsigned int *)(param_1 + 0x5a0)) {
          *(unsigned int *)(param_1 + 0x568) = *(unsigned int *)(param_1 + 0x5fc);
        }
        uVar3 = *(unsigned int *)(param_1 + 0x568);
        png_read_data(param_1,uVar2,uVar3);
        png_calculate_crc(param_1,uVar2,uVar3);
        *(int *)(param_1 + 0x5fc) = *(int *)(param_1 + 0x5fc) - *(int *)(param_1 + 0x568);
      }
      iVar4 = d3dx_inflate(param_1 + 0x564,1);
      if (iVar4 != 1) {
        if (iVar4 != 0) {
          uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x57c);
          if ((unsigned __int64)*(unsigned int *)(param_1 + 0x57c) == 0) {
            uVar5 = 0xffffffff82055030;
          }
          fn_829AB0F0(param_1,uVar5);
        }
        if (*(int *)(param_1 + 0x574) == 0) {
          fn_829AB0F0(param_1,0xffffffff820524f4);
        }
        goto LAB_829ba880;
      }
      if (((*(int *)(param_1 + 0x574) == 0) || (*(int *)(param_1 + 0x568) != 0)) ||
         (*(int *)(param_1 + 0x5fc) != 0)) {
        fn_829AB0F0(param_1,0xffffffff820524f4);
      }
      *(unsigned int *)(param_1 + 0x574) = 0;
      *(unsigned int *)(param_1 + 0x55c) = *(unsigned int *)(param_1 + 0x55c) | 0x20;
      *(unsigned int *)(param_1 + 0x558) = *(unsigned int *)(param_1 + 0x558) | 8;
    }
    if ((*(int *)(param_1 + 0x5fc) != 0) || (*(int *)(param_1 + 0x568) != 0)) {
      fn_829AB0F0(param_1,0xffffffff82055018);
    }
    d3dx_inflateReset(param_1 + 0x564);
    *(unsigned int *)(param_1 + 0x558) = *(unsigned int *)(param_1 + 0x558) | 8;
  }
  return;
}

