typedef unsigned char bool;
extern int fn_82FFFF50();
extern int fn_830274B8();


unsigned __int64 fn_83001128(int param_1,int *param_2)

{
  char cVar1;
  unsigned int uVar2;
  char *pcVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 uVar7;
  int *piVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  uVar7 = 1;
  cVar1 = *(char *)*param_2;
  *param_2 = (int)((char *)*param_2 + 1);
  bVar15 = cVar1 != '\0';
  *(unsigned char *)(param_1 + 0x3d) = *(unsigned char *)(param_1 + 0x3d) & 0xfe | bVar15;
  if (bVar15) {
    uVar2 = *(unsigned int *)*param_2;
    *param_2 = (int)((unsigned int *)*param_2 + 1);
    *(short *)(param_1 + 0x62) = (short)uVar2;
    uVar2 = *(unsigned int *)*param_2;
    *param_2 = (int)((unsigned int *)*param_2 + 1);
    *(unsigned int *)(param_1 + 0x58) = uVar2;
    uVar2 = *(unsigned int *)*param_2;
    *param_2 = (int)((unsigned int *)*param_2 + 1);
    *(unsigned int *)(param_1 + 0x5c) = uVar2;
    pcVar3 = (char *)*param_2;
    cVar1 = *pcVar3;
    *param_2 = (int)(pcVar3 + 1);
    if (cVar1 == '\0') {
      cVar1 = pcVar3[1];
      *param_2 = (int)(pcVar3 + 2);
      *(char *)(param_1 + 0x60) = '\x01' - (cVar1 == '\0');
    }
    else {
      uVar7 = fn_82FFFF50(param_1);
      if ((int)uVar7 == 1) {
        iVar13 = *(int *)(param_1 + 100);
        uVar2 = *(unsigned int *)*param_2;
        *param_2 = (int)((unsigned int *)*param_2 + 1);
        *(unsigned int *)(iVar13 + 8) = uVar2;
        uVar2 = *(unsigned int *)*param_2;
        *param_2 = (int)((unsigned int *)*param_2 + 1);
        *(unsigned int *)(iVar13 + 0xc) = uVar2;
        cVar1 = *(char *)*param_2;
        *param_2 = (int)((char *)*param_2 + 1);
        *(char *)(iVar13 + 0x10) = '\x01' - (cVar1 == '\0');
        if (*(int *)(iVar13 + 8) == 3) {
          cVar1 = *(char *)*param_2;
          *param_2 = (int)((char *)*param_2 + 1);
          *(char *)(iVar13 + 0x31) = '\x01' - (cVar1 == '\0');
        }
        else if (*(int *)(iVar13 + 8) == 2) {
          uVar2 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(iVar13 + 0x34) = uVar2;
          cVar1 = *(char *)*param_2;
          *param_2 = (int)((char *)*param_2 + 1);
          *(char *)(iVar13 + 0x33) = '\x01' - (cVar1 == '\0');
          uVar2 = *(unsigned int *)*param_2;
          *param_2 = (int)((unsigned int *)*param_2 + 1);
          *(unsigned int *)(iVar13 + 0x38) = uVar2;
          cVar1 = *(char *)*param_2;
          *param_2 = (int)((char *)*param_2 + 1);
          *(char *)(iVar13 + 0x32) = '\x01' - (cVar1 == '\0');
          piVar12 = (int *)*param_2 + 1;
          iVar13 = *(int *)*param_2;
          *param_2 = (int)piVar12;
          piVar8 = (int *)0x0;
          if (iVar13 != 0) {
            *param_2 = (int)(piVar12 + iVar13 * 4);
            piVar8 = piVar12;
          }
          puVar9 = (unsigned int *)*param_2 + 1;
          uVar4 = *(unsigned int *)*param_2;
          *param_2 = (int)puVar9;
          if ((uVar4 != 0) && (*param_2 = (int)(puVar9 + uVar4 * 2), iVar13 != 0)) {
            if (*(int *)(param_1 + 100) == 0) {
              uVar7 = 2;
            }
            else {
              uVar7 = fn_830274B8(*(int *)(param_1 + 100),piVar8,iVar13,puVar9,uVar4);
            }
          }
          uVar10 = 0;
          if (3 < (int)uVar4) {
            iVar13 = 0;
            uVar11 = 2;
            do {
              puVar5 = (unsigned int *)*param_2;
              uVar2 = puVar5[1];
              *param_2 = (int)(puVar5 + 2);
              iVar14 = *(int *)(param_1 + 100);
              if ((iVar14 != 0) && (uVar10 < *(unsigned int *)(iVar14 + 0x48))) {
                *(unsigned int *)(*(int *)(iVar14 + 0x44) + iVar13 + 8) = *puVar5;
                *(unsigned int *)(*(int *)(*(int *)(param_1 + 100) + 0x44) + iVar13 + 0xc) = uVar2;
              }
              puVar5 = (unsigned int *)*param_2;
              uVar2 = puVar5[1];
              *param_2 = (int)(puVar5 + 2);
              iVar14 = *(int *)(param_1 + 100);
              if ((iVar14 != 0) && (uVar11 - 1 < *(unsigned int *)(iVar14 + 0x48))) {
                *(unsigned int *)(*(int *)(iVar14 + 0x44) + iVar13 + 0x18) = *puVar5;
                *(unsigned int *)(*(int *)(*(int *)(param_1 + 100) + 0x44) + iVar13 + 0x1c) = uVar2;
              }
              puVar5 = (unsigned int *)*param_2;
              uVar2 = puVar5[1];
              *param_2 = (int)(puVar5 + 2);
              iVar14 = *(int *)(param_1 + 100);
              if ((iVar14 != 0) && (uVar11 < *(unsigned int *)(iVar14 + 0x48))) {
                *(unsigned int *)(*(int *)(iVar14 + 0x44) + iVar13 + 0x28) = *puVar5;
                *(unsigned int *)(*(int *)(*(int *)(param_1 + 100) + 0x44) + iVar13 + 0x2c) = uVar2;
              }
              puVar5 = (unsigned int *)*param_2;
              uVar2 = puVar5[1];
              *param_2 = (int)(puVar5 + 2);
              iVar14 = *(int *)(param_1 + 100);
              if ((iVar14 != 0) && (uVar11 + 1 < *(unsigned int *)(iVar14 + 0x48))) {
                *(unsigned int *)(*(int *)(iVar14 + 0x44) + iVar13 + 0x38) = *puVar5;
                *(unsigned int *)(*(int *)(*(int *)(param_1 + 100) + 0x44) + iVar13 + 0x3c) = uVar2;
              }
              uVar10 = uVar10 + 4;
              uVar11 = uVar11 + 4;
              iVar13 = iVar13 + 0x40;
            } while (uVar10 < uVar4 - 3);
          }
          if (uVar10 < uVar4) {
            iVar14 = uVar4 - uVar10;
            iVar13 = uVar10 << 4;
            do {
              puVar5 = (unsigned int *)*param_2;
              uVar2 = puVar5[1];
              *param_2 = (int)(puVar5 + 2);
              iVar6 = *(int *)(param_1 + 100);
              if ((iVar6 != 0) && (uVar10 < *(unsigned int *)(iVar6 + 0x48))) {
                *(unsigned int *)(*(int *)(iVar6 + 0x44) + iVar13 + 8) = *puVar5;
                *(unsigned int *)(*(int *)(*(int *)(param_1 + 100) + 0x44) + iVar13 + 0xc) = uVar2;
              }
              uVar10 = uVar10 + 1;
              iVar13 = iVar13 + 0x10;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
        }
      }
    }
  }
  return uVar7;
}

