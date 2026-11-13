extern unsigned int *auStack_6c;
extern unsigned int fStack_54;
extern int fn_824B4288();
extern int fn_829C5988();
extern int fn_829C62A8();
extern int fn_82F4D720();
extern int fn_82F4DC20();
extern int fn_82F4E148();
extern int fn_82F4E330();
extern int fn_82F4E558();
extern int fn_82F58C50();
extern int fn_82F58D40();
extern int fn_8306E888();
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8209A96C;
extern unsigned int lbl_821655B4;
extern unsigned int lbl_821AAD20;
extern unsigned int *lbl_8326183C;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


void fn_82F4E770(double param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  float fVar3;
  unsigned __int64 in_r0;
  int iVar4;
  int iVar5;
  char *pcVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uStack_70;
  unsigned char auStack_6c [12];
  unsigned __int64 uStack_60;
  float fStack_54;
  
  if (*lbl_8326183C == '\0') {
    return;
  }
  fn_82F4D720();
  fn_82F4E558(param_1);
  fn_82F4E148();
  fn_82F58C50(param_1);
  fn_824B4288(lbl_8326183C + 0x2d90,0x20);
  uVar7 = 0;
  uVar8 = 0x2d90;
  dVar10 = (double)lbl_82006848;
  pcVar6 = lbl_8326183C;
  do {
    iVar4 = (int)in_r0;
    if (0x2daf < uVar8) break;
    if (*(int *)(pcVar6 + uVar7 + 0x15d0) == 2) {
      fn_82F58D40((double)(float)(param_1 * dVar10),*(unsigned int *)(pcVar6 + 0x2d8c),
                    pcVar6 + uVar7 + 0x15d0);
      uVar8 = uVar8 + 0x10;
      pcVar6 = lbl_8326183C;
    }
    iVar4 = (int)in_r0;
    uVar7 = uVar7 + 0x1c0;
  } while (uVar7 < 0xa80);
  if ((*(int *)(pcVar6 + 0x2c94) != 0) && (*(int *)(pcVar6 + 0x2c78) != 0x3e5)) {
    uVar7 = *(unsigned int *)(pcVar6 + 0x2d70);
    fn_824B4288(pcVar6 + 0x2c78,0x1c);
    if (*(int *)(lbl_8326183C + 0x2c94) == 1) {
      pcVar6 = lbl_8326183C;
      fn_82F4DC20();
      fn_829C62A8((double)*(float *)(pcVar6 + 0x2d74),(double)*(float *)(pcVar6 + 0x2d78),
                        (double)*(float *)(pcVar6 + 0x2d7c),uVar7 | 8);
      pcVar6 = lbl_8326183C;
      pcVar6[0x2c94] = '\0';
      pcVar6[0x2c95] = '\0';
      pcVar6[0x2c96] = '\0';
      pcVar6[0x2c97] = '\x02';
    }
    else {
      iVar5 = *(int *)(lbl_8326183C + 0x2db8);
      pcVar6 = lbl_8326183C;
      pcVar6[0x2c94] = '\0';
      pcVar6[0x2c95] = '\0';
      pcVar6[0x2c96] = '\0';
      pcVar6[0x2c97] = '\0';
      if (iVar5 == 0) {
        pcVar6[0x2db0] = '\0';
        pcVar6[0x2db1] = '\0';
        pcVar6[0x2db2] = '\0';
        pcVar6[0x2db3] = '\x01';
        pcVar6[0x2db8] = '\0';
        pcVar6[0x2db9] = '\0';
        pcVar6[0x2dba] = '\0';
        pcVar6[0x2dbb] = '\x01';
      }
    }
  }
  iVar5 = fn_829C5988(auStack_6c,&uStack_70);
  pcVar6 = lbl_8326183C;
  fVar3 = lbl_821AAD20;
  if (iVar5 < 0) {
    return;
  }
  if (uStack_70 != 0) {
    *(unsigned int *)(lbl_8326183C + 0x2d88) = uStack_70 & 2 | *(unsigned int *)(lbl_8326183C + 0x2d88);
    *(float *)(pcVar6 + 0x2d80) = fVar3;
    return;
  }
  iVar5 = *(int *)(lbl_8326183C + 0x2d88);
  puVar1 = (unsigned int *)((unsigned int)(lbl_8326183C + 0xb00) & 0xfffffff0);
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  puVar2 = (unsigned int *)((int)&uStack_60 + iVar4 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  dVar10 = (double)lbl_821AAD20;
  dVar11 = (double)fStack_54;
  if (iVar5 == 0) goto LAB_82f4e978;
  if (dVar11 == dVar10) {
    if (*(float *)(pcVar6 + 0x2d80) <= lbl_821655B4) goto LAB_82f4e978;
LAB_82f4e944:
    uStack_60 = (unsigned __int64)*(unsigned int *)(pcVar6 + 0x2d70);
    fn_82F4E330((double)uStack_60,(double)*(float *)(pcVar6 + 0x2d7c),(double)lbl_8209A96C);
  }
  else {
    dVar9 = (double)fn_8306E888((double)(float)((double)*(float *)(pcVar6 + 0x2d84) - dVar11));
    pcVar6 = lbl_8326183C;
    if ((double)lbl_82002C2C < dVar9) goto LAB_82f4e944;
  }
  pcVar6 = lbl_8326183C;
  pcVar6[0x2d88] = '\0';
  pcVar6[0x2d89] = '\0';
  pcVar6[0x2d8a] = '\0';
  pcVar6[0x2d8b] = '\0';
LAB_82f4e978:
  *(float *)(pcVar6 + 0x2d80) = (float)((double)*(float *)(pcVar6 + 0x2d80) + param_1);
  if (dVar11 != dVar10) {
    *(float *)(pcVar6 + 0x2d84) = (float)dVar11;
  }
  return;
}

