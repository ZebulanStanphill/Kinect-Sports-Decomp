typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_823CE4E0();
extern int fn_823CE840();
extern int fn_823CEC40();
extern int fn_823CEFB0();
extern int fn_823D0268();
extern int fn_8288B760();
extern unsigned int lbl_82191FC4;
extern unsigned int ltcg_pool_0_0f;


void fn_823D1978(double param_1,int param_2)

{
  float fVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  bool bVar9;
  float fVar10;
  char cVar11;
  unsigned int uVar12;
  bool bVar13;
  
  if (*(int *)(param_2 + 0x84) == 0) {
    return;
  }
  cVar11 = fn_8288B760();
  fVar10 = lbl_82191FC4;
  if (cVar11 == '\0') {
    return;
  }
  cVar11 = *(char *)(param_2 + 0x152c);
  if ((cVar11 != '\0') && (*(char *)(param_2 + 0x1520) != '\0')) {
    fn_823D0268(param_2,*(unsigned int *)(param_2 + 0x1524),*(unsigned int *)(param_2 + 0x1528));
    goto LAB_823d1de8;
  }
  cVar2 = *(char *)(param_2 + 0x1560);
  if ((cVar2 != '\0') && (*(char *)(param_2 + 0x1540) != '\0')) {
    fn_823CE4E0(param_2,*(unsigned int *)(param_2 + 0x1544));
    goto LAB_823d1de8;
  }
  cVar3 = *(char *)(param_2 + 0x15b0);
  if ((cVar3 != '\0') && (*(char *)(param_2 + 0x1590) != '\0')) {
    fn_823CE840(param_2,*(unsigned int *)(param_2 + 0x1594));
    goto LAB_823d1de8;
  }
  cVar4 = *(char *)(param_2 + 0x1650);
  if ((cVar4 != '\0') && (*(char *)(param_2 + 0x1630) != '\0')) {
    fn_823CEFB0(param_2,*(unsigned int *)(param_2 + 0x1634));
    goto LAB_823d1de8;
  }
  cVar5 = *(char *)(param_2 + 0x1600);
  if ((cVar5 != '\0') && (*(char *)(param_2 + 0x15e0) != '\0')) {
    fn_823CEC40(param_2,*(unsigned int *)(param_2 + 0x15e4));
    goto LAB_823d1de8;
  }
  if (((cVar11 != '\0') || (((cVar4 != '\0' || (cVar5 != '\0')) || (cVar2 != '\0')))) ||
     (bVar13 = false, cVar3 != '\0')) {
    bVar13 = true;
  }
  cVar6 = *(char *)(param_2 + 0x1520);
  if (((cVar6 != '\0') || (*(char *)(param_2 + 0x1630) != '\0')) ||
     ((*(char *)(param_2 + 0x15e0) != '\0' ||
      ((*(char *)(param_2 + 0x1540) != '\0' || (bVar9 = false, *(char *)(param_2 + 0x1590) != '\0'))
      )))) {
    bVar9 = true;
  }
  if ((bVar13) && (bVar9)) {
    uVar7 = *(unsigned int *)(param_2 + 0xcc);
    if (cVar11 == '\0') {
      if ((cVar6 == '\0') || (uVar12 = *(unsigned int *)(param_2 + 0x1528), uVar12 != (uVar7 == 0)))
      goto LAB_823d1b7c;
LAB_823d1b74:
      uVar8 = *(unsigned int *)(param_2 + 0x1524);
    }
    else {
      uVar12 = *(unsigned int *)(param_2 + 0x1534);
      if (uVar12 != uVar7) {
LAB_823d1b7c:
        if (cVar2 == '\0') {
          if ((*(char *)(param_2 + 0x1540) == '\0') ||
             (uVar12 = *(unsigned int *)(param_2 + 0x1544), uVar12 != (uVar7 == 0))) goto LAB_823d1bc4;
        }
        else {
          uVar12 = *(unsigned int *)(param_2 + 0x1564);
          if (uVar12 != uVar7) {
LAB_823d1bc4:
            if (((cVar11 != '\0') || (cVar6 != '\0')) && (cVar6 != '\0')) {
              if (cVar4 == '\0') {
                if (cVar2 != '\0') goto LAB_823d1c6c;
                if (cVar5 == '\0') {
                  if (cVar3 == '\0') {
                    return;
                  }
                  goto LAB_823d1c90;
                }
                goto LAB_823d1c7c;
              }
              goto LAB_823d1c58;
            }
            if (*(char *)(param_2 + 0x1630) == '\0') {
              if (*(char *)(param_2 + 0x1540) != '\0') goto LAB_823d1c10;
              if (*(char *)(param_2 + 0x15e0) == '\0') {
                cVar11 = *(char *)(param_2 + 0x1590);
                goto joined_r0x823d1dc8;
              }
              goto LAB_823d1c28;
            }
            goto LAB_823d1bec;
          }
        }
        goto LAB_823d1b94;
      }
LAB_823d1b50:
      uVar8 = *(unsigned int *)(param_2 + 0x1530);
    }
    fn_823D0268(param_2,uVar8,uVar12);
  }
  else {
    if (((cVar6 != '\0') || (cVar11 != '\0')) &&
       (fVar1 = (float)((double)*(float *)(param_2 + 0x1538) + param_1),
       *(float *)(param_2 + 0x1538) = fVar1, fVar10 < fVar1)) {
      if (cVar11 != '\0') {
        uVar12 = *(unsigned int *)(param_2 + 0x1534);
        goto LAB_823d1b50;
      }
      if (cVar6 != '\0') {
        uVar12 = *(unsigned int *)(param_2 + 0x1528);
        goto LAB_823d1b74;
      }
    }
    if (((*(char *)(param_2 + 0x1630) != '\0') || (cVar4 != '\0')) &&
       (fVar1 = (float)((double)*(float *)(param_2 + 0x1670) + param_1),
       *(float *)(param_2 + 0x1670) = fVar1, fVar10 < fVar1)) {
      if (cVar4 == '\0') {
        if (*(char *)(param_2 + 0x1630) == '\0') goto LAB_823d1d24;
LAB_823d1bec:
        uVar8 = *(unsigned int *)(param_2 + 0x1634);
      }
      else {
LAB_823d1c58:
        uVar8 = *(unsigned int *)(param_2 + 0x1654);
      }
      fn_823CEFB0(param_2,uVar8);
      goto LAB_823d1de8;
    }
LAB_823d1d24:
    if (((*(char *)(param_2 + 0x15e0) != '\0') || (cVar5 != '\0')) &&
       (fVar1 = (float)((double)*(float *)(param_2 + 0x1620) + param_1),
       *(float *)(param_2 + 0x1620) = fVar1, fVar10 < fVar1)) {
      if (cVar5 == '\0') {
        if (*(char *)(param_2 + 0x15e0) == '\0') goto LAB_823d1d5c;
LAB_823d1c28:
        uVar8 = *(unsigned int *)(param_2 + 0x15e4);
      }
      else {
LAB_823d1c7c:
        uVar8 = *(unsigned int *)(param_2 + 0x1604);
      }
      fn_823CEC40(param_2,uVar8);
      goto LAB_823d1de8;
    }
LAB_823d1d5c:
    if (((*(char *)(param_2 + 0x1540) == '\0') && (cVar2 == '\0')) ||
       (fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x1580)),
       *(float *)(param_2 + 0x1580) = fVar1, fVar1 <= fVar10)) {
LAB_823d1d94:
      cVar11 = *(char *)(param_2 + 0x1590);
      if ((cVar11 == '\0') && (cVar3 == '\0')) {
        return;
      }
      fVar1 = (float)((double)*(float *)(param_2 + 0x15d0) + param_1);
      *(float *)(param_2 + 0x15d0) = fVar1;
      if (fVar1 <= fVar10) {
        return;
      }
      if (cVar3 == '\0') {
joined_r0x823d1dc8:
        if (cVar11 == '\0') {
          return;
        }
        uVar8 = *(unsigned int *)(param_2 + 0x1594);
      }
      else {
LAB_823d1c90:
        uVar8 = *(unsigned int *)(param_2 + 0x15b4);
      }
      fn_823CE840(param_2,uVar8);
      goto LAB_823d1de8;
    }
    if (cVar2 == '\0') {
      if (*(char *)(param_2 + 0x1540) == '\0') goto LAB_823d1d94;
LAB_823d1c10:
      uVar12 = *(unsigned int *)(param_2 + 0x1544);
    }
    else {
LAB_823d1c6c:
      uVar12 = *(unsigned int *)(param_2 + 0x1564);
    }
LAB_823d1b94:
    fn_823CE4E0(param_2,uVar12);
  }
LAB_823d1de8:
  uVar8 = ltcg_pool_0_0f;
  *(unsigned char *)(param_2 + 0x1520) = 0;
  *(unsigned char *)(param_2 + 0x152c) = 0;
  *(unsigned int *)(param_2 + 0x1538) = uVar8;
  *(unsigned char *)(param_2 + 0x1540) = 0;
  *(unsigned int *)(param_2 + 0x1580) = uVar8;
  *(unsigned char *)(param_2 + 0x1560) = 0;
  *(unsigned int *)(param_2 + 0x15d0) = uVar8;
  *(unsigned char *)(param_2 + 0x1590) = 0;
  *(unsigned char *)(param_2 + 0x15b0) = 0;
  *(unsigned int *)(param_2 + 0x1670) = uVar8;
  *(unsigned char *)(param_2 + 0x1630) = 0;
  *(unsigned char *)(param_2 + 0x1650) = 0;
  *(unsigned char *)(param_2 + 0x1600) = 0;
  *(unsigned char *)(param_2 + 0x15e0) = 0;
  *(unsigned int *)(param_2 + 0x1620) = uVar8;
  return;
}

