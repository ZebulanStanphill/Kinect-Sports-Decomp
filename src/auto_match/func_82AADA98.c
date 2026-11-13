extern int fn_82A29A38();
extern int fn_82AAC9C0();
extern int fn_82AACBB8();
extern int fn_82AACD58();
extern int fn_82AAD090();


void fn_82AADA98(int *param_1,unsigned int param_2,unsigned __int64 param_3,int param_4,unsigned int *param_5)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar11;
  unsigned __int64 uVar10;
  unsigned int *puVar12;
  unsigned int *apuStack_60 [24];
  
  if (param_2 < 0xffff0200) {
    fn_82A29A38();
  }
  iVar2 = *param_1;
  puVar11 = (unsigned int *)*param_5;
  puVar8 = (unsigned int *)(iVar2 + 4);
  uVar1 = *(unsigned short *)(iVar2 + 2);
  apuStack_60[0] = puVar11;
  if (uVar1 != 0x1c) {
LAB_82aadb08:
    if (0x60 < uVar1) goto LAB_82aadf38;
    if (uVar1 != 0x60) goto LAB_82aadb14;
    uVar4 = *puVar8;
    uVar10 = (unsigned __int64)uVar4;
    if (((unsigned __int64)(uVar4 >> 0x14) & 0x700 | uVar10 & 0x1800) != 0x1300) {
      fn_82A29A38();
    }
    if ((uVar4 & 0x7ff) != 0) {
      fn_82A29A38();
    }
code_r0x82aadf2c:
    puVar8 = (unsigned int *)(iVar2 + 8);
    fn_82AAC9C0(uVar10,param_3,apuStack_60);
    puVar12 = apuStack_60[0];
    goto LAB_82aadf3c;
  }
  if (*(int *)(param_4 + 8) != 0) {
    param_3 = 0x53;
    goto LAB_82aadb08;
  }
  param_3 = 0x2b;
  *(unsigned int *)(param_4 + 8) = 1;
