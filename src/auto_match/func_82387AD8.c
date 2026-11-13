typedef unsigned char bool;
extern int fn_822315A0();
extern int fn_82262958();
extern int fn_82262A90();
extern int fn_82262CA0();
extern int fn_82262EB0();
extern int fn_822630E0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_831DCCF0;
extern unsigned int lbl_831DCD58;


void fn_82387AD8(double param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,
                  unsigned __int64 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  unsigned char *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  bool bVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  
  iVar1 = *(int *)(param_2 + 4);
  puVar3 = (&lbl_831DCCF0)[param_6];
  if (param_6 < 0x18) {
    uVar8 = *(unsigned int *)(&lbl_831DCD58 + param_6 * 4);
  }
  else {
    uVar8 = 6;
  }
  iVar2 = *(int *)(param_4 + 0x24);
  uVar9 = 0xffffffff821b42c0;
  bVar10 = iVar2 != 0;
  if (param_8 == 1) {
    uVar9 = 0xffffffff821b42c8;
  }
  else if (param_8 == 2) {
    uVar9 = 0xffffffff821b42d0;
  }
  else if (param_8 == 4) {
    uVar9 = 0xffffffff821b42d8;
  }
  if (uVar8 == 0) {
    uVar11 = 0;
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0xf0) == 0) {
        uVar11 = 1;
      }
      else {
        uVar11 = *(unsigned int *)(*(int *)(iVar2 + 0xf0) + 0x3c);
      }
    }
    fn_82262958(param_1,*(unsigned int *)(iVar1 + 0x5e0),puVar3,uVar11,0xffffffff821b0000,
                      *(unsigned int *)(param_4 + 0x2c),*(unsigned int *)(param_4 + 0x28),bVar10);
  }
  else if (uVar8 == 1) {
    fn_82262A90(param_1,(double)*(float *)(iVar1 + 0x5c4),*(unsigned int *)(iVar1 + 0x5e0),
                      *(unsigned int *)(iVar1 + 0x5e4),puVar3,*(unsigned int *)(iVar1 + 0x5cc),uVar9,
                      *(unsigned int *)(param_4 + 0x2c),*(unsigned int *)(param_4 + 0x28),bVar10);
  }
  else if (uVar8 < 3) {
    fn_82262CA0(param_1,(double)*(float *)(iVar1 + 0x5c4),*(unsigned int *)(iVar1 + 0x5e0),
                      *(unsigned int *)(iVar1 + 0x5e4),puVar3,
                      (&lbl_831DCCF0)[*(int *)(iVar1 + 0x570)],uVar9,
                      *(unsigned int *)(param_4 + 0x2c),*(unsigned int *)(param_4 + 0x28),bVar10);
  }
  else if (uVar8 == 3) {
    if (((param_6 != 10) && (param_6 != 0xb)) || (uVar7 = 1, param_1 < (double)lbl_8218E8E8)) {
      uVar7 = 0;
    }
    if ((param_6 != 0xb) || (uVar6 = 1, param_1 < (double)lbl_8218E8E8)) {
      uVar6 = 0;
    }
    fn_82262EB0(param_1,(double)*(float *)(iVar1 + 0x5c4),*(unsigned int *)(iVar1 + 0x5e0),
                      *(unsigned int *)(iVar1 + 0x5e4),puVar3,*param_3,uVar9,uVar6,uVar7,
                      *(unsigned int *)(param_4 + 0x2c));
  }
  else if (uVar8 < 5) {
    fn_822630E0((double)*(float *)(iVar1 + 0x5c4),*(unsigned int *)(iVar1 + 0x5e0),
                      *(unsigned int *)(iVar1 + 0x5e4),puVar3,uVar9,*(unsigned int *)(param_4 + 0x2c),
                      *(unsigned int *)(param_4 + 0x28),bVar10,*(unsigned int *)(param_5 + 0x2c));
  }
  *(int *)(iVar1 + 0x570) = param_6;
  puVar4 = (unsigned int *)(*param_3 + 0x20U & 0xfffffff0);
  uVar11 = puVar4[1];
  uVar12 = puVar4[2];
  uVar13 = puVar4[3];
  puVar5 = (unsigned int *)(iVar1 + 0x580U & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar11;
  puVar5[2] = uVar12;
  puVar5[3] = uVar13;
  iVar2 = *(int *)(iVar1 + 0x5e4);
  puVar4 = (unsigned int *)(*param_3 + 0x30U & 0xfffffff0);
  uVar11 = puVar4[1];
  uVar12 = puVar4[2];
  uVar13 = puVar4[3];
  puVar5 = (unsigned int *)(iVar1 + 0x590U & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar11;
  puVar5[2] = uVar12;
  puVar5[3] = uVar13;
  puVar4 = (unsigned int *)(*param_3 + 400U & 0xfffffff0);
  uVar11 = puVar4[1];
  uVar12 = puVar4[2];
  uVar13 = puVar4[3];
  puVar5 = (unsigned int *)(iVar1 + 0x5a0U & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar11;
  puVar5[2] = uVar12;
  puVar5[3] = uVar13;
  puVar4 = (unsigned int *)(param_4 + 0x80U & 0xfffffff0);
  uVar11 = *puVar4;
  uVar12 = puVar4[1];
  uVar13 = puVar4[2];
  uVar14 = puVar4[3];
  *(int *)(iVar1 + 0x5c0) = param_8;
  puVar4 = (unsigned int *)(iVar1 + 0x5b0U & 0xfffffff0);
  *puVar4 = uVar11;
  puVar4[1] = uVar12;
  puVar4[2] = uVar13;
  puVar4[3] = uVar14;
  *(float *)(iVar1 + 0x5c4) = (float)param_1;
  *(unsigned int *)(iVar1 + 0x5c8) = *(unsigned int *)(param_4 + 0x2c);
  *(unsigned int *)(iVar1 + 0x5cc) = *(unsigned int *)(param_4 + 0x28);
  *(unsigned int *)(iVar1 + 0x5d0) = (unsigned int)bVar10;
  *(int *)(iVar1 + 0x5e4) = iVar2 + 1;
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return;
}

