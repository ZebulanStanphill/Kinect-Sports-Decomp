extern int fn_82F65FE0();
extern int memcpy();
extern int fn_82F9AD50();
extern int fn_82F9AEA0();
extern int fn_82F9AF38();
extern int fn_82F9B2A0();
extern int fn_82F9B7D0();
extern int fn_82F9BFA0();
extern int fn_82F9CA10();
extern int fn_82F9CDB8();
extern int fn_82F9D340();
extern int fn_82F9DB58();
extern int fn_82F9E610();
extern int fn_82F9EA40();
extern int fn_82F9F028();
extern int fn_82F9F8B0();
extern int fn_82FA0388();
extern int fn_82FA07D0();
extern int fn_82FA0E00();
extern int fn_82FA16C0();
extern int fn_82FA21A0();
extern int fn_82FA25F0();
extern int fn_82FA2C08();
extern int fn_82FA3520();
extern unsigned int iStack_4c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_8216C88C;
extern unsigned int lbl_8216CB28;


unsigned __int64 fn_82FA4128(int param_1,int *param_2,int *param_3,__int64 param_4,unsigned int *param_5)

{
  unsigned char uVar3;
  int iVar1;
  int iVar2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int (**pcVar6)();
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  int *piVar11;
  int *piVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iStack_4c;
  
  *(unsigned int *)(param_1 + 0x214) = *param_5;
  uVar3 = (**(int (***)())(*param_3 + 4))(param_3);
  *(unsigned char *)(param_1 + 0x220) = uVar3;
  *(int *)(param_1 + 8) = (int)param_4;
  memcpy((unsigned int *)(param_1 + 0xc),param_4 + 4,0x60);
  uVar9 = 0;
  if ((*(int *)(param_1 + 0x28) == 0) && (uVar7 = 0, *(int *)(param_1 + 0x14) != 0)) {
    puVar4 = (unsigned int *)(param_1 + 0x28);
    puVar5 = (unsigned int *)&lbl_8216C88C;
    do {
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
    } while (uVar7 < *(unsigned int *)(param_1 + 0x14));
  }
  uVar7 = (unsigned int)param_5[1] >> 0xe;
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar7 = uVar7 & 0x3fff7;
  }
  iVar1 = 0;
  for (uVar8 = uVar7; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
    iVar1 = iVar1 + 1;
  }
  *(int *)(param_1 + 0x21c) = iVar1;
  if (uVar7 < 0x38) {
    if (uVar7 == 0x37) {
      switch(*(unsigned int *)(param_1 + 0x14)) {
      case 4:
        pcVar6 = fn_82F9E610;
        break;
      default:
        goto switchD_82fa4248_caseD_5;
      case 8:
        pcVar6 = fn_82F9EA40;
        break;
      case 0xc:
        pcVar6 = fn_82F9F028;
        break;
      case 0x10:
        pcVar6 = fn_82F9F8B0;
      }
    }
    else if (uVar7 == 3) {
      switch(*(unsigned int *)(param_1 + 0x14)) {
      case 4:
        pcVar6 = fn_82F9CA10;
        break;
      default:
        goto switchD_82fa4248_caseD_5;
      case 8:
        pcVar6 = fn_82F9CDB8;
        break;
      case 0xc:
        pcVar6 = fn_82F9D340;
        break;
      case 0x10:
        pcVar6 = fn_82F9DB58;
      }
    }
    else {
      if (uVar7 != 4) goto LAB_82fa43d0;
      switch(*(unsigned int *)(param_1 + 0x14)) {
      case 4:
        pcVar6 = fn_82F9AF38;
        break;
      default:
        goto switchD_82fa4248_caseD_5;
      case 8:
        pcVar6 = fn_82F9B2A0;
        break;
      case 0xc:
        pcVar6 = fn_82F9B7D0;
        break;
      case 0x10:
        pcVar6 = fn_82F9BFA0;
      }
    }
  }
  else if (uVar7 == 0x3f) {
    switch(*(unsigned int *)(param_1 + 0x14)) {
    case 4:
      pcVar6 = fn_82FA0388;
      break;
    default:
      goto switchD_82fa4248_caseD_5;
    case 8:
      pcVar6 = fn_82FA07D0;
      break;
    case 0xc:
      pcVar6 = fn_82FA0E00;
      break;
    case 0x10:
      pcVar6 = fn_82FA16C0;
    }
  }
  else {
LAB_82fa43d0:
    switch(*(unsigned int *)(param_1 + 0x14)) {
    case 4:
      pcVar6 = fn_82FA21A0;
      break;
    default:
      goto switchD_82fa4248_caseD_5;
    case 8:
      pcVar6 = fn_82FA25F0;
      break;
    case 0xc:
      pcVar6 = fn_82FA2C08;
      break;
    case 0x10:
      pcVar6 = fn_82FA3520;
    }
  }
  *(int (***)())(param_1 + 4) = pcVar6;
