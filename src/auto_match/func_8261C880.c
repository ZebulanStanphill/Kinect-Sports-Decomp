extern int fn_825C2BB0();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_8261C880(int param_1,int param_2)

{
  unsigned char bVar1;
  char cVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  unsigned int uVar6;
  char *pcVar7;
  unsigned char *puVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  double dVar13;
  
  *(unsigned int *)(param_1 + 0xb64) = (unsigned int)*(unsigned char *)(param_2 + 0x5c3);
  *(unsigned int *)(param_1 + 0xb68) = *(unsigned int *)(param_2 + 0x5c4);
  fVar4 = lbl_821CA460;
  dVar13 = (double)lbl_821CA460;
  *(unsigned int *)(param_1 + 0xb70) = (unsigned int)*(unsigned char *)(param_2 + 0x5be);
  *(unsigned int *)(param_1 + 0xc4c) = 0;
  *(unsigned int *)(param_1 + 0xc58) = *(unsigned int *)(param_2 + 0x694);
  *(unsigned int *)(param_1 + 0xc00) = *(unsigned int *)(param_2 + 0x688);
  *(unsigned int *)(param_1 + 0xc04) = *(unsigned int *)(param_2 + 0x68c);
  *(unsigned int *)(param_1 + 0xc08) = *(unsigned int *)(param_2 + 0x690);
  *(unsigned int *)(param_1 + 0xc30) = *(unsigned int *)(param_2 + 0x67c);
  *(unsigned int *)(param_1 + 0xc34) = *(unsigned int *)(param_2 + 0x680);
  *(unsigned int *)(param_1 + 0xc38) = *(unsigned int *)(param_2 + 0x684);
  *(unsigned int *)(param_1 + 0xbbc) = *(unsigned int *)(param_2 + 0x5e8);
  *(float *)(param_1 + 0xbc8) = fVar4;
  *(unsigned int *)(param_1 + 0xb74) = (unsigned int)*(unsigned char *)(param_2 + 0x5cc);
  bVar1 = *(unsigned char *)(param_2 + 0x5cd);
  *(unsigned int *)(param_1 + 0xbd4) = *(unsigned int *)(param_1 + 0x7f0);
  *(unsigned int *)(param_1 + 0xb78) = (unsigned int)bVar1;
  *(unsigned int *)(param_1 + 0xb7c) = 0;
  *(unsigned int *)(param_1 + 0xbcc) = 0;
  *(unsigned int *)(param_1 + 0xbd8) = (unsigned int)*(unsigned char *)(param_2 + 0x5cf);
  *(unsigned int *)(param_1 + 0xbdc) = *(unsigned int *)(param_2 + 0x66c);
  *(unsigned int *)(param_1 + 0xbe4) = (unsigned int)*(unsigned char *)(param_2 + 0x670);
  *(unsigned char *)(param_1 + 0xbec) = *(unsigned char *)(param_2 + 0x671);
  *(unsigned char *)(param_1 + 0xbed) = *(unsigned char *)(param_2 + 0x672);
  *(unsigned int *)(param_1 + 0xb80) = (unsigned int)*(unsigned char *)(param_2 + 0x5ce);
  *(unsigned int *)(param_1 + 0xbf0) = *(unsigned int *)(param_2 + 0x674);
  *(unsigned int *)(param_1 + 0xbf4) = *(unsigned int *)(param_2 + 0x678);
  iVar11 = *(int *)(param_2 + 0x5c8);
  if (iVar11 != 0) {
    if (*(int *)(param_1 + 0xb10) != 0) {
      *(int *)(*(int *)(param_1 + 0xb10) + 0x14) = iVar11;
    }
    *(int *)(param_1 + 0xb28) = iVar11;
  }
  piVar12 = (int *)(*(int *)(param_2 + 0x84) + 0xbbc);
  *(unsigned int *)(param_1 + 0xb88) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xb84) = 0xffffffff;
  if (*(int *)(param_1 + 0xb74) != 0) {
    pcVar7 = (char *)(param_2 + 0x5ec);
    pcVar9 = pcVar7;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    if ((int)pcVar9 - (int)pcVar7 == 1) {
      pcVar7 = "default_props";
    }
    uVar6 = fn_825C2BB0(piVar12,pcVar7);
    *(unsigned int *)(param_1 + 0xb88) = uVar6;
    piVar12 = (int *)*piVar12;
    iVar11 = 0;
    piVar10 = piVar12 + (piVar12[1] + 8) * *piVar12 * 2 + 5;
    piVar12 = piVar10 + piVar12[1] * 0x10;
    if (piVar10 < piVar12) {
      puVar8 = (unsigned char *)((int)piVar10 + (-0x62c - param_2));
      do {
        cVar2 = *(char *)piVar10;
        cVar3 = *(char *)(param_2 + 0x62c);
        pcVar9 = (char *)(param_2 + 0x62c);
        while (cVar3 == cVar2) {
          pcVar9 = pcVar9 + 1;
          if (cVar3 == '\0') goto LAB_8261ca70;
          cVar2 = pcVar9[(int)puVar8];
          cVar3 = *pcVar9;
        }
        if (cVar3 == cVar2) goto LAB_8261ca70;
        piVar10 = piVar10 + 0x10;
        puVar8 = puVar8 + 0x40;
        iVar11 = iVar11 + 1;
      } while (piVar10 < piVar12);
    }
    iVar11 = -1;
LAB_8261ca70:
    *(int *)(param_1 + 0xb84) = iVar11;
    *(unsigned int *)(param_1 + 0xbc0) = *(unsigned int *)(param_2 + 0x5e4);
    *(unsigned char *)(param_1 + 0xbe0) = 0;
    *(unsigned int *)(param_1 + 0xb8c) = (unsigned int)*(unsigned char *)(param_2 + 0x5d0);
    *(unsigned int *)(param_1 + 0xb98) = (unsigned int)*(unsigned char *)(param_2 + 0x5d0);
    *(unsigned int *)(param_1 + 0xb94) = 0;
    *(unsigned int *)(param_1 + 0xb9c) = (unsigned int)*(unsigned char *)(param_2 + 0x5d1);
    *(unsigned int *)(param_1 + 0xba0) = *(unsigned int *)(param_2 + 0x5d4);
    *(unsigned int *)(param_1 + 0xba4) = (unsigned int)*(unsigned char *)(param_2 + 0x5d2);
    *(unsigned int *)(param_1 + 0xba8) = *(unsigned int *)(param_2 + 0x5d8);
    *(unsigned int *)(param_1 + 0xbac) = (unsigned int)*(unsigned char *)(param_2 + 0x5d3);
    *(unsigned int *)(param_1 + 0xbb0) = *(unsigned int *)(param_2 + 0x5dc);
    *(unsigned int *)(param_1 + 0xbb4) = *(unsigned int *)(param_2 + 0x5e0);
  }
  *(unsigned int *)(param_1 + 0xc3c) = (unsigned int)*(unsigned char *)(param_2 + 0x69c);
  fVar5 = lbl_82192480;
  fVar4 = lbl_821922D0;
  *(unsigned char *)(param_1 + 0xc40) = *(unsigned char *)(param_2 + 0x69d);
  *(unsigned char *)(param_1 + 0xc41) = *(unsigned char *)(param_2 + 0x69e);
  *(unsigned char *)(param_1 + 0xc42) = *(unsigned char *)(param_2 + 0x69f);
  *(unsigned char *)(param_1 + 0xc43) = *(unsigned char *)(param_2 + 0x6a0);
  *(unsigned char *)(param_1 + 0xc44) = *(unsigned char *)(param_2 + 0x6a1);
  *(unsigned int *)(param_1 + 0xc48) = *(unsigned int *)(param_2 + 0x6a4);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_1 + 0xc5c) =
       (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar13) * fVar4 + fVar5;
  if (*(char *)(param_2 + 0x5bc) != '\0') {
    *(char *)(param_1 + 0x1cc) = *(char *)(param_1 + 0x1cc) + '\x01';
  }
  if (*(char *)(param_2 + 0x5bd) != '\0') {
    *(unsigned char *)(param_1 + 0x1cf) = 1;
  }
  return 1;
}

