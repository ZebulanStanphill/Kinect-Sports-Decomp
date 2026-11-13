#define true 1
extern unsigned int *auStack_150;
extern int fn_82A1F2B8();
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F68CC0();
extern int __iob_func();
extern int fn_82F6BB98();
extern int fn_82F70748();
extern int fn_82F7C468();
extern int fn_82F7C9A0();


unsigned __int64 fn_82F67A88(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  unsigned int uVar1;
  unsigned int *puVar4;
  int iVar5;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned char auStack_150 [336];
  
  if (((param_2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) {
    if ((param_4 != (int *)0x0) &&
       (((param_1 & 0xffffffff) != 0 &&
        (trapWord(6,param_2,0), (param_3 & 0xffffffff) <= 0xffffffff / (param_2 & 0xffffffff))))) {
      uVar9 = (__int64)(int)param_2 * (__int64)(int)param_3;
      iVar5 = __iob_func();
      if ((param_4 == (int *)(iVar5 + 0x20)) ||
         (iVar5 = __iob_func(), param_4 == (int *)(iVar5 + 0x40))) {
        uVar11 = uVar9 & 0xffffffff;
        while (uVar11 != 0) {
          uVar11 = uVar9;
          if (0xfe < (uVar9 & 0xffffffff)) {
            uVar11 = 0xff;
          }
          fn_82F68CC0(auStack_150,param_1,uVar11);
          auStack_150[(int)uVar11] = 0;
          fn_82A1F2B8(auStack_150);
          uVar9 = uVar9 - uVar11;
          uVar11 = uVar9;
        }
        return param_3;
      }
      uVar11 = uVar9;
      if ((param_4[3] & 0x10cU) == 0) {
        uVar8 = 0x1000;
      }
      else {
        uVar8 = (unsigned __int64)(unsigned int)param_4[6];
      }
joined_r0x82f67b3c:
      do {
        if ((uVar11 & 0xffffffff) == 0) {
          return param_3;
        }
        uVar6 = param_4[3] & 0x108;
        if (uVar6 != 0) {
          uVar1 = param_4[1];
          if (uVar1 != 0) {
            if ((int)uVar1 < 0) {
              param_4[3] = param_4[3] | 0x20;
              uVar9 = (uVar9 - uVar11 & 0xffffffff) / (param_2 & 0xffffffff);
              goto LAB_82f67c8c;
            }
            uVar10 = (unsigned __int64)uVar1;
            if ((uVar11 & 0xffffffff) < (unsigned __int64)uVar1) {
              uVar10 = uVar11;
            }
            fn_82F68CC0(*param_4,param_1,uVar10);
            uVar11 = uVar11 - uVar10;
            param_1 = uVar10 + param_1;
            *param_4 = *param_4 + (int)uVar10;
            param_4[1] = param_4[1] - (int)uVar10;
            goto joined_r0x82f67b3c;
          }
        }
        if ((uVar11 & 0xffffffff) < uVar8) {
          iVar5 = fn_82F70748(*(unsigned char *)param_1,param_4);
          if (iVar5 == -1) {
LAB_82f67c94:
            uVar9 = (uVar9 - uVar11 & 0xffffffff) / (param_2 & 0xffffffff);
LAB_82f67c8c:
            trapWord(6,param_2,0);
            return uVar9;
          }
          uVar8 = (unsigned __int64)(unsigned int)param_4[6];
          param_1 = param_1 + 1;
          uVar11 = uVar11 - 1;
          if (param_4[6] < 1) {
            uVar8 = 1;
          }
        }
        else {
          if ((uVar6 != 0) && (iVar5 = fn_82F6BB98(param_4), iVar5 != 0)) goto LAB_82f67c94;
          uVar10 = uVar11;
          if (uVar8 != 0) {
            trapWord(6,uVar8,0);
            uVar10 = (__int64)(int)((uVar11 & 0xffffffff) / uVar8) * (__int64)(int)uVar8;
          }
          uVar2 = fn_82F7C468(param_4);
          uVar3 = fn_82F7C9A0(uVar2,param_1,uVar10);
          if ((int)uVar3 == -1) goto LAB_82f67c20;
          uVar7 = uVar10;
          if ((uVar3 & 0xffffffff) <= (uVar10 & 0xffffffff)) {
            uVar7 = uVar3;
          }
          uVar11 = uVar11 - uVar7;
          param_1 = uVar7 + param_1;
          if ((uVar3 & 0xffffffff) < (uVar10 & 0xffffffff)) {
LAB_82f67c20:
            trapWord(6,param_2,0);
            param_4[3] = param_4[3] | 0x20;
            return (uVar9 - uVar11 & 0xffffffff) / (param_2 & 0xffffffff);
          }
        }
      } while( true );
    }
    puVar4 = (unsigned int *)fn_82F68240();
    *puVar4 = 0x16;
    fn_82F63BA0();
  }
  return 0;
}

