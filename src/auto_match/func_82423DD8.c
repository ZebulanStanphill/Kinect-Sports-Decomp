extern int fn_82262618();
extern int fn_82262708();
extern int fn_822B17A8();
extern int fn_82414950();
extern int fn_82417F58();
extern int fn_8241F440();
extern int fn_82424C80();
extern int fn_82508078();
extern int fn_82536590();
extern int fn_82F622E0();
extern unsigned int ltcg_pool_0_0f;


void fn_82423DD8(int *param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned int *param_5,
                  unsigned int *param_6,int *param_7,unsigned int *param_8)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned char uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  
  uVar6 = (**(int (***)())(*param_1 + 0x6c))();
  *param_5 = uVar6;
  *param_6 = 1;
  *param_7 = param_1[0x14];
  *param_8 = ltcg_pool_0_0f;
  if ((*(int *)(param_2 + 0x20) == 0) && (*(int *)(param_2 + 0x24) == 0)) {
    if (*(int *)(param_3 + 4) == 0) {
      iVar7 = param_1[2];
      if (param_1[1] == *(int *)(iVar7 + 0x2b20)) {
        if (param_1[7] == param_1[8]) {
          uVar6 = *(unsigned int *)(param_1[1] + 0x40c);
          uVar3 = *(unsigned int *)(param_1[1] + 0x18);
          if ((*(int *)(iVar7 + 0xa0) == 0) ||
             (uVar5 = 1, *(int *)(*(int *)(iVar7 + 0xa0) + 0x40) != 1)) {
            uVar5 = 0;
          }
          uVar4 = *(unsigned int *)(param_2 + 0x40);
          iVar10 = 0;
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(param_2 + 0x44);
          iVar10 = *(int *)(iVar9 * 0x10 + param_1[7]);
          iVar11 = iVar10 * 0x10 + param_1[0xb];
          piVar1 = *(int **)(iVar11 + 0xc);
          uVar2 = *(unsigned int *)(iVar11 + 8);
          iVar11 = *piVar1;
          if ((unsigned int)(piVar1[1] - iVar11 >> 2) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            fn_82F622E0(0xffffffff821ae698);
          }
          uVar6 = *(unsigned int *)(param_1[1] + 0x40c);
          uVar3 = *(unsigned int *)(param_1[1] + 0x18);
          if ((*(int *)(iVar7 + 0xa0) == 0) ||
             (uVar5 = 1, *(int *)(*(int *)(iVar7 + 0xa0) + 0x40) != 1)) {
            uVar5 = 0;
          }
          uVar4 = *(unsigned int *)(uVar2 * 4 + iVar11);
        }
        fn_82262708(*(unsigned int *)(param_1[1] + 0x408),uVar5,uVar3,uVar6,
                        *(unsigned int *)(param_2 + 0x30),iVar9,iVar10,uVar4);
      }
      *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
      fn_82536590((unsigned __int64)(unsigned int)param_1[2] + 0x1580,0);
      if ((((9 < *(unsigned int *)(param_2 + 0x30)) && (iVar7 = fn_82417F58(param_1[1]), iVar7 != 0)) &&
          (*(int *)(iVar7 + 0x24) != 0)) &&
         (iVar7 = *(int *)(*(int *)(iVar7 + 0x24) + 0x34), iVar7 != 0)) {
        fn_822B17A8(iVar7,0x10,0);
      }
      iVar7 = param_1[1];
      *(unsigned int *)(param_2 + 0x18) = 0;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      fn_8241F440(iVar7,param_2);
      iVar7 = *(int *)(param_2 + 0x14);
      if (iVar7 == 1) {
        uVar8 = 9;
      }
      else if (iVar7 == 2) {
        uVar8 = 10;
      }
      else if (iVar7 == 3) {
        uVar8 = 0xb;
      }
      else {
        uVar8 = 0xc;
      }
      fn_82414950(*(unsigned int *)(param_1[2] + 0x2b50),iVar7,uVar8);
      if ((param_1[0x10] == 0) || (*(unsigned int *)(param_2 + 0x30) < (unsigned int)param_1[0x11])) {
        if ((*(int *)(param_1[2] + 0xa0) == 0) ||
           (*(int *)(*(int *)(param_1[2] + 0xa0) + 0x40) != 1)) {
          if ((*(int *)(param_2 + 0x170) == 0) ||
             (*(int *)(param_2 + 0x30) != *(int *)(param_2 + 0x170))) {
            *(unsigned int *)(param_2 + 0x1c) = 0;
            if (param_1[1] == *(int *)(param_1[2] + 0x2b20)) {
              fn_82508078(*(unsigned int *)(param_1[2] + 0xa4),0xffffffff821b8664,0);
            }
          }
          else {
            *(unsigned int *)(param_2 + 0x1c) = 1;
          }
        }
      }
      else {
        *(unsigned int *)(param_2 + 0x20) = 1;
        if (*(unsigned int *)(param_2 + 0x170) < *(unsigned int *)(param_2 + 0x30)) {
          *(unsigned int *)(param_2 + 0x28) = 1;
          *(unsigned int *)(param_2 + 0x2c) = 1;
        }
        *(unsigned int *)(param_2 + 0x40) = 0;
      }
    }
    if ((param_1[0x13] != 0) || (*(int *)(param_3 + 4) != 0)) {
      iVar7 = param_1[2];
      if (param_1[1] == *(int *)(iVar7 + 0x2b20)) {
        if (param_1[7] == param_1[8]) {
          uVar6 = *(unsigned int *)(param_1[1] + 0x40c);
          uVar3 = *(unsigned int *)(param_1[1] + 0x18);
          if ((*(int *)(iVar7 + 0xa0) == 0) ||
             (uVar5 = 1, *(int *)(*(int *)(iVar7 + 0xa0) + 0x40) != 1)) {
            uVar5 = 0;
          }
          uVar4 = *(unsigned int *)(param_2 + 0x40);
          iVar10 = 0;
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(param_2 + 0x44);
          iVar10 = *(int *)(iVar9 * 0x10 + param_1[7]);
          iVar11 = iVar10 * 0x10 + param_1[0xb];
          piVar1 = *(int **)(iVar11 + 0xc);
          uVar2 = *(unsigned int *)(iVar11 + 8);
          iVar11 = *piVar1;
          if ((unsigned int)(piVar1[1] - iVar11 >> 2) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            fn_82F622E0(0xffffffff821ae698);
          }
          uVar6 = *(unsigned int *)(param_1[1] + 0x40c);
          uVar3 = *(unsigned int *)(param_1[1] + 0x18);
          if ((*(int *)(iVar7 + 0xa0) == 0) ||
             (uVar5 = 1, *(int *)(*(int *)(iVar7 + 0xa0) + 0x40) != 1)) {
            uVar5 = 0;
          }
          uVar4 = *(unsigned int *)(uVar2 * 4 + iVar11);
        }
        fn_82262618(*(unsigned int *)(param_1[1] + 0x408),uVar5,uVar3,uVar6,
                          *(unsigned int *)(param_2 + 0x30),iVar9,iVar10,uVar4);
      }
    }
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    iVar7 = param_1[7];
    if (iVar7 != param_1[8]) {
      iVar10 = *(int *)(param_2 + 0x44) * 0x10;
      iVar11 = *(int *)(iVar10 + iVar7) * 0x10 + param_1[0xb];
      iVar9 = *(int *)(iVar11 + 8);
      piVar1 = *(int **)(iVar11 + 4);
      *(int *)(iVar11 + 8) = iVar9 + 1;
      if ((unsigned int)((piVar1[1] - *piVar1) / 0x1f0) <= iVar9 + 1U) {
        *(unsigned int *)(iVar11 + 8) = 0;
        if (*piVar1 != piVar1[1]) {
          fn_82424C80();
        }
      }
      if (*(unsigned int *)(iVar10 + iVar7 + 4) <= *(unsigned int *)(param_2 + 0x40)) {
        iVar7 = *(int *)(param_2 + 0x44) * 0x10 + param_1[7];
        if (*(int *)(iVar7 + 8) == 0) {
          uVar12 = *(int *)(param_2 + 0x44) + 1;
          uVar2 = param_1[8] - param_1[7] >> 4;
          iVar7 = uVar12 - (uVar12 / uVar2) * uVar2;
        }
        else {
          iVar7 = *(int *)(iVar7 + 0xc);
        }
        *(int *)(param_2 + 0x44) = iVar7;
        *(unsigned int *)(param_2 + 0x40) = 0;
        *(int *)(param_2 + 0x1a8) = *(int *)(param_2 + 0x1a8) + 1;
      }
    }
    *(int *)(param_2 + 0xd0) = *(int *)(param_2 + 0xd0) + 1;
    if ((param_1[0x13] != 0) || (*(int *)(param_3 + 4) != 0)) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + -1;
      if (*(int *)(param_3 + 4) != 0) {
        fn_82536590((unsigned __int64)(unsigned int)param_1[2] + 0xe20,0);
        iVar7 = param_1[1];
        *(unsigned int *)(param_2 + 0x14) = 0;
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
        fn_8241F440(iVar7,param_2);
        fn_82536590((unsigned __int64)(unsigned int)param_1[2] + 0x157c,0);
      }
      if (*(int *)(param_2 + 0x3c) == 0) {
        *(unsigned int *)(param_2 + 0x20) = 1;
        if (*(unsigned int *)(param_2 + 0x170) < *(unsigned int *)(param_2 + 0x30)) {
          *(unsigned int *)(param_2 + 0x28) = 1;
          *(unsigned int *)(param_2 + 0x2c) = 1;
        }
        *(unsigned int *)(param_2 + 0x40) = 0;
      }
      else if (*(int *)(param_3 + 4) != 0) {
        fn_82414950(*(unsigned int *)(param_1[2] + 0x2b50),0,0x16);
        if (param_1[1] == *(int *)(param_1[2] + 0x2b20)) {
          fn_82508078(*(unsigned int *)(param_1[2] + 0xa4),0xffffffff821b867c,0);
        }
      }
    }
    if (param_1[0x12] != 0) {
      *(unsigned int *)(param_2 + 0x20) = 0;
      *(unsigned int *)(param_2 + 0x24) = 1;
    }
  }
  return;
}

