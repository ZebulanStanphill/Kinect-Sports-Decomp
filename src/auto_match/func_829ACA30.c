extern int fn_829B6D60();
extern unsigned int lbl_820548B8;


unsigned __int64 fn_829ACA30(int *param_1)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned char *pbVar8;
  int iVar9;
  unsigned short uVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned char *pbVar13;
  int *piVar14;
  unsigned short *puVar15;
  
  puVar2 = (unsigned int *)param_1[6];
  uVar7 = (unsigned __int64)(unsigned int)puVar2[1];
  pbVar8 = (unsigned char *)*puVar2;
  if (uVar7 == 0) {
    iVar5 = (*(int (**)())puVar2[3])();
    if (iVar5 != 0) {
      pbVar8 = (unsigned char *)*puVar2;
      uVar7 = (unsigned __int64)(unsigned int)puVar2[1];
      goto LAB_829aca7c;
    }
LAB_829aca68:
    uVar4 = 0;
  }
  else {
LAB_829aca7c:
    bVar1 = *pbVar8;
    uVar7 = uVar7 - 1;
    pbVar8 = pbVar8 + 1;
    if (uVar7 == 0) {
      iVar5 = (*(int (**)())puVar2[3])(param_1);
      if (iVar5 == 0) goto LAB_829aca68;
      pbVar8 = (unsigned char *)*puVar2;
      uVar7 = (unsigned __int64)(unsigned int)puVar2[1];
    }
    pbVar13 = pbVar8 + 1;
    uVar7 = uVar7 - 1;
    lVar11 = (unsigned __int64)*pbVar8 + (unsigned __int64)bVar1 * 0x100 + -2;
    if (0 < lVar11) {
      lVar12 = lVar11;
      do {
        if ((uVar7 & 0xffffffff) == 0) {
          iVar5 = (*(int (**)())puVar2[3])(param_1);
          if (iVar5 == 0) goto LAB_829aca68;
          pbVar13 = (unsigned char *)*puVar2;
          uVar7 = (unsigned __int64)(unsigned int)puVar2[1];
        }
        uVar7 = uVar7 - 1;
        uVar3 = *pbVar13 & 0xf;
        iVar5 = (int)(unsigned int)*pbVar13 >> 4;
        *(unsigned int *)(*param_1 + 0x14) = 0x51;
        pbVar13 = pbVar13 + 1;
        *(unsigned int *)(*param_1 + 0x18) = uVar3;
        *(int *)(*param_1 + 0x1c) = iVar5;
        (**(int (***)())(*param_1 + 4))(param_1,1);
        if (3 < uVar3) {
          *(unsigned int *)(*param_1 + 0x14) = 0x1f;
          *(unsigned int *)(*param_1 + 0x18) = uVar3;
          (**(int (***)())*param_1)(param_1);
        }
        iVar9 = uVar3 + 0x2a;
        if (param_1[iVar9] == 0) {
          iVar6 = fn_829B6D60(param_1);
          param_1[iVar9] = iVar6;
        }
        iVar9 = param_1[iVar9];
        piVar14 = (int *)&lbl_820548B8;
        do {
          if (iVar5 == 0) {
            if ((uVar7 & 0xffffffff) == 0) {
              iVar6 = (*(int (**)())puVar2[3])(param_1);
              if (iVar6 == 0) goto LAB_829aca68;
              pbVar13 = (unsigned char *)*puVar2;
              uVar7 = (unsigned __int64)(unsigned int)puVar2[1];
            }
            uVar10 = (unsigned short)*pbVar13;
          }
          else {
            if ((uVar7 & 0xffffffff) == 0) {
              iVar6 = (*(int (**)())puVar2[3])(param_1);
              if (iVar6 == 0) goto LAB_829aca68;
              pbVar13 = (unsigned char *)*puVar2;
              uVar7 = (unsigned __int64)(unsigned int)puVar2[1];
            }
            bVar1 = *pbVar13;
            uVar7 = uVar7 - 1;
            pbVar13 = pbVar13 + 1;
            if (uVar7 == 0) {
              iVar6 = (*(int (**)())puVar2[3])(param_1);
              if (iVar6 == 0) goto LAB_829aca68;
              pbVar13 = (unsigned char *)*puVar2;
              uVar7 = (unsigned __int64)(unsigned int)puVar2[1];
            }
            uVar10 = (unsigned short)*pbVar13 + (unsigned short)bVar1 * 0x100;
          }
          pbVar13 = pbVar13 + 1;
          uVar7 = uVar7 - 1;
          iVar6 = *piVar14;
          piVar14 = piVar14 + 1;
          *(unsigned short *)(iVar6 * 2 + iVar9) = uVar10;
        } while ((int)piVar14 < -0x7dfab648);
        if (1 < *(int *)(*param_1 + 0x68)) {
          puVar15 = (unsigned short *)(iVar9 + -2);
          lVar11 = 8;
          do {
            iVar9 = *param_1;
            *(unsigned int *)(iVar9 + 0x18) = (unsigned int)puVar15[1];
            *(unsigned int *)(iVar9 + 0x1c) = (unsigned int)puVar15[2];
            *(unsigned int *)(iVar9 + 0x20) = (unsigned int)puVar15[3];
            *(unsigned int *)(iVar9 + 0x24) = (unsigned int)puVar15[4];
            *(unsigned int *)(iVar9 + 0x28) = (unsigned int)puVar15[5];
            *(unsigned int *)(iVar9 + 0x2c) = (unsigned int)puVar15[6];
            *(unsigned int *)(iVar9 + 0x30) = (unsigned int)puVar15[7];
            puVar15 = puVar15 + 8;
            *(unsigned int *)(iVar9 + 0x34) = (unsigned int)*puVar15;
            *(unsigned int *)(*param_1 + 0x14) = 0x5d;
            (**(int (***)())(*param_1 + 4))(param_1,2);
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        lVar11 = lVar12 + -0x41;
        if (iVar5 != 0) {
          lVar11 = lVar12 + -0x81;
        }
        lVar12 = lVar11;
      } while (0 < (int)lVar11);
    }
    if ((int)lVar11 != 0) {
      *(unsigned int *)(*param_1 + 0x14) = 0xb;
      (**(int (***)())*param_1)(param_1);
    }
    *puVar2 = pbVar13;
    uVar4 = 1;
    puVar2[1] = (int)uVar7;
  }
  return uVar4;
}

