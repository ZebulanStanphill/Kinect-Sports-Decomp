extern unsigned int *auStack_80;
extern unsigned int *auStack_ac;
extern int fn_82C10AD0();
extern int fn_82C10E58();
extern int fn_82C10F40();
extern int fn_82C1E938();
extern int fn_82C1EAB8();
extern int fn_82C1EC50();
extern int fn_82C1EE20();
extern int fn_82C1EFD0();
extern int memset();
extern unsigned int lbl_820ED038;
extern unsigned int lbl_820ED048;
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ae;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_82C1FA60(int param_1,__int64 param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned short uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned char *pbVar10;
  unsigned int *puVar11;
  unsigned char *pbVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned char uVar15;
  __int64 lVar16;
  unsigned short uStack_ae;
  unsigned short auStack_ac [2];
  unsigned char *puStack_a8;
  unsigned int uStack_a4;
  struct { unsigned int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  unsigned char *puStack_94;
  unsigned int uStack_90;
  int aiStack_8c [2];
  unsigned __int64 auStack_80;
  unsigned char abStack_70 [16];
  unsigned char abStack_60 [96];
  
  piVar3 = *(int **)(param_1 + 0x1c);
  stack_pair_a0.second = 0;
  uVar13 = param_2 - 0x18;
  uStack_a4 = 0;
  puStack_a8 = (unsigned char *)0x0;
  puStack_94 = (unsigned char *)0x0;
  stack_pair_a0.first = (unsigned int)uVar13;
  uStack_90 = 0;
  aiStack_8c[0] = 0;
  auStack_ac[0] = 0;
  aiStack_8c[1] = 0;
  uStack_ae = 0;
  uStack_98 = 0;
  uVar7 = (**(int (***)())(*piVar3 + 0xc))(*piVar3,uVar13);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  if ((uVar13 & 0xffffffff) < 0x36) {
    return 0xffffffff8050000c;
  }
  uVar7 = fn_82C1EE20(param_1,abStack_60,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_82C1EE20(param_1,abStack_70,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_82C1EC50(param_1,&auStack_80,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_82C1EAB8(param_1,&uStack_90,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_82C1EAB8(param_1,aiStack_8c,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_82C1E938(param_1,auStack_ac,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_82C1EAB8(param_1,aiStack_8c + 1,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar14 = 0x36;
  uVar5 = auStack_ac[0] & 0x7f;
  uVar4 = (unsigned int)((auStack_ac[0] & 0x8000) != 0);
  iVar8 = fn_82C10F40(piVar3[0x25],uVar5,&puStack_94);
  if ((iVar8 == -0x7fafffea) &&
     (uVar7 = fn_82C10E58(piVar3[0x25],uVar5,&puStack_94), (int)uVar7 < 0)) {
    return uVar7;
  }
  pbVar12 = &lbl_820ED058;
  pbVar10 = abStack_60;
  uVar15 = (unsigned char)uVar5;
  *puStack_94 = uVar15;
  *(unsigned __int64 *)(puStack_94 + 0x38) = auStack_80;
  *(unsigned int *)(puStack_94 + 0x40) = uVar4;
  *(unsigned int *)(puStack_94 + 0x44) = 1;
  do {
    bVar1 = *pbVar12;
    bVar2 = *pbVar10;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar12 = pbVar12 + 1;
    pbVar10 = pbVar10 + 1;
  } while (pbVar12 != &lbl_820ED068);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    uVar7 = fn_82C10E58(*(unsigned int *)(piVar3[1] + 0x7c),uVar5,&puStack_a8);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    uVar7 = fn_82C10AD0(piVar3[0x38],0xb,0x18,puStack_a8 + 8);
    uVar6 = uStack_90;
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    lVar16 = 6;
    puVar11 = (unsigned int *)(*(int *)(puStack_a8 + 8) + -4);
    do {
      puVar11 = puVar11 + 1;
      *puVar11 = 0;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    *(unsigned short *)(puStack_94 + 0x2c) = *(unsigned short *)(piVar3[1] + 0x26);
    *(unsigned int *)(puStack_94 + 0x30) = 1;
    *(short *)(piVar3[1] + 0x26) = *(short *)(piVar3[1] + 0x26) + 1;
    *(short *)(piVar3[1] + 0x24) = *(short *)(piVar3[1] + 0x24) + 1;
    *(unsigned int *)(puStack_a8 + 4) = 1;
    *puStack_a8 = uVar15;
    *(unsigned __int64 *)(puStack_a8 + 0x10) = auStack_80;
    *(unsigned int *)(puStack_a8 + 0x18) = uVar4;
    if ((unsigned __int64)uStack_90 != 0) {
      if ((uVar13 & 0xffffffff) < ((unsigned __int64)uStack_90 + 0x36 & 0xffffffff)) {
        return 0xffffffff8050000c;
      }
      uVar7 = fn_82C1E938(param_1,&uStack_ae,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      **(unsigned short **)(puStack_a8 + 8) = uStack_ae;
      uVar7 = fn_82C1E938(param_1,&uStack_ae,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(unsigned short *)(*(int *)(puStack_a8 + 8) + 2) = uStack_ae;
      uVar7 = fn_82C1EAB8(param_1,&uStack_98,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(unsigned int *)(*(int *)(puStack_a8 + 8) + 4) = uStack_98;
      uVar7 = fn_82C1EAB8(param_1,&uStack_98,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(unsigned int *)(*(int *)(puStack_a8 + 8) + 8) = uStack_98;
      uVar7 = fn_82C1E938(param_1,&uStack_ae,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(unsigned short *)(*(int *)(puStack_a8 + 8) + 0xc) = uStack_ae;
      uVar7 = fn_82C1E938(param_1,&uStack_ae,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(unsigned short *)(*(int *)(puStack_a8 + 8) + 0xe) = uStack_ae;
      uVar7 = fn_82C1E938(param_1,&uStack_ae,&stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(short *)(*(int *)(puStack_a8 + 8) + 0x10) = (short)uVar6 + -0x12;
      uVar7 = fn_82C10AD0(piVar3[0x38],0xb,*(unsigned short *)(*(int *)(puStack_a8 + 8) + 0x10),
                                *(int *)(puStack_a8 + 8) + 0x14);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      uVar9 = (unsigned __int64)*(unsigned short *)(*(int *)(puStack_a8 + 8) + 0x10);
      uVar14 = uVar9 + 0x48;
      if ((uVar13 & 0xffffffff) < uVar14) {
        return 0xffffffff8050000c;
      }
      uVar7 = fn_82C1EFD0(param_1,*(unsigned int *)(*(int *)(puStack_a8 + 8) + 0x14),uVar9,
                            &stack_pair_a0.second,&uStack_a4,&stack_pair_a0.first);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
    }
    if (aiStack_8c[0] != 0) {
      pbVar10 = abStack_70;
      pbVar12 = &lbl_820ED048;
      do {
        bVar1 = *pbVar12;
        bVar2 = *pbVar10;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar12 = pbVar12 + 1;
        pbVar10 = pbVar10 + 1;
      } while (pbVar12 != &lbl_820ED058);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
        pbVar10 = abStack_70;
        pbVar12 = &lbl_820ED038;
        do {
          bVar1 = *pbVar12;
          bVar2 = *pbVar10;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar12 = pbVar12 + 1;
          pbVar10 = pbVar10 + 1;
        } while (pbVar12 != &lbl_820ED048);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
          return 0xffffffff8050000c;
        }
      }
    }
  }
  else {
    pbVar10 = abStack_60;
    pbVar12 = &lbl_820F8EB8;
    do {
      bVar1 = *pbVar12;
      bVar2 = *pbVar10;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar12 = pbVar12 + 1;
      pbVar10 = pbVar10 + 1;
    } while (pbVar12 != &lbl_820F8EC8);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      if (uStack_90 == 0) {
        return 0xffffffff8050000c;
      }
      if (uStack_90 < 0x33) {
        return 0xffffffff8050000c;
      }
      uVar7 = fn_82C10E58(*(unsigned int *)(piVar3[1] + 0x7c),uVar5,&puStack_a8);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      uVar7 = fn_82C10AD0(piVar3[0x38],0xb,0x38,puStack_a8 + 8);
      if (-1 < (int)uVar7) {
                    /* WARNING: Subroutine does not return */
        memset(*(unsigned int *)(puStack_a8 + 8),0,0x38);
      }
      return uVar7;
    }
    uVar7 = fn_82C10E58(*(unsigned int *)(piVar3[1] + 0x7c),uVar5,&puStack_a8);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    *(short *)(piVar3[1] + 0x24) = *(short *)(piVar3[1] + 0x24) + 1;
    *(unsigned __int64 *)(puStack_a8 + 0x10) = auStack_80;
    *(unsigned int *)(puStack_94 + 0x30) = 0;
    *(unsigned int *)(puStack_a8 + 4) = 0;
    *puStack_a8 = uVar15;
  }
  *(short *)(piVar3[1] + 0x2c) = *(short *)(piVar3[1] + 0x2c) + 1;
  uVar14 = (uVar13 - uStack_a4) - uVar14;
  if (uVar14 == 0) {
    return uVar7;
  }
  uVar7 = (**(int (***)())(*piVar3 + 0x14))(*piVar3,uVar14);
  if (-1 < (int)uVar7) {
    *(unsigned __int64 *)(piVar3 + 2) = (uVar14 & 0xffffffff) + *(__int64 *)(piVar3 + 2);
    return uVar7;
  }
  return uVar7;
}

