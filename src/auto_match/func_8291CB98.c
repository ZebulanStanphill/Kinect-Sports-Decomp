typedef unsigned char bool;
extern unsigned int *auStack_140;
extern unsigned int *auStack_240;
extern unsigned int fStack_244;
extern int fn_8265C940();
extern int fn_8291C6F8();
extern int fn_82F67F88();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8202E478;
extern unsigned int lbl_8202E47B;
extern unsigned int lbl_8202E47C;
extern unsigned int lbl_8202E47F;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_260;


unsigned __int64 fn_8291CB98(unsigned int *param_1,unsigned char *param_2,unsigned int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  int *piVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned int uVar9;
  int *piVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  bool bVar14;
  unsigned int uStack_260;
  int aiStack_25c;
  float fStack_244;
  unsigned char auStack_240 [256];
  unsigned char auStack_140 [256];
  
  if (3 < param_3) {
    pbVar8 = &lbl_8202E47C;
    pbVar7 = param_2;
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar7;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar8 != &lbl_8202E47F);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      iVar11 = 0;
    }
    else {
      pbVar8 = &lbl_8202E478;
      pbVar7 = param_2;
      do {
        bVar1 = *pbVar8;
        bVar2 = *pbVar7;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar8 = pbVar8 + 1;
        pbVar7 = pbVar7 + 1;
      } while (pbVar8 != &lbl_8202E47B);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
        return 0xffffffff80004005;
      }
      iVar11 = 1;
    }
    param_3 = param_3 - 3;
    param_2 = param_2 + 3;
    uVar12 = 0x100;
    if (param_3 < 0x101) {
      uVar12 = param_3;
    }
    uVar13 = 0;
    if (uVar12 != 0) {
      do {
        if (param_2[uVar13] == 10) goto LAB_8291cc70;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar12);
    }
    uVar13 = 0;
LAB_8291cc70:
    if (uVar13 != 0) {
      fn_8291C6F8(auStack_240,uVar13 + 1,param_2);
      iVar3 = fn_82F67F88(auStack_240,0xffffffff8202e470,&aiStack_25c,&uStack_260,auStack_140);
      if (iVar3 == 2) {
        uVar12 = (param_3 - uVar13) - 1;
        param_2 = param_2 + uVar13 + 1;
        if (uVar12 != 0) {
          uVar13 = 0x100;
          if (uVar12 < 0x101) {
            uVar13 = uVar12;
          }
          uVar9 = 0;
          if (uVar13 != 0) {
            do {
              if (param_2[uVar9] == 10) goto LAB_8291ccf8;
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar13);
          }
          uVar9 = 0;
LAB_8291ccf8:
          if (uVar9 != 0) {
            fn_8291C6F8(auStack_240,uVar9 + 1,param_2);
            iVar3 = fn_82F67F88(auStack_240,0xffffffff8202e468,&fStack_244,auStack_140);
            if ((iVar3 == 1) &&
               (bVar14 = fStack_244 < lbl_821AAD20,
               (((unsigned int)LZCOUNT(iVar11) >> 4 & 2) + 1) * aiStack_25c * uStack_260 * 4 <=
               (uVar12 - uVar9) - 1)) {
              param_1[3] = aiStack_25c;
              param_1[4] = uStack_260;
              param_1[5] = 1;
              param_1[0xc] = aiStack_25c << 4;
              *param_1 = 0x1a22aaa6;
              param_1[0xd] = 0;
              param_1[0xe] = 1;
              iVar4 = fn_8265C940((__int64)(aiStack_25c << 4) * (__int64)(int)uStack_260,
                                        0x24810000);
              param_1[1] = iVar4;
              iVar3 = lbl_82002AE0;
              if (iVar4 != 0) {
                lVar5 = (unsigned __int64)uStack_260 - 1;
                if (-1 < lVar5) {
                  param_2 = param_2 + (uVar9 - 3);
                  do {
                    piVar10 = (int *)((int)lVar5 * aiStack_25c * 0x10 + param_1[1]);
                    piVar6 = piVar10 + aiStack_25c * 4;
                    if (iVar11 == 0) {
                      if (bVar14) {
                        for (; piVar10 != piVar6; piVar10 = piVar10 + 4) {
                          *piVar10 = *(int *)(param_2 + 4);
                          piVar10[1] = *(int *)(param_2 + 8);
                          param_2 = param_2 + 0xc;
                          piVar10[2] = *(int *)param_2;
                          piVar10[3] = iVar3;
                        }
                      }
                      else {
                        for (; piVar10 != piVar6; piVar10 = piVar10 + 4) {
                          uVar12 = *(unsigned int *)(param_2 + 4);
                          *piVar10 = (uVar12 * 0x10000 + (uVar12 & 0xff00)) * 0x100 +
                                     (uVar12 >> 8 & 0xff00) + (uVar12 >> 0x18);
                          uVar12 = *(unsigned int *)(param_2 + 8);
                          piVar10[1] = (uVar12 * 0x10000 + (uVar12 & 0xff00)) * 0x100 +
                                       (uVar12 >> 8 & 0xff00) + (uVar12 >> 0x18);
                          uVar12 = *(unsigned int *)(param_2 + 0xc);
                          piVar10[3] = iVar3;
                          param_2 = param_2 + 0xc;
                          piVar10[2] = (uVar12 * 0x10000 + (uVar12 & 0xff00)) * 0x100 +
                                       (uVar12 >> 8 & 0xff00) + (uVar12 >> 0x18);
                        }
                      }
                    }
                    else if (bVar14) {
                      for (; piVar10 != piVar6; piVar10 = piVar10 + 4) {
                        iVar4 = *(int *)(param_2 + 4);
                        param_2 = param_2 + 4;
                        piVar10[2] = iVar4;
                        piVar10[1] = iVar4;
                        *piVar10 = iVar4;
                        piVar10[3] = iVar3;
                      }
                    }
                    else {
                      for (; piVar10 != piVar6; piVar10 = piVar10 + 4) {
                        uVar12 = *(unsigned int *)(param_2 + 4);
                        param_2 = param_2 + 4;
                        piVar10[3] = iVar3;
                        iVar4 = (uVar12 * 0x10000 + (uVar12 & 0xff00)) * 0x100 +
                                (uVar12 >> 8 & 0xff00) + (uVar12 >> 0x18);
                        piVar10[2] = iVar4;
                        piVar10[1] = iVar4;
                        *piVar10 = iVar4;
                      }
                    }
                    lVar5 = lVar5 + -1;
                  } while (-1 < lVar5);
                }
                return 0;
              }
              return 0xffffffff8007000e;
            }
          }
        }
      }
    }
  }
  return 0xffffffff80004005;
}

