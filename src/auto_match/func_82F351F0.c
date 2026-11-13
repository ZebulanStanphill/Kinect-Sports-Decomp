extern unsigned int *auStack_68;
extern int fn_82E39C50();
extern int fn_82E579E0();
extern int fn_82EE5CC8();
extern int fn_82EE5F60();
extern int fn_82F68CC0();
extern unsigned int uStack_70;


__int64 fn_82F351F0(int *param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned __int64 param_5
                      ,unsigned __int64 param_6)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned int uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int uStack_70;
  unsigned char *pbStack_6c;
  unsigned int auStack_68 [2];
  unsigned char abStack_60 [96];
  
  if (param_1[3] == 0) {
    lVar10 = -0x3ff2c94a;
  }
  else if ((param_2 == (int *)0x0) || (param_3 == (unsigned int *)0x0)) {
    lVar10 = -0x7ff8ffa9;
  }
  else {
    *param_3 = 0;
    uStack_70 = 0;
    auStack_68[0] = 0;
    lVar10 = (**(int (***)())(*param_2 + 0x14))(param_2,auStack_68,&uStack_70);
    if (-1 < (int)lVar10) {
      uVar9 = param_1[0x10];
      if ((*(unsigned char *)(param_1 + 0x11) & 1) == 0) {
        if (0x17 < uVar9) {
          return -0x3ff2c566;
        }
        if (uStack_70 < 0x18 - uVar9) {
          lVar10 = fn_82EE5CC8(param_1 + 10,param_2,0);
          if ((int)lVar10 < 0) {
            return lVar10;
          }
          *param_3 = uStack_70;
          return 0x400d3a98;
        }
        if ((uVar9 != 0) &&
           (lVar10 = fn_82EE5F60(param_1 + 10,abStack_60,uVar9), (int)lVar10 < 0)) {
          return lVar10;
        }
        fn_82F68CC0(abStack_60 + uVar9,auStack_68[0],0x18 - uVar9);
        pbStack_6c = abStack_60;
        fn_82E39C50(param_1 + 4,&pbStack_6c);
        bVar1 = pbStack_6c[3];
        bVar3 = pbStack_6c[2];
        bVar5 = pbStack_6c[1];
        bVar7 = *pbStack_6c;
        bVar2 = pbStack_6c[7];
        bVar4 = pbStack_6c[6];
        bVar6 = pbStack_6c[5];
        bVar8 = pbStack_6c[4];
        *(unsigned char *)(param_1 + 0x11) = *(unsigned char *)(param_1 + 0x11) | 1;
        *(unsigned __int64 *)(param_1 + 8) =
             ((unsigned __int64)bVar2 << 0x18 | (unsigned __int64)bVar4 << 0x10 | (unsigned __int64)bVar6 << 8 |
             (unsigned __int64)bVar8) << 0x20 |
             (unsigned __int64)bVar1 << 0x18 | (unsigned __int64)bVar3 << 0x10 | (unsigned __int64)bVar5 << 8 |
             (unsigned __int64)bVar7;
      }
      uVar11 = (**(int (***)())(*param_1 + 0x74))(param_1);
      uVar12 = (unsigned __int64)uStack_70;
      uVar13 = uVar11 - uVar9 & 0xffffffff;
      if (uVar12 < uVar11 - uVar9) {
        uVar13 = uVar12;
      }
      lVar10 = fn_82EE5CC8(param_1 + 10,param_2,0,uVar13,param_5,param_6,uVar12);
      if (-1 < (int)lVar10) {
        if ((unsigned int)param_1[0x10] < uVar11) {
          *param_3 = (unsigned int)uVar13;
          lVar10 = 0x400d3a98;
        }
        else {
          lVar10 = (**(int (***)())(*param_1 + 0x70))(param_1,param_3);
          *param_3 = *param_3 - uVar9;
          if (lVar10 == 0) {
            *(unsigned char *)(param_1 + 0x11) = *(unsigned char *)(param_1 + 0x11) | 2;
            fn_82E579E0(param_1 + 10);
          }
        }
      }
    }
  }
  return lVar10;
}

