extern unsigned int *auStack_50;
extern int fn_829AB0F0();
extern int fn_829AB2C8();
extern int fn_829B0D78();
extern int png_read_data();
extern int fn_829B5120();
extern int d3dx_inflate();
extern int png_crc_read();
extern int fn_829B9120();
extern int fn_829B9380();
extern int png_read_filter_row();
extern int fn_829B98E0();
extern int fn_829B9AF0();
extern int fn_829B9B60();
extern int fn_829BA710();
extern unsigned int lbl_820523D0;
extern unsigned int lbl_820523EC;
extern unsigned int lbl_82052410;


void fn_829AE7D8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned char auStack_50 [80];
  
  if ((*(unsigned int *)(param_1 + 0x55c) & 0x40) == 0) {
    fn_829B98E0();
  }
  if ((*(char *)(param_1 + 0x613) != '\0') && ((*(unsigned int *)(param_1 + 0x560) & 2) != 0)) {
    bVar1 = *(unsigned char *)(param_1 + 0x614);
    if (bVar1 == 0) {
      if ((*(unsigned int *)(param_1 + 0x5d4) & 7) != 0) {
        if ((param_3 & 0xffffffff) == 0) goto LAB_829aeaa4;
LAB_829aea94:
        uVar7 = 0xff;
LAB_829aea98:
        fn_829B9120(param_1,param_3,uVar7);
LAB_829aeaa4:
        fn_829BA710(param_1);
        return;
      }
    }
    else if (bVar1 == 1) {
      if (((*(unsigned int *)(param_1 + 0x5d4) & 7) != 0) || (*(unsigned int *)(param_1 + 0x5b8) < 5)) {
        if ((param_3 & 0xffffffff) == 0) goto LAB_829aeaa4;
        uVar7 = 0xf;
        goto LAB_829aea98;
      }
    }
    else if (bVar1 < 3) {
      if ((*(unsigned int *)(param_1 + 0x5d4) & 7) != 4) {
        if ((param_3 & 0xffffffff) == 0) goto LAB_829aeaa4;
        uVar3 = *(unsigned int *)(param_1 + 0x5d4) & 4;
LAB_829aea50:
        if (uVar3 == 0) goto LAB_829aeaa4;
        goto LAB_829aea94;
      }
    }
    else if (bVar1 == 3) {
      if (((*(unsigned int *)(param_1 + 0x5d4) & 3) != 0) || (*(unsigned int *)(param_1 + 0x5b8) < 3)) {
        if ((param_3 & 0xffffffff) == 0) goto LAB_829aeaa4;
        uVar7 = 0x33;
        goto LAB_829aea98;
      }
    }
    else if (bVar1 < 5) {
      if ((*(unsigned int *)(param_1 + 0x5d4) & 3) != 2) {
        if ((param_3 & 0xffffffff) == 0) goto LAB_829aeaa4;
        uVar3 = *(unsigned int *)(param_1 + 0x5d4) & 2;
        goto LAB_829aea50;
      }
    }
    else if (bVar1 == 5) {
      if (((*(unsigned int *)(param_1 + 0x5d4) & 1) != 0) || (*(unsigned int *)(param_1 + 0x5b8) < 2)) {
        if ((param_3 & 0xffffffff) == 0) goto LAB_829aeaa4;
        uVar7 = 0x55;
        goto LAB_829aea98;
      }
    }
    else if ((bVar1 < 7) && ((*(unsigned int *)(param_1 + 0x5d4) & 1) == 0)) goto LAB_829aeaa4;
  }
  if ((*(unsigned int *)(param_1 + 0x558) & 4) == 0) {
    fn_829AB0F0(param_1,0xffffffff82052538);
  }
  *(unsigned int *)(param_1 + 0x574) = *(unsigned int *)(param_1 + 0x5cc);
  *(unsigned int *)(param_1 + 0x570) = *(unsigned int *)(param_1 + 0x5dc);
  do {
    if (*(int *)(param_1 + 0x568) == 0) {
      if (*(int *)(param_1 + 0x5fc) == 0) {
        do {
          fn_829B9B60(param_1,0);
          png_read_data(param_1,auStack_50,4);
          uVar4 = fn_829B9AF0(param_1,auStack_50);
          *(unsigned int *)(param_1 + 0x5fc) = uVar4;
          fn_829AB2C8(param_1);
          png_crc_read(param_1,(unsigned char *)(param_1 + 0x60c),4);
          pbVar8 = &lbl_82052410;
          pbVar9 = (unsigned char *)(param_1 + 0x60c);
          do {
            bVar1 = *pbVar9;
            bVar2 = *pbVar8;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar9 = pbVar9 + 1;
            pbVar8 = pbVar8 + 1;
          } while (pbVar9 != (unsigned char *)(param_1 + 0x610));
          if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
            fn_829AB0F0(param_1,0xffffffff82052520);
          }
        } while (*(int *)(param_1 + 0x5fc) == 0);
      }
      *(unsigned int *)(param_1 + 0x568) = *(unsigned int *)(param_1 + 0x5a0);
      *(unsigned int *)(param_1 + 0x564) = *(unsigned int *)(param_1 + 0x59c);
      if (*(unsigned int *)(param_1 + 0x5fc) < *(unsigned int *)(param_1 + 0x5a0)) {
        *(unsigned int *)(param_1 + 0x568) = *(unsigned int *)(param_1 + 0x5fc);
      }
      png_crc_read(param_1,*(unsigned int *)(param_1 + 0x59c),*(unsigned int *)(param_1 + 0x568));
      *(int *)(param_1 + 0x5fc) = *(int *)(param_1 + 0x5fc) - *(int *)(param_1 + 0x568);
    }
    iVar5 = d3dx_inflate(param_1 + 0x564,1);
    if (iVar5 == 1) {
      if (((*(int *)(param_1 + 0x574) != 0) || (*(int *)(param_1 + 0x568) != 0)) ||
         (*(int *)(param_1 + 0x5fc) != 0)) {
        fn_829AB0F0(param_1,0xffffffff820524f4);
      }
      *(unsigned int *)(param_1 + 0x558) = *(unsigned int *)(param_1 + 0x558) | 8;
      *(unsigned int *)(param_1 + 0x55c) = *(unsigned int *)(param_1 + 0x55c) | 0x20;
      break;
    }
    if (iVar5 != 0) {
      uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x57c);
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x57c) == 0) {
        uVar6 = 0xffffffff8205250c;
      }
      fn_829AB0F0(param_1,uVar6);
    }
  } while (*(int *)(param_1 + 0x574) != 0);
  *(unsigned char *)(param_1 + 0x5fb) = *(unsigned char *)(param_1 + 0x619);
  *(int *)(param_1 + 0x5f0) = *(int *)(param_1 + 0x5d0);
  *(unsigned char *)(param_1 + 0x5fa) = *(unsigned char *)(param_1 + 0x61a);
  *(unsigned char *)(param_1 + 0x5f9) = *(unsigned char *)(param_1 + 0x617);
  *(unsigned char *)(param_1 + 0x5f8) = *(unsigned char *)(param_1 + 0x616);
  *(int *)(param_1 + 0x5f4) =
       (int)(((__int64)(int)(unsigned int)*(unsigned char *)(param_1 + 0x619) * (__int64)*(int *)(param_1 + 0x5d0)
              + 7U & 0xffffffff) >> 3);
  png_read_filter_row(param_1,param_1 + 0x5f0,*(unsigned char **)(param_1 + 0x5dc) + 1,
                  (unsigned __int64)*(unsigned int *)(param_1 + 0x5d8) + 1,**(unsigned char **)(param_1 + 0x5dc));
  fn_829B5120(param_1,*(unsigned int *)(param_1 + 0x5d8),*(unsigned int *)(param_1 + 0x5dc),
                  (unsigned __int64)*(unsigned int *)(param_1 + 0x5c8) + 1);
  if (*(int *)(param_1 + 0x560) != 0) {
    fn_829B0D78(param_1);
  }
  if ((*(char *)(param_1 + 0x613) == '\0') || ((*(unsigned int *)(param_1 + 0x560) & 2) == 0)) {
    if ((param_2 & 0xffffffff) != 0) {
      fn_829B9120(param_1,param_2,0xff);
    }
    if ((param_3 & 0xffffffff) == 0) goto LAB_829aec2c;
    uVar4 = 0xff;
  }
  else {
    if (*(unsigned char *)(param_1 + 0x614) < 6) {
      fn_829B9380(param_1 + 0x5f0,(unsigned __int64)*(unsigned int *)(param_1 + 0x5dc) + 1);
    }
    if ((param_3 & 0xffffffff) != 0) {
      fn_829B9120(param_1,param_3,
                        *(unsigned int *)(&lbl_820523EC + (unsigned int)*(unsigned char *)(param_1 + 0x614) * 4));
    }
    if ((param_2 & 0xffffffff) == 0) goto LAB_829aec2c;
    uVar4 = *(unsigned int *)(&lbl_820523D0 + (unsigned int)*(unsigned char *)(param_1 + 0x614) * 4);
    param_3 = param_2;
  }
  fn_829B9120(param_1,param_3,uVar4);
LAB_829aec2c:
  fn_829BA710(param_1);
  if (*(int (***)())(param_1 + 0x66c) != (int (**)())0x0) {
    (**(int (***)())(param_1 + 0x66c))
              (param_1,*(unsigned int *)(param_1 + 0x5d4),*(unsigned char *)(param_1 + 0x614));
  }
  return;
}