LAB_82aadb14:
  uVar4 = (unsigned int)param_3;
  switch(uVar1) {
  case 0x19:
    *puVar11 = uVar4 & 0xffff;
    uVar4 = *puVar8;
    puVar8 = (unsigned int *)(iVar2 + 8);
    uVar3 = uVar4 & 0x7ff;
    if ((uVar4 >> 0x14 & 0x700 | uVar4 & 0x1800) != 0x1200) {
      fn_82A29A38();
    }
    if (0x7ff < uVar3) {
      fn_82A29A38();
    }
    if ((0xf < uVar3) && (param_2 < 0xffff0300)) {
      fn_82A29A38();
    }
    puVar11[1] = uVar3;
    puVar12 = puVar11 + 2;
    goto LAB_82aadf3c;
  case 0x1a:
    uVar4 = *puVar8;
    uVar3 = *(unsigned int *)(iVar2 + 8);
    puVar8 = (unsigned int *)(iVar2 + 0xc);
    uVar10 = ((unsigned __int64)(uVar3 >> 0x14) & 0x700 | (unsigned __int64)uVar3 & 0x1800) >> 8;
    if ((uVar10 != 0xe) && (uVar10 != 0x13)) {
      fn_82A29A38();
    }
    if ((uVar3 & 0x2000) == 0x2000) {
      fn_82A29A38();
    }
    uVar5 = uVar4 & 0x7ff;
    if ((uVar4 >> 0x14 & 0x700 | uVar4 & 0x1800) != 0x1200) {
      fn_82A29A38();
    }
    if (0x7ff < uVar5) {
      fn_82A29A38();
    }
    if ((0xf < uVar5) && (param_2 < 0xffff0300)) {
      fn_82A29A38();
    }
    if (uVar10 == 0x13) {
      fn_82AAC9C0((unsigned __int64)uVar3,0x34,apuStack_60);
      *apuStack_60[0] = 8;
      apuStack_60[0][1] = uVar5;
      apuStack_60[0][2] = 0x29;
      puVar12 = apuStack_60[0] + 3;
      goto LAB_82aadf3c;
    }
    if ((uVar3 & 0xf000000) == 0xd000000) {
      *puVar11 = 0x35;
      puVar11[1] = uVar3 & 0x7ff;
      puVar11[2] = 0x27;
      puVar11[3] = 8;
      puVar11[4] = uVar5;
      puVar11 = puVar11 + 5;
      *puVar11 = 0x29;
      goto code_r0x82aadcc8;
    }
    *puVar11 = 9;
    puVar11 = puVar11 + 1;
    *puVar11 = uVar3 & 0x7ff;
    break;
  case 0x1b:
    uVar3 = *puVar8;
    puVar8 = (unsigned int *)(iVar2 + 8);
    if ((uVar3 >> 0x14 & 0x700 | uVar3 & 0x1800) != 0xf00) {
      fn_82A29A38();
    }
    if ((uVar3 & 0x7ff) != 0) {
      fn_82A29A38();
    }
  case 0x26:
    uVar3 = *puVar8;
    puVar8 = puVar8 + 1;
    if ((uVar3 >> 0x14 & 0x700 | uVar3 & 0x1800) != 0x700) {
      fn_82A29A38();
    }
    if (0xf < (uVar3 & 0x7ff)) {
      fn_82A29A38();
    }
    apuStack_60[0] = puVar11 + 1;
    *puVar11 = uVar4 & 0xffff;
    fn_82AAD090(uVar3,0,0,param_4,apuStack_60);
    puVar12 = apuStack_60[0];
    goto LAB_82aadf3c;
  case 0x1c:
  case 0x1d:
  case 0x27:
  case 0x2c:
    goto code_r0x82aadd64;
  case 0x1e:
    uVar3 = *puVar8;
    puVar8 = (unsigned int *)(iVar2 + 8);
    uVar5 = uVar3 & 0x7ff;
    if ((uVar3 >> 0x14 & 0x700 | uVar3 & 0x1800) != 0x1200) {
      fn_82A29A38();
    }
    if (0x7ff < uVar5) {
      fn_82A29A38();
    }
    if ((0xf < uVar5) && (param_2 < 0xffff0300)) {
      fn_82A29A38();
    }
    *puVar11 = uVar4 & 0xffff;
    break;
  default:
LAB_82aadf38:
    fn_82A29A38();
    puVar12 = puVar11;
    goto LAB_82aadf3c;
  case 0x28:
    *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + 1;
    uVar4 = *puVar8;
    uVar10 = (unsigned __int64)uVar4;
    puVar8 = (unsigned int *)(iVar2 + 8);
    if ((uVar4 & 0x2000) == 0x2000) {
      fn_82A29A38();
    }
    uVar9 = ((unsigned __int64)(uVar4 >> 0x14) & 0x700 | uVar10 & 0x1800) >> 8;
    if (uVar9 == 0xe) {
code_r0x82aade9c:
      if (uVar9 != 0x13) {
        *puVar11 = 0x35;
        puVar11[1] = uVar4 & 0x7ff;
        puVar12 = puVar11 + 2;
        if ((uVar4 & 0xf000000) == 0xd000000) {
          puVar11[2] = 0x27;
          puVar7 = (unsigned int *)fn_82AACD58(param_4 + 0xc,*(unsigned int *)(param_4 + 0x18));
          *puVar7 = 1;
          puVar7[1] = uVar4 & 0x7ff;
          puVar12 = puVar11 + 3;
        }
        goto LAB_82aadf3c;
      }
    }
    else if (uVar9 != 0x13) {
      fn_82A29A38();
      goto code_r0x82aade9c;
    }
    param_3 = 0x34;
    goto code_r0x82aadf2c;
  case 0x2a:
    if (*(int *)(param_4 + 0x18) == 0) {
      fn_82A29A38();
    }
    piVar6 = (int *)fn_82AACBB8(param_4 + 0xc,*(unsigned int *)(param_4 + 0x18));
    if ((piVar6 == (int *)0x0) || (*piVar6 == 0)) goto code_r0x82aadd64;
    *puVar11 = 0x29;
    puVar11[1] = 0x35;
    puVar11 = puVar11 + 2;
    *puVar11 = (unsigned int)*(unsigned short *)((int)piVar6 + 6);
    goto code_r0x82aadcc8;
  case 0x2b:
    if (*(int *)(param_4 + 0x18) == 0) {
      fn_82A29A38();
    }
    piVar6 = (int *)fn_82AACBB8(param_4 + 0xc,*(unsigned int *)(param_4 + 0x18));
    if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
      *piVar6 = 0;
      piVar6[1] = 0;
    }
    *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + -1;
    goto code_r0x82aadd64;
  }
  puVar11 = puVar11 + 1;
  *puVar11 = uVar5;
code_r0x82aadcc8:
  puVar12 = puVar11 + 1;
LAB_82aadf3c:
  *param_1 = (int)puVar8;
  *param_5 = puVar12;
  return;
code_r0x82aadd64:
  *puVar11 = uVar4 & 0xffff;
  goto code_r0x82aadcc8;
}

