#define true 1
extern int fn_82D7EA10();
extern int memchr();
extern int _errno();
extern int tolower();
extern int fn_82F70480();
extern int fn_82F70500();
extern unsigned int lbl_8216803C;


unsigned __int64 fn_82F63788(unsigned __int64 param_1,unsigned int *param_2,int param_3,unsigned int *param_4)

{
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  unsigned int *puVar4;
  char cVar5;
  __int64 lVar6;
  unsigned char bVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned char *pbVar13;
  char *pcVar14;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  
  uVar8 = 0;
  uVar10 = param_1;
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = 0;
  }
  while( true ) {
    iVar2 = fn_82D7EA10();
    pbVar13 = (unsigned char *)uVar10;
    if (iVar2 < 2) {
      iVar2 = fn_82F70480();
      uVar3 = *(unsigned short *)(iVar2 + (unsigned int)*pbVar13 * 2) & 8;
    }
    else {
      uVar3 = fn_82F70500(*pbVar13,8);
    }
    if (uVar3 == 0) break;
    uVar10 = uVar10 + 1;
  }
  bVar7 = *pbVar13;
  if ((bVar7 == 0x2d) || (bVar7 == 0x2b)) {
    uVar10 = uVar10 + 1;
  }
  else {
    bVar7 = 0x2b;
  }
  if (((param_3 < 0) || (param_3 == 1)) || (0x24 < param_3)) goto LAB_82f639c8;
  pcVar14 = (char *)uVar10;
  if (param_3 < 1) {
    if (*pcVar14 == '0') {
      if ((pcVar14[1] == 'x') || (pcVar14[1] == 'X')) {
        param_3 = 0x10;
        goto LAB_82f638a8;
      }
      param_3 = 8;
    }
    else {
      param_3 = 10;
    }
  }
  else if (((param_3 == 0x10) && (*pcVar14 == '0')) && ((pcVar14[1] == 'x' || (pcVar14[1] == 'X'))))
  {
LAB_82f638a8:
    uVar10 = uVar10 + 2;
  }
  cVar5 = *(char *)uVar10;
  uVar11 = uVar10;
  while (cVar5 == '0') {
    uVar11 = uVar11 + 1;
    cVar5 = *(char *)uVar11;
  }
  uVar9 = 0;
  cVar5 = '\0';
  uVar1 = tolower();
  iVar2 = memchr(0xffffffff82168014,uVar1,param_3);
  uVar12 = uVar11;
  if (iVar2 != 0) {
    do {
      uVar8 = uVar9;
      cVar5 = (char)iVar2 + -0x14;
      uVar12 = uVar12 + 1;
      uVar9 = (__int64)param_3 * uVar8 + (__int64)cVar5;
      uVar1 = tolower(*(unsigned char *)uVar12);
      iVar2 = memchr(0xffffffff82168014,uVar1,param_3);
    } while (iVar2 != 0);
  }
  if ((uVar10 & 0xffffffff) != (uVar12 & 0xffffffff)) {
    lVar6 = (uVar12 - (__int64)(char)(&lbl_8216803C)[param_3]) - uVar11;
    if ((-1 < lVar6) &&
       (((0 < (int)lVar6 || (uVar9 < uVar9 - (__int64)cVar5)) ||
        (trapDoubleWordImmediate(6,(__int64)param_3,0),
        (uVar9 - (__int64)cVar5) / (unsigned __int64)(__int64)param_3 != uVar8)))) {
      puVar4 = (unsigned int *)_errno();
      *puVar4 = 0x22;
      if (param_4 != (unsigned int *)0x0) {
        *param_4 = 1;
      }
      uVar9 = 0xffffffffffffffff;
      bVar7 = 0x2b;
    }
    if (bVar7 == 0x2d) {
      uVar9 = -uVar9;
    }
    if (param_2 == (unsigned int *)0x0) {
      return uVar9;
    }
    *param_2 = (int)uVar12;
    return uVar9;
  }
LAB_82f639c8:
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = (int)param_1;
  }
  return 0;
}

