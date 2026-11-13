extern int _invalid_parameter_noinfo();
extern int fn_82F63C78();
extern int memmove();
extern int fn_82F664B0();
extern int _errno();
extern unsigned int lbl_831BBCA8;
extern unsigned int uRam8326419c;


unsigned int
fn_82F7F510(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,int *param_5,
             char param_6)

{
  unsigned int *puVar1;
  int iVar2;
  __int64 lVar3;
  char *pcVar6;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned char *puVar8;
  
  if ((param_1 & 0xffffffff) == 0) {
    puVar1 = (unsigned int *)_errno();
    *puVar1 = 0x16;
    _invalid_parameter_noinfo();
    uVar7 = 0x16;
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      puVar1 = (unsigned int *)_errno();
      uVar7 = 0x16;
    }
    else {
      if ((((((param_3 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(param_3 == 0) & param_3) + 9 &
          0xffffffff) < (param_2 & 0xffffffff)) {
        if ((param_6 != '\0') &&
           (lVar3 = (*param_5 == 0x2d) + param_1, lVar4 = lVar3, 0 < (int)param_3)) {
          do {
            pcVar6 = (char *)lVar4;
            lVar4 = lVar4 + 1;
          } while (*pcVar6 != '\0');
          memmove(lVar3 + 1,lVar3,((lVar4 - lVar3) - 1U & 0xffffffff) + 1);
        }
        uVar5 = param_1;
        if (*param_5 == 0x2d) {
          uVar5 = param_1 + 1;
          *(unsigned char *)param_1 = 0x2d;
        }
        if (0 < (int)param_3) {
          puVar8 = (unsigned char *)uVar5;
          uVar5 = uVar5 + 1;
          *puVar8 = puVar8[1];
          *(unsigned char *)uVar5 = *(unsigned char *)**(unsigned int **)(lbl_831BBCA8 + 0xbc);
        }
        lVar4 = (param_6 == '\0') + uVar5 + param_3;
        if ((int)param_2 == -1) {
          lVar3 = -1;
        }
        else {
          lVar3 = (param_1 - lVar4) + param_2;
        }
        iVar2 = fn_82F664B0(lVar4,lVar3,0xffffffff8216a9d4);
        if (iVar2 == 0) {
          puVar8 = (unsigned char *)lVar4;
          if (param_4 != 0) {
            *puVar8 = 0x45;
          }
          if (*(char *)param_5[3] != '0') {
            lVar3 = (unsigned __int64)(unsigned int)param_5[1] - 1;
            if (lVar3 < 0) {
              lVar3 = -lVar3;
              puVar8[1] = 0x2d;
            }
            iVar2 = (int)lVar3;
            if (99 < iVar2) {
              puVar8[2] = (char)(iVar2 / 100) + puVar8[2];
              lVar3 = lVar3 + (__int64)(iVar2 / 100) * -100;
            }
            iVar2 = (int)lVar3;
            if (9 < iVar2) {
              puVar8[3] = (char)(iVar2 / 10) + puVar8[3];
              lVar3 = lVar3 + (__int64)(iVar2 / 10) * -10;
            }
            puVar8[4] = puVar8[4] + (char)lVar3;
          }
          if (((uRam8326419c & 1) != 0) && (*(char *)(lVar4 + 2) == '0')) {
            memmove(lVar4 + 2,lVar4 + 3,3);
          }
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F63C78(0,0,0,0,0);
      }
      puVar1 = (unsigned int *)_errno();
      uVar7 = 0x22;
    }
    *puVar1 = uVar7;
    _invalid_parameter_noinfo();
  }
  return uVar7;
}

