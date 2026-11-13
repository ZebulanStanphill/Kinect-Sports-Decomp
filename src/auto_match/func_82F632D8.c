#define true 1
extern int fn_82D7EA10();
extern int fn_82F640B0();
extern int fn_82F68240();
extern int fn_82F6DF30();
extern int fn_82F70480();
extern int fn_82F70500();
extern unsigned int lbl_82167FEC;


unsigned __int64 fn_82F632D8(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar3;
  unsigned int *puVar6;
  char cVar8;
  __int64 lVar7;
  unsigned char bVar9;
  unsigned __int64 uVar10;
  unsigned char *pbVar13;
  char *pcVar14;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  char cStack_70;
  
  uVar11 = param_1;
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = 0;
  }
  while( true ) {
    iVar4 = fn_82D7EA10();
    pbVar13 = (unsigned char *)uVar11;
    if (iVar4 < 2) {
      iVar4 = fn_82F70480();
      uVar5 = *(unsigned short *)(iVar4 + (unsigned int)*pbVar13 * 2) & 8;
    }
    else {
      uVar5 = fn_82F70500(*pbVar13,8);
    }
    if (uVar5 == 0) break;
    uVar11 = uVar11 + 1;
  }
  bVar9 = *pbVar13;
  if ((bVar9 == 0x2d) || (bVar9 == 0x2b)) {
    uVar11 = uVar11 + 1;
  }
  else {
    bVar9 = 0x2b;
  }
  iVar4 = (int)param_3;
  if (((iVar4 < 0) || (iVar4 == 1)) || (0x24 < iVar4)) goto LAB_82f63514;
  pcVar14 = (char *)uVar11;
  if (iVar4 < 1) {
    if (*pcVar14 == '0') {
      if ((pcVar14[1] == 'x') || (pcVar14[1] == 'X')) {
        param_3 = 0x10;
        goto LAB_82f633f8;
      }
      param_3 = 8;
    }
    else {
      param_3 = 10;
    }
  }
  else if (((iVar4 == 0x10) && (*pcVar14 == '0')) && ((pcVar14[1] == 'x' || (pcVar14[1] == 'X')))) {
LAB_82f633f8:
    uVar11 = uVar11 + 2;
  }
  cVar8 = *(char *)uVar11;
  uVar12 = uVar11;
  while (cVar8 == '0') {
    uVar12 = uVar12 + 1;
    cVar8 = *(char *)uVar12;
  }
  uVar3 = fn_82F6DF30();
  iVar4 = fn_82F640B0(0xffffffff82167fc4,uVar3,param_3);
  uVar2 = 0;
  uVar10 = 0;
  uVar1 = uVar12;
  while (iVar4 != 0) {
    cStack_70 = (char)iVar4 + '<';
    uVar1 = uVar1 + 1;
    uVar3 = fn_82F6DF30(*(unsigned char *)uVar1);
    iVar4 = fn_82F640B0(0xffffffff82167fc4,uVar3,param_3);
    uVar2 = uVar10;
    uVar10 = (__int64)(int)uVar10 * (__int64)(int)param_3 + (__int64)cStack_70;
  }
  if ((uVar11 & 0xffffffff) != (uVar1 & 0xffffffff)) {
    lVar7 = (uVar1 - (__int64)(char)(&lbl_82167FEC)[(int)param_3]) - uVar12;
    if ((-1 < lVar7) &&
       (((0 < (int)lVar7 || ((uVar10 & 0xffffffff) < (uVar10 - (__int64)cStack_70 & 0xffffffff)))
        || (trapWord(6,param_3,0),
           (uVar10 - (__int64)cStack_70 & 0xffffffff) / (param_3 & 0xffffffff) !=
           (uVar2 & 0xffffffff))))) {
      puVar6 = (unsigned int *)fn_82F68240();
      *puVar6 = 0x22;
      if (param_4 != (unsigned int *)0x0) {
        *param_4 = 1;
      }
      uVar10 = 0xffffffffffffffff;
      bVar9 = 0x2b;
    }
    if (bVar9 == 0x2d) {
      uVar10 = -uVar10;
    }
    if (param_2 == (unsigned int *)0x0) {
      return uVar10;
    }
    *param_2 = (int)uVar1;
    return uVar10;
  }
LAB_82f63514:
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = (int)param_1;
  }
  return 0;
}

