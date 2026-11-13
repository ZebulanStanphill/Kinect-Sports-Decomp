extern int fn_824F1588();
extern int fn_824F1E50();
extern int fn_82522D98();
extern int fn_82576400();
extern int fn_82576478();
extern int fn_82577628();
extern int fn_8265C9E0();
extern int fn_82F64C68();
extern unsigned int lbl_82191164;
extern unsigned int lbl_82191168;
extern unsigned int lbl_821C1EA8;
extern unsigned int lbl_821C1EB8;


unsigned int *
fn_824E6468(double param_1,unsigned __int64 param_2,int param_3,char *param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned char param_7,unsigned char param_8,unsigned __int64 param_9)

{
  char cVar1;
  unsigned int *puVar2;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned __int64 uVar3;
  unsigned int *puVar8;
  char *pcVar9;
  unsigned char **ppuVar10;
  int *piVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  
  ppuVar10 = &lbl_82191164;
  uVar12 = 0;
  while (iVar4 = fn_82F64C68(*ppuVar10,param_4), iVar4 == 0) {
    uVar12 = uVar12 + 1;
    ppuVar10 = ppuVar10 + 2;
    if (3 < uVar12) {
      return (unsigned int *)0x0;
    }
  }
  pcVar9 = (&lbl_82191164)[uVar12 * 2];
  uVar12 = (&lbl_82191168)[uVar12 * 2];
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  do {
    cVar1 = *param_4;
    param_4 = param_4 + 1;
  } while (cVar1 != '\0');
  if (uVar12 == 4) {
    return (unsigned int *)0x0;
  }
  iVar4 = *(int *)(param_3 + 0xd54);
  puVar2 = *(unsigned int **)(param_3 + 0x93c);
  piVar11 = (int *)(iVar4 + 0x20);
  puVar5 = (unsigned int *)fn_82577628(param_1,param_2,param_6,param_9);
  *(unsigned char *)(puVar5 + 0x69) = param_7;
  *(unsigned char *)((int)puVar5 + 0x1a5) = param_8;
  *(unsigned char *)((int)puVar5 + 0x1a6) = 0;
  puVar5[0x6d] = 0;
  puVar5[0x6f] = puVar2;
  if (uVar12 == 0) {
    if (*piVar11 == 0) {
      uVar3 = fn_8265C9E0(0x7c);
      if ((uVar3 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_824F1E50(uVar3,puVar2);
      }
      *piVar11 = iVar4;
      fn_82576400(puVar2);
    }
    puVar5[0x6b] = *piVar11;
    piVar11 = (int *)*piVar11;
  }
  else {
    if (uVar12 == 1) {
      if (*piVar11 == 0) {
        uVar3 = fn_8265C9E0(0x7c);
        if ((uVar3 & 0xffffffff) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_824F1E50(uVar3,puVar2);
        }
        *piVar11 = iVar4;
        fn_82576400(puVar2);
      }
      puVar5[0x6b] = *piVar11;
      iVar4 = *piVar11;
      puVar6 = (unsigned int *)fn_8265C9E0(0x30);
      if (puVar6 == (unsigned int *)0x0) {
        puVar6 = (unsigned int *)0x0;
      }
      else {
        puVar6[8] = (float)param_1;
        puVar6[2] = (float)param_1;
        puVar6[1] = puVar5;
        *puVar6 = &lbl_821C1EA8;
        puVar8 = (unsigned int *)((unsigned int)(puVar5 + 0x28) & 0xfffffff0);
        uVar7 = *puVar8;
        uVar13 = puVar8[1];
        uVar14 = puVar8[2];
        uVar15 = puVar8[3];
        puVar6[9] = iVar4;
        puVar8 = (unsigned int *)((unsigned int)(puVar6 + 4) & 0xfffffff0);
        *puVar8 = uVar7;
        puVar8[1] = uVar13;
        puVar8[2] = uVar14;
        puVar8[3] = uVar15;
      }
      puVar8 = (unsigned int *)fn_82522D98(8);
      *puVar8 = puVar6;
      puVar8[1] = *(unsigned int *)(iVar4 + 0x10);
      *(unsigned int **)(iVar4 + 0x10) = puVar8;
      puVar5[0x74] = puVar6;
      puVar5[0x6c] = puVar6;
      goto LAB_824e6638;
    }
    if (uVar12 < 3) {
      if (*(int *)(iVar4 + 0x2c) == 0) {
        uVar3 = fn_8265C9E0(0x1c);
        if ((uVar3 & 0xffffffff) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = fn_824F1588(uVar3,puVar2);
        }
        *(unsigned int *)(iVar4 + 0x2c) = uVar7;
        fn_82576400(puVar2);
      }
      puVar5[0x6b] = *(unsigned int *)(iVar4 + 0x2c);
      piVar11 = *(int **)(iVar4 + 0x2c);
    }
    else {
      if (uVar12 != 3) {
        return (unsigned int *)0x0;
      }
      if (*(int *)(iVar4 + 0x30) == 0) {
        puVar6 = (unsigned int *)fn_8265C9E0(0x10);
        if (puVar6 == (unsigned int *)0x0) {
          puVar6 = (unsigned int *)0x0;
        }
        else {
          puVar6[1] = puVar2;
          *puVar6 = &lbl_821C1EB8;
          if (puVar2 == (unsigned int *)0x0) {
            puVar6[2] = 0;
          }
          else {
            puVar6[2] = *puVar2;
          }
          puVar6[3] = 0;
        }
        *(unsigned int **)(iVar4 + 0x30) = puVar6;
        fn_82576478(puVar2);
      }
      puVar5[0x6b] = *(unsigned int *)(iVar4 + 0x30);
      piVar11 = *(int **)(iVar4 + 0x30);
    }
  }
  uVar7 = (**(int (***)())(*piVar11 + 4))(param_1,piVar11,0,puVar5);
  puVar5[0x74] = uVar7;
  puVar5[0x6c] = uVar7;
LAB_824e6638:
  uVar7 = puVar2[0x2b];
  piVar11 = puVar2 + 0x1a;
  if (piVar11 != (int *)0x0) {
    if (*piVar11 == 0) {
      *piVar11 = (int)puVar5;
    }
    else {
      *(unsigned int **)(puVar2[0x1b] + 0x1e4) = puVar5;
    }
    puVar2[0x1b] = puVar5;
  }
  *puVar5 = uVar7;
  puVar2[0x2b] = puVar2[0x2b] + 1;
  return puVar5;
}

