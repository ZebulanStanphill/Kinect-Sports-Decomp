extern unsigned int *auStack_a0;
extern int fn_82A1DDC0();
extern int fn_82FEC7F0();
extern int fn_8304D650();
extern int fn_8304DF58();
extern int fn_8304E748();
extern unsigned int uStack_90;
extern unsigned int uStack_a9;


void fn_8304BBF0(int param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned short uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  int iVar12;
  __int64 lVar11;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned char uStack_a9;
  unsigned char auStack_a0 [16];
  unsigned char uStack_90;
  
  puVar9 = (unsigned int *)(param_1 + 0x3c);
  uVar7 = 0x2d;
  if ((*(int *)(param_1 + 0x3c) == 0) && (*(char *)(param_1 + 0x40) == '\0')) {
    (**(int (***)())(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),auStack_a0);
    uStack_a9 = (unsigned char)(int)*(float *)(*(int *)(param_1 + 8) + 0xdc);
    uStack_90 = uStack_a9;
    (**(int (***)())(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),auStack_a0);
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x28) + 0x2c))
                      (*(int **)(param_1 + 0x28),param_1 + 0x34,puVar9,0);
    if (iVar3 == 0x2e) {
      param_2[0xd0] = 0x2e;
      return;
    }
    if (iVar3 == 2) goto LAB_8304bcc8;
    if (*puVar9 == 0) {
      if (*(char *)(param_1 + 0x40) == '\0') goto LAB_8304bcc8;
    }
    else {
      iVar3 = fn_8304DF58(param_1);
      if (iVar3 != 1) goto LAB_8304bcc8;
    }
  }
  uVar10 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  uVar5 = *(unsigned int *)(iVar3 + 0x24);
  uVar8 = (unsigned __int64)(uVar5 >> 3) & 0x1f;
  uVar5 = uVar5 >> 0xe;
  for (uVar6 = uVar5; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
    uVar10 = uVar10 + 1;
  }
  if ((*(char *)(param_1 + 0x40) != '\0') &&
     (trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x5c),0),
     ((unsigned __int64)*puVar9 / (unsigned __int64)*(unsigned int *)(param_1 + 0x5c) & 0x3ffffff) << 6 <=
     (unsigned __int64)*(unsigned short *)(param_2 + 3))) {
    uVar7 = 0x11;
  }
  if (*puVar9 == 0) {
    *(unsigned short *)((int)param_2 + 0xe) = 0;
    param_2[0xd0] = 2;
    return;
  }
  uVar13 = 0x400;
  uVar2 = fn_82FEC7F0(uVar8 << 10);
  *(int *)(param_1 + 0x60) = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    uVar6 = (unsigned int)*(unsigned short *)(param_1 + 0x13c);
    if (uVar6 != 0) {
      fn_82A1DDC0(uVar6 + param_1 + 100,*(unsigned int *)(param_1 + 0x38),
                        *(int *)(param_1 + 0x5c) - uVar6);
      if ((uVar10 & 0xffffffff) != 0) {
        iVar12 = param_1 + 100;
        uVar13 = uVar2;
        uVar14 = uVar10;
        do {
          fn_8304E748(iVar12,uVar13,1,*(unsigned int *)(param_1 + 0x5c),uVar10);
          uVar14 = uVar14 - 1;
          uVar13 = uVar13 + 2;
          iVar12 = iVar12 + 0x24;
        } while (uVar14 != 0);
      }
      uVar1 = *(unsigned short *)(param_1 + 0x13c);
      uVar2 = uVar2 + uVar8 * 0x40;
      uVar13 = 0x3c0;
      *(unsigned short *)(param_1 + 0x13c) = 0;
      *puVar9 = ((unsigned int)uVar1 - *(int *)(param_1 + 0x5c)) + *puVar9;
      *(unsigned int *)(param_1 + 0x38) =
           (*(int *)(param_1 + 0x5c) - (unsigned int)uVar1) + *(int *)(param_1 + 0x38);
    }
    trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x5c),0);
    uVar14 = (unsigned __int64)*puVar9 / (unsigned __int64)*(unsigned int *)(param_1 + 0x5c);
    if (uVar13 >> 6 <= uVar14) {
      uVar14 = uVar13 >> 6;
    }
    if ((uVar10 & 0xffffffff) != 0) {
      lVar11 = 0;
      uVar13 = uVar2;
      uVar15 = uVar10;
      do {
        fn_8304E748((unsigned __int64)*(unsigned int *)(param_1 + 0x38) + lVar11,uVar13,uVar14,
                      *(unsigned int *)(param_1 + 0x5c),uVar10);
        uVar15 = uVar15 - 1;
        uVar13 = uVar13 + 2;
        lVar11 = lVar11 + 0x24;
      } while (uVar15 != 0);
    }
    uVar6 = *(unsigned int *)(param_1 + 0x60);
    param_2[1] = uVar5;
    *param_2 = uVar6;
    trapWord(6,uVar8,0);
    uVar4 = (unsigned short)
            ((((__int64)(int)uVar14 * (__int64)(int)(uVar8 * 0x40) - (unsigned __int64)uVar6) + uVar2 &
             0xffffffff) / uVar8);
    *(unsigned short *)((int)param_2 + 0xe) = uVar4;
    *(unsigned short *)(param_2 + 3) = uVar4;
    iVar12 = *(unsigned int *)(param_1 + 0x5c) * (int)uVar14;
    uVar5 = *puVar9 - iVar12;
    *puVar9 = uVar5;
    *(int *)(param_1 + 0x38) = iVar12 + *(int *)(param_1 + 0x38);
    if (*(short *)((int)param_2 + 0xe) == 0) {
      uVar7 = 0x2e;
    }
    if (uVar5 < *(unsigned int *)(param_1 + 0x5c)) {
      *(short *)(param_1 + 0x13c) = (short)uVar5;
      fn_82A1DDC0(param_1 + 100);
      *puVar9 = 0;
      *(unsigned int *)(param_1 + 0x38) = (unsigned int)*(unsigned short *)(param_1 + 0x13c) + *(int *)(param_1 + 0x38);
      (**(int (***)())(**(int **)(param_1 + 0x28) + 0x30))();
    }
    lVar11 = 0;
    if ((*(char *)(param_1 + 0x58) != '\0') &&
       (*(unsigned int *)(param_1 + 0x24) <=
        *(int *)(param_1 + 0x48) + (unsigned int)*(unsigned short *)((int)param_2 + 0xe))) {
      lVar11 = 1;
      *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0x58) + -1;
    }
    fn_8304D650(param_1,param_2,*(unsigned int *)(param_1 + 0x48),lVar11);
    if ((*(unsigned int *)(*(int *)(param_1 + 8) + 8) & 0x10000) != 0) {
      param_2[9] = *(unsigned int *)(iVar3 + 0x20);
      param_2[6] = *(unsigned int *)(param_1 + 0x48);
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x5c),0);
      param_2[8] = (unsigned int)((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) /
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x5c) << 6);
    }
    if (lVar11 != 0) {
      *(unsigned int *)(param_1 + 0x48) =
           (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x24)) +
           (unsigned int)*(unsigned short *)((int)param_2 + 0xe) + *(int *)(param_1 + 0x48);
      param_2[0xd0] = uVar7;
      return;
    }
    *(unsigned int *)(param_1 + 0x48) = (unsigned int)*(unsigned short *)((int)param_2 + 0xe) + *(int *)(param_1 + 0x48);
    param_2[0xd0] = uVar7;
    return;
  }
LAB_8304bcc8:
  param_2[0xd0] = 2;
  return;
}

