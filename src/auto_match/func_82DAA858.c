extern int fn_82CE8A48();
extern int fn_82DAA750();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_4e;
extern unsigned int uStack_4f;
extern unsigned int uStack_50;


unsigned __int64
fn_82DAA858(unsigned __int64 param_1,unsigned __int64 param_2,unsigned char *param_3,unsigned int *param_4)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned __int64 *puVar8;
  __int64 lVar9;
  unsigned __int64 *puVar10;
  unsigned int *puVar11;
  unsigned char uStack_50;
  unsigned char uStack_4f;
  unsigned char uStack_4e;
  unsigned short uStack_4c;
  unsigned short uStack_4a;
  unsigned short uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  lVar9 = 1;
  puVar2 = *(unsigned int **)(param_3 + 0x18);
  switch(*param_3) {
  case 1:
  case 2:
    uVar3 = *puVar2;
    *puVar2 = (unsigned int)((unsigned __int64)uVar3 - 1);
    if ((unsigned __int64)uVar3 - 1 == 0) {
      if ((int)puVar2[0x1d] < 1) {
        fn_82DAA750(param_3,puVar2);
        return 0;
      }
      if (param_4 + 4 != (unsigned int *)0x0) {
        *(unsigned char *)(param_4 + 4) = 3;
        *(unsigned char *)((int)param_4 + 0x11) = 0;
        *(unsigned char *)((int)param_4 + 0x12) = 2;
        *(unsigned short *)(param_4 + 5) = 0x20;
        *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
        *(unsigned short *)(param_4 + 8) = *(unsigned short *)(param_3 + 0x10);
        param_4[9] = *(unsigned int *)(param_3 + 0x14);
        param_4[10] = *(unsigned int *)(param_3 + 0x18);
        param_4[0xb] = *(unsigned int *)(param_3 + 0x1c);
      }
      *param_4 = 0;
      return 0;
    }
    break;
  case 3:
    fn_82DAA750(param_3,puVar2);
    return 0;
  case 4:
    uVar3 = *puVar2;
    *puVar2 = (unsigned int)((unsigned __int64)uVar3 - 1);
    if ((unsigned __int64)uVar3 - 1 == 0) {
      puVar11 = param_4 + 4;
      if (*(char *)(puVar2 + 0x16) == '\0') {
        if (puVar11 == (unsigned int *)0x0) {
          puVar11 = (unsigned int *)0x0;
        }
        else {
          *(unsigned char *)puVar11 = 7;
          *(unsigned char *)((int)param_4 + 0x11) = 0;
          *(unsigned char *)((int)param_4 + 0x12) = 1;
          *(unsigned short *)(param_4 + 5) = 0x30;
          *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
          *(unsigned short *)(param_4 + 8) = *(unsigned short *)(param_3 + 0x10);
          param_4[9] = *(unsigned int *)(param_3 + 0x14);
          param_4[10] = *(unsigned int *)(param_3 + 0x18);
          param_4[0xb] = *(unsigned int *)(param_3 + 0x1c);
          param_4[0xc] = puVar2[0xc];
          param_4[0xd] = puVar2[0xd];
        }
        *param_4 = 0;
        *(unsigned char *)((int)param_4 + 0x12) = 1;
        *puVar2 = (unsigned int)*(unsigned short *)(puVar2 + 0xe);
      }
      else {
        if (puVar11 == (unsigned int *)0x0) {
          puVar11 = (unsigned int *)0x0;
        }
        else {
          *(unsigned char *)puVar11 = 6;
          *(unsigned char *)((int)param_4 + 0x11) = 0;
          *(unsigned char *)((int)param_4 + 0x12) = 1;
          *(unsigned short *)(param_4 + 5) = 0x40;
          *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
          *(unsigned short *)(param_4 + 8) = *(unsigned short *)(param_3 + 0x10);
          param_4[9] = *(unsigned int *)(param_3 + 0x14);
          param_4[10] = *(unsigned int *)(param_3 + 0x18);
          param_4[0xb] = *(unsigned int *)(param_3 + 0x1c);
          uVar3 = puVar2[5];
          param_4[0xc] = uVar3;
          param_4[0xe] = puVar2[0xc] - uVar3;
          param_4[0xf] = puVar2[0xf] - uVar3;
          param_4[0x10] = puVar2[0x10] - uVar3;
          param_4[0xd] = puVar2[6];
          param_4[0x11] = puVar2[0x11];
          param_4[0x12] = puVar2[0x12];
        }
        *param_4 = 0;
        *(char *)((int)param_4 + 0x12) = (*(char *)((int)puVar2 + 0x59) != '\0') + '\x01';
      }
      if (*(char *)((int)puVar2 + 0x21) == '\0') {
        return 0;
      }
      uStack_40 = *(unsigned short *)(puVar11 + 4);
      uStack_3c = puVar11[5];
      uStack_38 = puVar11[6];
      uStack_34 = puVar11[7];
      uStack_50 = 5;
      uStack_4f = 0;
      uStack_4e = 2;
      uStack_4c = 0x20;
      uStack_4a = 0xffff;
      fn_82CE8A48(param_1,param_2,&uStack_50,0);
      return 0;
    }
    break;
  case 7:
    uVar3 = *puVar2;
    *puVar2 = (unsigned int)((unsigned __int64)uVar3 - 1);
    if ((unsigned __int64)uVar3 - 1 == 0) {
      if (param_4 + 4 != (unsigned int *)0x0) {
        *(unsigned char *)(param_4 + 4) = 8;
        *(unsigned char *)((int)param_4 + 0x11) = 0;
        *(unsigned char *)((int)param_4 + 0x12) = 1;
        *(unsigned short *)(param_4 + 5) = 0x30;
        *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
        *(unsigned short *)(param_4 + 8) = *(unsigned short *)(param_3 + 0x10);
        param_4[9] = *(unsigned int *)(param_3 + 0x14);
        param_4[10] = *(unsigned int *)(param_3 + 0x18);
        param_4[0xb] = *(unsigned int *)(param_3 + 0x1c);
        uVar3 = puVar2[0x1e];
        param_4[0xc] = 0;
        param_4[0xe] = 0;
        param_4[0xf] = uVar3;
      }
      *param_4 = 0;
      *(unsigned char *)((int)param_4 + 0x12) = 1;
      *puVar2 = (unsigned int)*(unsigned short *)(puVar2 + 0x1f);
      return 0;
    }
    break;
  case 8:
    uVar3 = *puVar2;
    *puVar2 = (unsigned int)((unsigned __int64)uVar3 - 1);
    if ((unsigned __int64)uVar3 - 1 != 0) {
      return 1;
    }
    uVar1 = *(unsigned short *)(*(int *)(param_3 + 0x2c) + 0x1e);
    if (uVar1 != 0) {
      if (param_4 + 4 != (unsigned int *)0x0) {
        *(unsigned char *)(param_4 + 4) = 8;
        *(unsigned char *)((int)param_4 + 0x11) = 0;
        *(unsigned char *)((int)param_4 + 0x12) = 1;
        puVar10 = (unsigned __int64 *)(param_3 + -8);
        *(unsigned short *)(param_4 + 5) = 0x30;
        puVar8 = (unsigned __int64 *)(param_4 + 2);
        *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
        lVar9 = 6;
        *(unsigned short *)(param_4 + 8) = *(unsigned short *)(param_3 + 0x10);
        param_4[9] = *(unsigned int *)(param_3 + 0x14);
        param_4[10] = *(unsigned int *)(param_3 + 0x18);
        param_4[0xb] = *(unsigned int *)(param_3 + 0x1c);
        do {
          puVar10 = puVar10 + 1;
          puVar8 = puVar8 + 1;
          *puVar8 = *puVar10;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        param_4[0xf] = *(unsigned int *)(*(int *)(param_3 + 0x2c) + 0x20);
      }
      *param_4 = 0;
      *(unsigned char *)((int)param_4 + 0x12) = 1;
      *puVar2 = (unsigned int)uVar1;
      return 0;
    }
    puVar11 = param_4 + 4;
    if (*(int *)(param_3 + 0x28) + 1U < *(unsigned int *)(param_3 + 0x24)) {
      if (puVar11 == (unsigned int *)0x0) {
        puVar11 = (unsigned int *)0x0;
      }
      else {
        *(unsigned char *)puVar11 = 8;
        *(unsigned char *)((int)param_4 + 0x11) = 0;
        *(unsigned char *)((int)param_4 + 0x12) = 1;
        puVar10 = (unsigned __int64 *)(param_3 + -8);
        *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
        puVar8 = (unsigned __int64 *)(param_4 + 2);
        *(unsigned short *)(param_4 + 5) = 0x30;
        lVar9 = 6;
        *(unsigned short *)(param_4 + 8) = *(unsigned short *)(param_3 + 0x10);
        param_4[9] = *(unsigned int *)(param_3 + 0x14);
        param_4[10] = *(unsigned int *)(param_3 + 0x18);
        param_4[0xb] = *(unsigned int *)(param_3 + 0x1c);
        do {
          puVar10 = puVar10 + 1;
          puVar8 = puVar8 + 1;
          *puVar8 = *puVar10;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        param_4[0xf] = *(unsigned int *)(*(int *)(param_3 + 0x2c) + 0x20);
      }
      puVar11[10] = puVar11[10] + 1;
      puVar11[0xb] = puVar2[0x1e];
      uVar1 = *(unsigned short *)(puVar2 + 0x1f);
      *param_4 = 0;
      *(unsigned char *)((int)param_4 + 0x12) = 1;
      *puVar2 = (unsigned int)uVar1;
      return 0;
    }
    if (puVar11 != (unsigned int *)0x0) {
      *(unsigned char *)puVar11 = 9;
      *(unsigned char *)((int)param_4 + 0x11) = 0;
      *(unsigned char *)((int)param_4 + 0x12) = 1;
      *(unsigned short *)(param_4 + 5) = 0x30;
      *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
      *(unsigned short *)(param_4 + 8) = *(unsigned short *)(param_3 + 0x10);
      param_4[9] = *(unsigned int *)(param_3 + 0x14);
      param_4[10] = *(unsigned int *)(param_3 + 0x18);
      param_4[0xb] = *(unsigned int *)(param_3 + 0x1c);
      param_4[0xc] = puVar2[0xc];
      param_4[0xd] = puVar2[0xd];
      param_4[0xe] = *(unsigned int *)(param_3 + 0x20);
      *(unsigned char *)(param_4 + 0xf) = 0;
    }
    uVar1 = *(unsigned short *)((int)puVar2 + 0x3a);
    *param_4 = 0;
    *(unsigned char *)((int)param_4 + 0x12) = 1;
    *puVar2 = (unsigned int)uVar1;
    return 0;
  case 9:
    uVar3 = *puVar2;
    *puVar2 = (unsigned int)((unsigned __int64)uVar3 - 1);
    if ((unsigned __int64)uVar3 - 1 == 0) {
      puVar11 = param_4 + 4;
      if (param_3[0x2c] != '\0') {
        if (puVar11 != (unsigned int *)0x0) {
          *(unsigned char *)puVar11 = 0xb;
          *(unsigned char *)((int)param_4 + 0x11) = 0;
          *(unsigned char *)((int)param_4 + 0x12) = 2;
          *(unsigned short *)(param_4 + 5) = 0x40;
          *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
          *(unsigned short *)(param_4 + 8) = *(unsigned short *)(param_3 + 0x10);
          param_4[9] = *(unsigned int *)(param_3 + 0x14);
          param_4[10] = *(unsigned int *)(param_3 + 0x18);
          param_4[0xb] = *(unsigned int *)(param_3 + 0x1c);
          uVar3 = puVar2[0x1e];
          *(unsigned short *)((int)param_4 + 0x46) = 0;
          param_4[0xc] = uVar3;
          *(unsigned short *)(param_4 + 0x11) = *(unsigned short *)(puVar2 + 0x15);
          param_4[0x10] = puVar2[5];
        }
        uVar3 = puVar2[0x1b];
        *param_4 = 0;
        *(unsigned char *)((int)param_4 + 0x12) = 1;
        *puVar2 = uVar3;
        return 0;
      }
      if (puVar11 != (unsigned int *)0x0) {
        *(unsigned char *)puVar11 = 8;
        *(unsigned char *)((int)param_4 + 0x11) = 0;
        *(unsigned char *)((int)param_4 + 0x12) = 1;
        *(unsigned short *)(param_4 + 5) = 0x30;
        *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
        *(unsigned short *)(param_4 + 8) = *(unsigned short *)(param_3 + 0x10);
        param_4[9] = *(unsigned int *)(param_3 + 0x14);
        param_4[10] = *(unsigned int *)(param_3 + 0x18);
        param_4[0xb] = *(unsigned int *)(param_3 + 0x1c);
        param_4[0xf] = puVar2[0x1e];
        iVar7 = *(int *)(param_3 + 0x28);
        param_4[0xe] = 0;
        param_4[0xc] = iVar7 + 1;
      }
      uVar1 = *(unsigned short *)(puVar2 + 0x1f);
      *param_4 = 0;
      *(unsigned char *)((int)param_4 + 0x12) = 1;
      *puVar2 = (unsigned int)uVar1;
      return 0;
    }
    break;
  case 10:
    *puVar2 = *puVar2 - 1;
    piVar4 = *(int **)(*(int *)(param_3 + 0x20) + 0xc);
    if (*piVar4 != 0) {
      piVar4[1] = puVar2[9];
      puVar2[9] = (unsigned int)piVar4;
    }
    if (*puVar2 != 0) {
      return 1;
    }
  case 6:
    *(unsigned char *)(puVar2 + 8) = 1;
    break;
  case 0xb:
    if (*(int *)(param_3 + 0x38) < 6) {
      puVar2[2] = 0;
    }
    lVar9 = (((unsigned __int64)*(unsigned short *)(param_3 + 0x34) - 1 & 0xffffffff) >> 7) + 1;
  case 5:
    lVar9 = (unsigned __int64)*(unsigned int *)(*(int *)(param_3 + 0x18) + 4) - lVar9;
    *(int *)(*(int *)(param_3 + 0x18) + 4) = (int)lVar9;
    if (lVar9 == 0) {
      if (param_4 + 4 != (unsigned int *)0x0) {
        uVar5 = *(unsigned int *)(param_3 + 0x18);
        *(unsigned char *)(param_4 + 4) = 0xc;
        *(unsigned char *)((int)param_4 + 0x11) = 0;
        *(unsigned char *)((int)param_4 + 0x12) = 2;
        *(unsigned short *)(param_4 + 5) = 0x30;
        *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
        *(unsigned short *)(param_4 + 8) = *(unsigned short *)(param_3 + 0x10);
        param_4[9] = *(unsigned int *)(param_3 + 0x14);
        param_4[10] = *(unsigned int *)(param_3 + 0x18);
        uVar6 = *(unsigned int *)(param_3 + 0x1c);
        param_4[10] = uVar5;
        *(unsigned short *)(param_4 + 0xc) = 1;
        param_4[0xb] = uVar6;
      }
      *param_4 = 0;
      return 0;
    }
    break;
  case 0xd:
    iVar7 = *(int *)(param_3 + 0x20);
    if ((iVar7 != 0) &&
       (lVar9 = (unsigned __int64)*(unsigned int *)(iVar7 + 4) - 1, *(int *)(iVar7 + 4) = (int)lVar9, lVar9 == 0))
    {
      if (param_4 + 4 != (unsigned int *)0x0) {
        *(unsigned char *)(param_4 + 4) = 0xe;
        *(unsigned char *)((int)param_4 + 0x11) = 0;
        *(unsigned char *)((int)param_4 + 0x12) = 2;
        *(unsigned short *)(param_4 + 5) = 0x30;
        *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
        *(unsigned short *)(param_4 + 8) = *(unsigned short *)(param_3 + 0x10);
        param_4[9] = *(unsigned int *)(param_3 + 0x14);
        param_4[10] = *(unsigned int *)(param_3 + 0x18);
        param_4[0xb] = *(unsigned int *)(param_3 + 0x1c);
        *(unsigned short *)(param_4 + 8) = *(unsigned short *)(param_3 + 0x10);
        param_4[0xc] = *(unsigned int *)(param_3 + 0x20);
      }
      *param_4 = 0;
      return 0;
    }
  }
  return 1;
}

