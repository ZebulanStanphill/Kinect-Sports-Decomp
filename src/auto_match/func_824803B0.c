typedef unsigned char bool;
extern int fn_8225C590();
extern int fn_8225F160();
extern unsigned int lbl_821BD7A8;
extern unsigned int lbl_821BD814;
extern unsigned int lbl_821BD81C;


unsigned __int64 fn_824803B0(int param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  unsigned char *pbVar8;
  unsigned char bVar10;
  unsigned int uVar9;
  char cVar11;
  unsigned char bVar13;
  unsigned int uVar12;
  char cVar14;
  unsigned char *pbVar15;
  unsigned __int64 uVar16;
  
  uVar16 = 0;
  pcVar2 = strstr((char *)(*(int *)(param_1 + 0x48) + 0x234),"_mini");
  pcVar3 = strstr((char *)(*(int *)(param_1 + 0x48) + 0x234),"_main");
  pcVar4 = strstr((char *)(*(int *)(param_1 + 0x48) + 0x234),"athletics");
  pcVar5 = strstr((char *)(*(int *)(param_1 + 0x48) + 0x34),"party");
  iVar6 = fn_8225F160();
  *(unsigned int *)(iVar6 + 0x30) = 0;
  iVar6 = fn_8225F160();
  iVar6 = *(int *)(iVar6 + 0x5c);
  iVar7 = fn_8225C590();
  iVar7 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
  if (iVar7 <= iVar6) {
    iVar6 = iVar7;
  }
  iVar7 = fn_8225F160();
  *(int *)(iVar7 + 0x5c) = iVar6;
  if (pcVar5 != pcVar5 + ((pcVar5 == (char *)0x0) - 1)) {
    iVar6 = *(int *)(param_1 + 0x48);
    bVar10 = 0x74;
    pbVar15 = (unsigned char *)(iVar6 + 0x334);
    bVar13 = *pbVar15;
    if (bVar13 == 0x74) {
      bVar13 = 0x74;
      pbVar8 = pbVar15;
      do {
        pbVar8 = pbVar8 + 1;
        if (bVar13 == 0) goto LAB_82480970;
        bVar10 = pbVar8[(int)"turntaking" - (int)pbVar15];
        bVar13 = *pbVar8;
      } while (bVar13 == bVar10);
    }
    if (bVar13 != bVar10) {
      bVar13 = *pbVar15;
      uVar9 = 0x73;
      if (bVar13 == 0x73) {
        uVar12 = 0x73;
        pbVar8 = pbVar15;
        do {
          pbVar8 = pbVar8 + 1;
          if (uVar12 == 0) {
            iVar7 = 0;
            goto LAB_82480524;
          }
          uVar9 = (unsigned int)pbVar8[(int)&lbl_821BD814 - (int)pbVar15];
          bVar13 = *pbVar8;
          uVar12 = (unsigned int)bVar13;
        } while (uVar12 == uVar9);
      }
      iVar7 = bVar13 - uVar9;
LAB_82480524:
      pbVar8 = (unsigned char *)0x821bd807;
      do {
        bVar1 = pbVar15 == (unsigned char *)(iVar6 + 0x434U);
        if ((unsigned char *)(iVar6 + 0x434U) <= pbVar15) goto LAB_82480554;
        pbVar8 = pbVar8 + 1;
        bVar13 = *pbVar8;
        *pbVar15 = bVar13;
        pbVar15 = pbVar15 + 1;
      } while (bVar13 != 0);
      bVar1 = pbVar15 == (unsigned char *)(iVar6 + 0x434);
LAB_82480554:
      if (bVar1) {
        pbVar15[-1] = 0;
      }
      iVar6 = fn_8225F160();
      *(unsigned int *)(iVar6 + 8) = 2;
      iVar6 = fn_8225F160();
      uVar16 = 1;
      *(unsigned int *)(iVar6 + 0x5c) = ((unsigned int)LZCOUNT((unsigned int)LZCOUNT(iVar7) >> 5) >> 5) + 1;
    }
    goto LAB_82480970;
  }
  if (pcVar3 == (char *)0x0) {
    if (pcVar2 == (char *)0x0) goto LAB_82480970;
    cVar14 = 't';
    pcVar2 = (char *)(*(int *)(param_1 + 0x48) + 0x334);
    if (pcVar4 != (char *)0x0) {
      cVar11 = *pcVar2;
      if (cVar11 == 't') {
        iVar6 = (int)"turntaking" - (int)pcVar2;
        cVar11 = 't';
        do {
          pcVar2 = pcVar2 + 1;
          if (cVar11 == '\0') goto LAB_824806e0;
          cVar14 = pcVar2[iVar6];
          cVar11 = *pcVar2;
        } while (cVar11 == cVar14);
      }
      if (cVar11 == cVar14) {
LAB_824806e0:
        iVar6 = fn_8225F160();
        if (*(int *)(iVar6 + 0x5c) < 2) {
          iVar6 = fn_8225F160();
          *(unsigned int *)(iVar6 + 8) = 3;
          pcVar2 = "";
          iVar6 = *(int *)(param_1 + 0x48);
          pcVar4 = (char *)(iVar6 + 0x334);
          pcVar3 = (char *)(iVar6 + 0x434);
          do {
            if ((char *)(iVar6 + 0x434U) <= pcVar4) break;
            pcVar2 = pcVar2 + 1;
            cVar14 = *pcVar2;
            *pcVar4 = cVar14;
            pcVar4 = pcVar4 + 1;
          } while (cVar14 != '\0');
        }
        else {
          iVar6 = fn_8225F160();
          *(unsigned int *)(iVar6 + 8) = 1;
          iVar6 = *(int *)(param_1 + 0x48);
          pcVar4 = (char *)(iVar6 + 0x334);
          pcVar2 = "";
          pcVar3 = (char *)(iVar6 + 0x434);
          do {
            bVar1 = pcVar4 == (char *)(iVar6 + 0x434U);
            if ((char *)(iVar6 + 0x434U) <= pcVar4) goto LAB_82480774;
            pcVar2 = pcVar2 + 1;
            cVar14 = *pcVar2;
            *pcVar4 = cVar14;
            pcVar4 = pcVar4 + 1;
          } while (cVar14 != '\0');
        }
        bVar1 = pcVar4 == pcVar3;
LAB_82480774:
        if (bVar1) {
          pcVar4[-1] = '\0';
        }
        uVar16 = 1;
      }
      iVar6 = fn_8225F160();
      *(unsigned int *)(iVar6 + 0x30) = 1;
      goto LAB_82480970;
    }
    cVar11 = *pcVar2;
    if (cVar11 == 't') {
      cVar11 = 't';
      pcVar3 = pcVar2;
      do {
        pcVar3 = pcVar3 + 1;
        if (cVar11 == '\0') goto LAB_82480970;
        cVar14 = pcVar3[(int)"turntaking" - (int)pcVar2];
        cVar11 = *pcVar3;
      } while (cVar11 == cVar14);
    }
    if (cVar11 == cVar14) goto LAB_82480970;
    cVar14 = *pcVar2;
    cVar11 = 's';
    if (cVar14 == 's') {
      cVar14 = 's';
      pcVar3 = pcVar2;
      do {
        pcVar3 = pcVar3 + 1;
        if (cVar14 == '\0') goto LAB_82480828;
        cVar11 = pcVar3[(int)&lbl_821BD814 - (int)pcVar2];
        cVar14 = *pcVar3;
      } while (cVar14 == cVar11);
    }
    if (cVar14 == cVar11) {
LAB_82480828:
      iVar6 = fn_8225F160();
      *(unsigned int *)(iVar6 + 0x5c) = 1;
    }
    else {
      cVar14 = *pcVar2;
      cVar11 = 'c';
      if (cVar14 == 'c') {
        cVar14 = 'c';
        pcVar3 = pcVar2;
        do {
          pcVar3 = pcVar3 + 1;
          if (cVar14 == '\0') goto LAB_82480924;
          cVar11 = pcVar3[(int)&lbl_821BD81C - (int)pcVar2];
          cVar14 = *pcVar3;
        } while (cVar14 == cVar11);
      }
      if (cVar14 != cVar11) {
        cVar14 = *pcVar2;
        cVar11 = 'v';
        if (cVar14 == 'v') {
          cVar14 = 'v';
          pcVar3 = pcVar2;
          do {
            pcVar3 = pcVar3 + 1;
            if (cVar14 == '\0') goto LAB_82480924;
            cVar11 = pcVar3[(int)"versus" - (int)pcVar2];
            cVar14 = *pcVar3;
          } while (cVar14 == cVar11);
        }
        if (cVar14 != cVar11) {
          cVar14 = *pcVar2;
          cVar11 = 'l';
          if (cVar14 == 'l') {
            iVar6 = (int)&lbl_821BD7A8 - (int)pcVar2;
            cVar14 = 'l';
            do {
              pcVar2 = pcVar2 + 1;
              if (cVar14 == '\0') goto LAB_82480924;
              cVar11 = pcVar2[iVar6];
              cVar14 = *pcVar2;
            } while (cVar14 == cVar11);
          }
          if (cVar14 != cVar11) {
            iVar6 = fn_8225F160();
            *(unsigned int *)(iVar6 + 0x5c) = 4;
            goto LAB_8248092c;
          }
        }
      }
LAB_82480924:
      iVar6 = fn_8225F160();
      *(unsigned int *)(iVar6 + 0x5c) = 2;
    }
LAB_8248092c:
    iVar6 = fn_8225F160();
    *(unsigned int *)(iVar6 + 8) = 2;
    iVar6 = *(int *)(param_1 + 0x48);
    pcVar4 = (char *)(iVar6 + 0x334);
    pcVar2 = "";
    pcVar3 = (char *)(iVar6 + 0x434);
    do {
      if ((char *)(iVar6 + 0x434U) <= pcVar4) break;
      pcVar2 = pcVar2 + 1;
      cVar14 = *pcVar2;
      *pcVar4 = cVar14;
      pcVar4 = pcVar4 + 1;
    } while (cVar14 != '\0');
  }
  else {
    cVar11 = 't';
    pcVar2 = (char *)(*(int *)(param_1 + 0x48) + 0x334);
    cVar14 = *pcVar2;
    if (cVar14 == 't') {
      iVar6 = (int)"turntaking" - (int)pcVar2;
      cVar14 = 't';
      do {
        pcVar2 = pcVar2 + 1;
        if (cVar14 == '\0') goto LAB_824805e4;
        cVar11 = pcVar2[iVar6];
        cVar14 = *pcVar2;
      } while (cVar14 == cVar11);
    }
    if (cVar14 != cVar11) goto LAB_82480970;
LAB_824805e4:
    iVar6 = fn_8225F160();
    if (*(int *)(iVar6 + 0x5c) < 2) {
      iVar6 = fn_8225F160();
      *(unsigned int *)(iVar6 + 8) = 3;
      iVar6 = *(int *)(param_1 + 0x48);
      pcVar4 = (char *)(iVar6 + 0x334);
      pcVar2 = "";
      pcVar3 = (char *)(iVar6 + 0x434);
      do {
        if ((char *)(iVar6 + 0x434U) <= pcVar4) break;
        pcVar2 = pcVar2 + 1;
        cVar14 = *pcVar2;
        *pcVar4 = cVar14;
        pcVar4 = pcVar4 + 1;
      } while (cVar14 != '\0');
    }
    else {
      iVar6 = fn_8225F160();
      *(unsigned int *)(iVar6 + 8) = 1;
      iVar6 = *(int *)(param_1 + 0x48);
      pcVar4 = (char *)(iVar6 + 0x334);
      pcVar2 = "";
      pcVar3 = (char *)(iVar6 + 0x434);
      do {
        bVar1 = pcVar4 == (char *)(iVar6 + 0x434U);
        if ((char *)(iVar6 + 0x434U) <= pcVar4) goto LAB_82480964;
        pcVar2 = pcVar2 + 1;
        cVar14 = *pcVar2;
        *pcVar4 = cVar14;
        pcVar4 = pcVar4 + 1;
      } while (cVar14 != '\0');
    }
  }
  bVar1 = pcVar4 == pcVar3;
LAB_82480964:
  if (bVar1) {
    pcVar4[-1] = '\0';
  }
  uVar16 = 1;
LAB_82480970:
  iVar6 = fn_8225F160();
  iVar6 = *(int *)(iVar6 + 0x5c);
  iVar7 = fn_8225C590();
  iVar7 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
  if (iVar7 <= iVar6) {
    iVar6 = iVar7;
  }
  iVar7 = fn_8225F160();
  *(int *)(iVar7 + 0x5c) = iVar6;
  return uVar16;
}

