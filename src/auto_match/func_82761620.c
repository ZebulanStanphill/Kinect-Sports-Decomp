extern unsigned int *auStack_110;
extern unsigned int *auStack_140;
extern unsigned int *auStack_148;
extern unsigned int *auStack_14c;
extern unsigned int *auStack_158;
extern unsigned int *auStack_15c;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_bc;
extern unsigned int fStack_ec;
extern int fn_8275E9C0();
extern int fn_8275EB28();
extern int fn_8275EB90();
extern int fn_8275FE18();
extern int fn_8275FFC0();
extern unsigned int iStack_100;
extern unsigned int iStack_104;
extern unsigned int iStack_164;
extern unsigned int iStack_168;
extern unsigned int iStack_16c;
extern unsigned int iStack_170;
extern unsigned int iStack_30;
extern unsigned int iStack_50;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


unsigned __int64 fn_82761620(int *param_1,int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  unsigned char abStack_160 [4];
  unsigned char auStack_15c [4];
  unsigned char auStack_158 [8];
  unsigned char abStack_150 [4];
  unsigned char auStack_14c [4];
  unsigned char auStack_148 [4];
  unsigned char abStack_144 [4];
  unsigned char auStack_140 [24];
  unsigned int uStack_128;
  unsigned int uStack_124;
  unsigned char auStack_110 [4];
  unsigned int uStack_10c;
  unsigned int uStack_108;
  int iStack_104;
  int iStack_100;
  float fStack_ec;
  unsigned char auStack_e0 [4];
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  int iStack_d4;
  int iStack_d0;
  float fStack_bc;
  __int64 lStack_b8;
  __int64 lStack_b0;
  unsigned char auStack_a0 [24];
  unsigned int uStack_88;
  unsigned int uStack_84;
  __int64 lStack_78;
  __int64 lStack_70;
  unsigned char abStack_60 [16];
  int iStack_50;
  unsigned char abStack_40 [16];
  int iStack_30;
  
  iStack_170 = 0;
  iStack_168 = 0;
  (**(int (***)())(*param_1 + 0x44))(param_1,&iStack_170,&iStack_168);
  iStack_16c = 0;
  iStack_164 = 0;
  (**(int (***)())(*param_2 + 0x44))(param_2,&iStack_16c,&iStack_164);
  if ((iStack_170 == iStack_16c) && (iStack_168 == iStack_164)) {
    fn_8275EB28(auStack_140,param_1);
    fn_8275EB28(auStack_a0,param_2);
    while (uVar4 = uStack_88, uVar3 = uStack_128, uStack_128 < uStack_124) {
      if (uStack_84 <= uStack_88) goto LAB_827617c4;
      fn_8275FFC0(auStack_140,abStack_150,auStack_14c,auStack_148);
      fn_8275FFC0(auStack_a0,abStack_160,auStack_15c,auStack_158);
      pbVar9 = abStack_150;
      pbVar7 = abStack_160;
      do {
        bVar1 = *pbVar9;
        bVar2 = *pbVar7;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar9 = pbVar9 + 1;
        pbVar7 = pbVar7 + 1;
      } while (pbVar9 != abStack_144);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) goto LAB_827617c4;
      fn_8275FE18(auStack_e0,auStack_140);
      fn_8275FE18(auStack_110,auStack_a0);
      lStack_b0 = (__int64)iStack_d4;
      lStack_70 = (__int64)iStack_104;
      if ((float)lStack_b0 * fStack_bc != (float)lStack_70 * fStack_ec) goto LAB_827617c4;
      lStack_b8 = (__int64)iStack_d0;
      lStack_78 = (__int64)iStack_100;
      if (((float)lStack_b8 * fStack_bc != (float)lStack_78 * fStack_ec) ||
         (uStack_d8 != uStack_108)) goto LAB_827617c4;
      while (uStack_dc < uStack_d8) {
        if (uStack_108 <= uStack_10c) goto LAB_827617c4;
        fn_8275E9C0(auStack_e0,abStack_60);
        fn_8275E9C0(auStack_110,abStack_40);
        if (iStack_50 != iStack_30) goto LAB_827617c4;
        pbVar7 = abStack_40;
        pbVar9 = abStack_60;
        lVar6 = 0;
        if (iStack_50 * 4 != 0) {
          pbVar8 = pbVar9 + iStack_50 * 4;
          do {
            lVar6 = (unsigned __int64)*pbVar9 - (unsigned __int64)*pbVar7;
            if (lVar6 != 0) break;
            pbVar9 = pbVar9 + 1;
            pbVar7 = pbVar7 + 1;
          } while (pbVar9 != pbVar8);
        }
        if ((int)lVar6 != 0) goto LAB_827617c4;
      }
      uStack_128 = uVar3 + 1;
      fn_8275EB90(auStack_140);
      if (uStack_108 <= uStack_10c) {
        uStack_88 = uVar4 + 1;
        fn_8275EB90(auStack_a0);
      }
    }
    uVar5 = 1;
  }
  else {
LAB_827617c4:
    uVar5 = 0;
  }
  return uVar5;
}