switchD_82fa4248_caseD_5:
  iStack_4c = (int)(__int64)(*(float *)(param_1 + 0x20) * (float)*(unsigned int *)(param_1 + 0x214));
  *(int *)(param_1 + 0x80) = iStack_4c;
  if (iStack_4c != 0) {
    iVar1 = (**(int (***)())(*param_2 + 4))(param_2,iStack_4c << 2);
    *(int *)(param_1 + 0x74) = iVar1;
    if (iVar1 == 0) {
      return 0x34;
    }
    *(int *)(param_1 + 0x78) = iVar1;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x80) * 4 + iVar1;
  }
  uVar7 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar5 = (unsigned int *)(param_1 + 0x90);
    dVar16 = (double)lbl_82006848;
    do {
      *puVar5 = (int)(__int64)
                     ((float)((double)(float)puVar5[-0x19] * dVar16) *
                     (float)*(unsigned int *)(param_1 + 0x214));
      fn_82F9AEA0(param_1,puVar5);
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 < *(unsigned int *)(param_1 + 0x14));
  }
  fn_82F65FE0(param_1 + 0x90,*(unsigned int *)(param_1 + 0x14),4,0xffffffff82add210);
  fn_82F9AD50(param_1);
  *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0xc);
  *(unsigned char *)(param_1 + 0x221) = 0;
  *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x10);
  dVar16 = lbl_82005758;
  *(unsigned int *)(param_1 + 0x218) = 0;
  dVar15 = dVar16 / (double)*(float *)(param_1 + 0x10);
  dVar14 = (dVar16 - dVar15) / (dVar15 + dVar16);
  dVar13 = dVar16 - dVar14;
  dVar15 = lbl_8200E890 / dVar13;
  *(float *)(param_1 + 0x84) = (float)(dVar16 / dVar13);
  *(float *)(param_1 + 0x88) = (float)(dVar15 * dVar14);
  if ((*(unsigned int *)(param_1 + 0x14) & 0xfffffffc) != 0) {
    piVar11 = (int *)(param_1 + 0x110);
    piVar12 = (int *)(param_1 + 0xcc);
    do {
      uVar10 = (unsigned __int64)(unsigned int)piVar12[-0xc];
      iVar1 = piVar12[-0xc] * 0x10;
      iVar2 = (**(int (***)())(*param_2 + 4))(param_2,iVar1);
      *piVar11 = iVar2;
      if (iVar2 == 0) {
        return 0x34;
      }
      piVar11[4] = iVar2;
      uVar9 = uVar9 + 1;
      piVar11[8] = iVar1 + iVar2;
      piVar12[1] = (int)((uVar10 - (unsigned int)piVar12[-0xf] & 0xffffffff) << 4) + iVar2;
      piVar12[2] = (int)((uVar10 - (unsigned int)piVar12[-0xe] & 0xffffffff) << 4) + *piVar11 + 4;
      piVar12[3] = (int)((uVar10 - (unsigned int)piVar12[-0xd] & 0xffffffff) << 4) + *piVar11 + 8;
      piVar12 = piVar12 + 4;
      *piVar12 = *piVar11 + 0xc;
      piVar11 = piVar11 + 1;
    } while (uVar9 < *(unsigned int *)(param_1 + 0x14) >> 2);
  }
  *(unsigned int *)(param_1 + 0x20c) = *(unsigned int *)(param_1 + 0x18);
  *(unsigned int *)(param_1 + 0x210) = *(unsigned int *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x208) = lbl_82002AE0 - lbl_8216CB28 / (float)*(unsigned int *)(param_1 + 0x214);
  return 1;
}

