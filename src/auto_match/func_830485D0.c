extern unsigned int *auStack_60;
extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_8304D650();
extern int fn_8304DF58();
extern unsigned int lbl_831BC770;
extern unsigned int uStack_50;
extern unsigned int uStack_69;


void fn_830485D0(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned short uVar10;
  __int64 lVar9;
  unsigned char uStack_69;
  unsigned char auStack_60 [16];
  unsigned char uStack_50;
  
  puVar8 = (unsigned int *)(param_1 + 0x3c);
  iVar7 = 0x2d;
  if ((*(int *)(param_1 + 0x3c) == 0) && (*(char *)(param_1 + 0x40) == '\0')) {
    (**(int (***)())(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),auStack_60);
    uStack_69 = (unsigned char)(int)*(float *)(*(int *)(param_1 + 8) + 0xdc);
    uStack_50 = uStack_69;
    (**(int (***)())(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),auStack_60);
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x28) + 0x2c))
                      (*(int **)(param_1 + 0x28),param_1 + 0x34,puVar8,0);
    if (iVar3 == 0x2e) {
      param_2[0xd0] = 0x2e;
      return;
    }
    if (iVar3 == 2) goto LAB_830486a8;
    if (*puVar8 == 0) {
      if (*(char *)(param_1 + 0x40) == '\0') goto LAB_830486a8;
    }
    else {
      iVar3 = fn_8304DF58(param_1);
      if (iVar3 != 1) goto LAB_830486a8;
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  uVar4 = (unsigned __int64)(*(unsigned int *)(iVar3 + 0x24) >> 3) & 0x1f;
  trapWord(6,uVar4,0);
  uVar5 = *puVar8 / uVar4;
  if ((*(char *)(param_1 + 0x40) != '\0') && (uVar5 <= *(unsigned short *)(param_2 + 3))) {
    iVar7 = 0x11;
  }
  if ((*puVar8 == 0) && (iVar7 != 0x11)) {
LAB_830486a8:
    param_2[0xd0] = 2;
    return;
  }
  uVar6 = (unsigned int)uVar5;
  if (*(unsigned short *)(param_2 + 3) < uVar5) {
    uVar6 = (unsigned int)*(unsigned short *)(param_2 + 3);
  }
  uVar10 = (unsigned short)uVar6;
  if (*(short *)(param_1 + 0x60) == 0) {
    if (*(int *)(param_1 + 0x5c) != 0) {
      fn_82FA5190(lbl_831BC770);
      *(unsigned int *)(param_1 + 0x5c) = 0;
    }
    uVar1 = *(unsigned int *)(iVar3 + 0x24);
    uVar2 = *(unsigned int *)(param_1 + 0x38);
    uVar5 = (__int64)(int)(uVar6 & 0xffff) * (__int64)(int)uVar4;
    *(unsigned short *)(param_2 + 3) = uVar10;
    *(unsigned short *)((int)param_2 + 0xe) = uVar10;
    *param_2 = uVar2;
    param_2[1] = uVar1 >> 0xe;
    *(short *)(param_1 + 0x62) = (short)uVar5;
    if (((unsigned __int64)*puVar8 - (uVar5 & 0xffff) & 0xffffffff) < uVar4) {
      uVar5 = fn_82FA5060(lbl_831BC770,uVar4 << 10);
      *(int *)(param_1 + 0x5c) = (int)uVar5;
      if ((uVar5 & 0xffffffff) == 0) goto LAB_830486a8;
      *(unsigned short *)(param_1 + 0x60) = (short)*puVar8 - *(unsigned short *)(param_1 + 0x62);
      fn_82A1DDC0(uVar5,(unsigned __int64)*(unsigned short *)(param_1 + 0x62) +
                              (unsigned __int64)*(unsigned int *)(param_1 + 0x38));
      *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) + *(short *)(param_1 + 0x60);
    }
  }
  else {
    lVar9 = (__int64)(int)(uVar6 & 0xffff) * (__int64)(int)uVar4 -
            (unsigned __int64)*(unsigned short *)(param_1 + 0x60);
    fn_82A1DDC0((unsigned __int64)*(unsigned short *)(param_1 + 0x60) + (unsigned __int64)*(unsigned int *)(param_1 + 0x5c),
                      *(unsigned int *)(param_1 + 0x38),lVar9);
    uVar2 = *(unsigned int *)(param_1 + 0x5c);
    *(short *)(param_1 + 0x62) = (short)lVar9;
    *(unsigned short *)(param_1 + 0x60) = 0;
    uVar6 = *(unsigned int *)(iVar3 + 0x24);
    *(unsigned short *)(param_2 + 3) = uVar10;
    *param_2 = uVar2;
    *(unsigned short *)((int)param_2 + 0xe) = uVar10;
    param_2[1] = uVar6 >> 0xe;
  }
  lVar9 = 0;
  if ((*(char *)(param_1 + 0x58) != '\0') &&
     (*(unsigned int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x48) + (unsigned int)*(unsigned short *)((int)param_2 + 0xe))
     ) {
    lVar9 = 1;
    *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0x58) + -1;
  }
  fn_8304D650(param_1,param_2,*(unsigned int *)(param_1 + 0x48),lVar9);
  if ((*(unsigned int *)(*(int *)(param_1 + 8) + 8) & 0x10000) != 0) {
    trapWord(6,uVar4,0);
    param_2[9] = *(unsigned int *)(iVar3 + 0x20);
    param_2[6] = *(unsigned int *)(param_1 + 0x48);
    param_2[8] = (int)(*(unsigned int *)(param_1 + 0x2c) / uVar4);
  }
  if (lVar9 != 0) {
    *(unsigned int *)(param_1 + 0x48) =
         (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x24)) +
         (unsigned int)*(unsigned short *)((int)param_2 + 0xe) + *(int *)(param_1 + 0x48);
    param_2[0xd0] = iVar7;
    return;
  }
  *(unsigned int *)(param_1 + 0x48) = (unsigned int)*(unsigned short *)((int)param_2 + 0xe) + *(int *)(param_1 + 0x48);
  param_2[0xd0] = iVar7;
  return;
}

