#define true 1
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F70490();
extern int fn_82F81328();


unsigned __int64 fn_82F69CB0(unsigned short *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  unsigned int *puVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar3;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned short *puVar10;
  unsigned __int64 uVar11;
  
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = param_1;
  }
  if ((param_1 == (unsigned short *)0x0) ||
     ((iVar6 = (int)param_3, iVar6 != 0 && ((iVar6 < 2 || (0x24 < iVar6)))))) {
    puVar4 = (unsigned int *)fn_82F68240();
    *puVar4 = 0x16;
    fn_82F63BA0();
    return 0;
  }
  uVar1 = *param_1;
  uVar8 = 0;
  puVar2 = param_1;
  while( true ) {
    uVar11 = (unsigned __int64)uVar1;
    puVar10 = puVar2 + 1;
    iVar5 = fn_82F70490(uVar11,8);
    if (iVar5 == 0) break;
    uVar1 = *puVar10;
    puVar2 = puVar10;
  }
  if (uVar11 == 0x2d) {
    param_4 = param_4 | 2;
LAB_82f69d58:
    uVar11 = (unsigned __int64)*puVar10;
    puVar10 = puVar2 + 2;
  }
  else if (uVar11 == 0x2b) goto LAB_82f69d58;
  if (iVar6 == 0) {
    iVar6 = fn_82F81328(uVar11);
    if (iVar6 != 0) {
      param_3 = 10;
      goto LAB_82f69dd4;
    }
    if ((*puVar10 != 0x78) && (*puVar10 != 0x58)) {
      param_3 = 8;
      goto LAB_82f69dd4;
    }
    param_3 = 0x10;
  }
  if ((((int)param_3 == 0x10) && (iVar6 = fn_82F81328(uVar11), iVar6 == 0)) &&
     ((*puVar10 == 0x78 || (*puVar10 == 0x58)))) {
    uVar11 = (unsigned __int64)puVar10[1];
    puVar10 = puVar10 + 2;
  }
LAB_82f69dd4:
  trapWord(6,param_3,0);
  uVar9 = 0xffffffff / (param_3 & 0xffffffff);
  do {
    uVar3 = fn_82F81328(uVar11);
    if ((int)uVar3 == -1) {
      if (((uVar11 < 0x41) || (0x5a < uVar11)) && ((uVar11 < 0x61 || (0x7a < uVar11)))) {
LAB_82f69e6c:
        puVar10 = puVar10 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (unsigned int *)0x0) {
            puVar10 = param_1;
          }
          uVar8 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < (uVar8 & 0xffffffff))) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < (uVar8 & 0xffffffff))))))))) {
          puVar4 = (unsigned int *)fn_82F68240();
          *puVar4 = 0x22;
          if ((param_4 & 1) == 0) {
            uVar8 = 0xffffffff80000000;
            if ((param_4 & 2) == 0) {
              uVar8 = 0x7fffffff;
            }
          }
          else {
            uVar8 = 0xffffffffffffffff;
          }
        }
        if (param_2 != (unsigned int *)0x0) {
          *param_2 = puVar10;
        }
        if ((param_4 & 2) != 0) {
          uVar8 = -uVar8;
        }
        return uVar8;
      }
      if ((0x60 < uVar11) && (uVar11 < 0x7b)) {
        uVar11 = uVar11 - 0x20;
      }
      uVar3 = uVar11 - 0x37;
    }
    if ((param_3 & 0xffffffff) <= (uVar3 & 0xffffffff)) goto LAB_82f69e6c;
    uVar7 = param_4 | 8;
    if (((uVar8 & 0xffffffff) < uVar9) ||
       (((uVar8 & 0xffffffff) == uVar9 &&
        (trapWord(6,param_3,0),
        (uVar3 & 0xffffffff) <=
        (-((__int64)(int)(0xffffffff / (param_3 & 0xffffffff)) * (__int64)(int)param_3) - 1U &
        0xffffffff))))) {
      uVar8 = (__int64)(int)uVar8 * (__int64)(int)param_3 + uVar3;
    }
    else {
      param_4 = param_4 | 0xc;
      uVar7 = param_4;
      if (param_2 == (unsigned int *)0x0) goto LAB_82f69e6c;
    }
    uVar11 = (unsigned __int64)*puVar10;
    puVar10 = puVar10 + 1;
    param_4 = uVar7;
  } while( true );
}

