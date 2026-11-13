#define true 1
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F704C8();
extern unsigned int lbl_831BBCA8;


unsigned __int64 fn_82F6C738(unsigned char *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned char *pbVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned char *puVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned char *pbVar10;
  unsigned int uVar11;
  char cVar12;
  
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = param_1;
  }
  if ((param_1 == (unsigned char *)0x0) || ((param_3 != 0 && (((int)param_3 < 2 || (0x24 < (int)param_3))))))
  {
    puVar4 = (unsigned int *)fn_82F68240();
    *puVar4 = 0x16;
    fn_82F63BA0();
    return 0;
  }
  bVar1 = *param_1;
  uVar9 = 0;
  pbVar3 = param_1;
  puVar7 = lbl_831BBCA8;
  while( true ) {
    uVar11 = (unsigned int)bVar1;
    pbVar10 = pbVar3 + 1;
    if (*(int *)(puVar7 + 0xac) < 2) {
      uVar5 = *(unsigned short *)((unsigned int)bVar1 * 2 + *(int *)(puVar7 + 200)) & 8;
    }
    else {
      uVar5 = fn_82F704C8(uVar11,8,0xffffffff831bbca8);
      puVar7 = lbl_831BBCA8;
    }
    if (uVar5 == 0) break;
    bVar1 = *pbVar10;
    pbVar3 = pbVar10;
  }
  if (bVar1 == 0x2d) {
    param_4 = param_4 | 2;
LAB_82f6c814:
    uVar11 = (unsigned int)*pbVar10;
    pbVar10 = pbVar3 + 2;
  }
  else if (bVar1 == 0x2b) goto LAB_82f6c814;
  if (param_3 == 0) {
    if ((char)uVar11 != '0') {
      param_3 = 10;
      goto LAB_82f6c890;
    }
    if ((*pbVar10 != 0x78) && (*pbVar10 != 0x58)) {
      param_3 = 8;
      goto LAB_82f6c890;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && ((char)uVar11 == '0')) && ((*pbVar10 == 0x78 || (*pbVar10 == 0x58)))) {
    uVar11 = (unsigned int)pbVar10[1];
    pbVar10 = pbVar10 + 2;
  }
LAB_82f6c890:
  uVar6 = (unsigned __int64)(int)param_3;
  trapDoubleWordImmediate(6,uVar6,0);
  do {
    uVar2 = *(unsigned short *)(uVar11 * 2 + *(int *)(puVar7 + 200));
    cVar12 = (char)uVar11;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) {
LAB_82f6c92c:
        pbVar10 = pbVar10 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (unsigned int *)0x0) {
            pbVar10 = param_1;
          }
          uVar9 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x8000000000000000 < uVar9)) ||
                  (((param_4 & 2) == 0 && (0x7fffffffffffffff < uVar9)))))))) {
          puVar4 = (unsigned int *)fn_82F68240();
          *puVar4 = 0x22;
          if ((param_4 & 1) == 0) {
            uVar9 = 0x8000000000000000;
            if ((param_4 & 2) == 0) {
              uVar9 = 0x7fffffffffffffff;
            }
          }
          else {
            uVar9 = 0xffffffffffffffff;
          }
        }
        if (param_2 != (unsigned int *)0x0) {
          *param_2 = pbVar10;
        }
        if ((param_4 & 2) != 0) {
          uVar9 = -uVar9;
        }
        return uVar9;
      }
      iVar8 = (int)cVar12;
      if (('`' < cVar12) && (cVar12 < '{')) {
        iVar8 = iVar8 + -0x20;
      }
      uVar11 = iVar8 - 0x37;
    }
    else {
      uVar11 = (int)cVar12 - 0x30;
    }
    if (param_3 <= uVar11) goto LAB_82f6c92c;
    uVar5 = param_4 | 8;
    if ((uVar9 < 0xffffffffffffffff / uVar6) ||
       ((uVar9 == 0xffffffffffffffff / uVar6 &&
        (trapDoubleWordImmediate(6,uVar6,0),
        (unsigned __int64)uVar11 <= -((0xffffffffffffffff / uVar6) * uVar6) - 1)))) {
      uVar9 = uVar6 * uVar9 + (unsigned __int64)uVar11;
    }
    else {
      param_4 = param_4 | 0xc;
      uVar5 = param_4;
      if (param_2 == (unsigned int *)0x0) goto LAB_82f6c92c;
    }
    uVar11 = (unsigned int)*pbVar10;
    pbVar10 = pbVar10 + 1;
    param_4 = uVar5;
  } while( true );
}

