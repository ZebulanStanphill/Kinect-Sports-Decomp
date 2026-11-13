#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8227CB30();
extern int fn_82293B48();
extern int fn_822ABBF0();
extern int fn_82359C18();
extern int fn_82365BD8();
extern int fn_823B7660();
extern int fn_823B77E8();
extern int fn_8265C9E0();
extern int fn_82F622E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B288C;
extern unsigned int lbl_821B28DC;
extern unsigned int lbl_821B2914;
extern unsigned int lbl_821B29F4;
extern unsigned int lbl_8241CF90;
extern unsigned int stack0x00000000;
extern unsigned int uStack_7c;


/* WARNING: Removing unreachable block (ram,0x8235be60) */
/* WARNING: Removing unreachable block (ram,0x8235bd84) */
/* WARNING: Removing unreachable block (ram,0x8235bf3c) */

void fn_8235B978(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  int iVar11;
  int iVar12;
  __int64 lVar13;
  int *piVar14;
  int iVar15;
  unsigned int uVar16;
  unsigned char auStack_c0 [8];
  unsigned char auStack_b8 [24];
  int aiStack_a0 [8];
  unsigned char **ppuStack_80;
  unsigned __int64 uStack_7c;
  unsigned char ***pppuStack_70;
  
  puVar4 = *(unsigned int **)(param_1 + 8);
  for (piVar14 = (int *)*puVar4; piVar14 < (int *)puVar4[1]; piVar14 = piVar14 + 1) {
    puVar5 = (unsigned int *)*piVar14;
    for (puVar6 = (unsigned int *)*puVar5; puVar6 < (unsigned int *)puVar5[1]; puVar6 = puVar6 + 1) {
      fn_822ABBF0(*puVar6,&stack0x00000000 + -0xb8);
    }
  }
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0xc04)) {
    piVar14 = (int *)(param_1 + 0x1ec4);
    do {
      if ((int *)*piVar14 != (int *)0x0) {
        (**(int (***)())(*(int *)*piVar14 + 0x14))();
      }
      iVar15 = iVar15 + 1;
      piVar14 = piVar14 + 0x108;
    } while (iVar15 < *(int *)(param_1 + 0xc04));
  }
  fn_82293B48(*(unsigned int *)(param_1 + 0xd4),
                  (*(int *)(*(int *)(param_1 + 0x2b20) + 0xc) -
                  *(int *)(*(int *)(param_1 + 0x2b20) + 8)) / 0x1ac);
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  iVar15 = *(int *)(param_1 + 0x20);
  uVar10 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x24) - iVar15 >> 2 != 0) {
    iVar11 = 0;
    do {
      piVar14 = *(int **)(iVar15 + iVar11);
      uVar16 = 0;
      iVar15 = *piVar14;
      iVar2 = piVar14[1] - iVar15 >> 2;
      if (iVar2 != 0) {
        iVar12 = 0;
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F622E0(0xffffffff821ae698);
        }
        do {
          if ((uVar10 & 0xffffffff) < 4) {
            lVar13 = (unsigned __int64)*(unsigned int *)(iVar15 + iVar12) + 0xf0;
            if ((unsigned __int64)*(unsigned int *)(iVar15 + iVar12) == 0) {
              lVar13 = 0;
            }
            uVar8 = *(unsigned int *)(param_1 + 0x8c);
            uVar3 = fn_82365BD8(&stack0x00000000 + -0xc0,
                                      (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0x308) + 0x38);
            fn_823B7660(uVar8,lVar13,uVar10,uVar3);
            uVar10 = uVar10 + 1;
          }
          iVar15 = *piVar14;
          uVar16 = uVar16 + 1;
          iVar12 = iVar12 + 4;
        } while (uVar16 < (unsigned int)(piVar14[1] - iVar15 >> 2));
      }
      iVar15 = *(int *)(param_1 + 0x20);
      uVar9 = uVar9 + 1;
      iVar11 = iVar11 + 4;
    } while (uVar9 < (unsigned int)(*(int *)(param_1 + 0x24) - iVar15 >> 2));
  }
  iVar15 = *(int *)(param_1 + 0x2b20);
  uVar10 = 4;
  puVar5 = *(unsigned int **)(iVar15 + 0x8c);
  for (puVar4 = *(unsigned int **)(iVar15 + 0x88); puVar4 != puVar5; puVar4 = puVar4 + 1) {
    if ((uVar10 & 0xffffffff) < 0xe) {
      uVar8 = *(unsigned int *)(param_1 + 0x8c);
      uVar3 = fn_82365BD8(&stack0x00000000 + -0xc0,
                                (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0x308) + 0x30);
      fn_823B7660(uVar8,*puVar4,uVar10,uVar3);
      uVar10 = uVar10 + 1;
    }
    puVar5 = *(unsigned int **)(iVar15 + 0x8c);
  }
  iVar15 = *(int *)(param_1 + 0x2b20);
  uVar10 = 0xe;
  puVar5 = *(unsigned int **)(iVar15 + 0x24);
  for (puVar4 = *(unsigned int **)(iVar15 + 0x20); puVar4 != puVar5; puVar4 = puVar4 + 1) {
    if ((uVar10 & 0xffffffff) < 0x18) {
      uVar8 = *(unsigned int *)(param_1 + 0x8c);
      uVar3 = fn_82365BD8(&stack0x00000000 + -0xc0,
                                (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0x308) + 0x40);
      fn_823B7660(uVar8,*puVar4,uVar10,uVar3);
      uVar10 = uVar10 + 1;
    }
    puVar5 = *(unsigned int **)(iVar15 + 0x24);
  }
  puVar4 = (unsigned int *)fn_8265C9E0(0x30);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821A8D8C;
    if (puVar4 + 4 != (unsigned int *)0x0) {
      puVar4[10] = 0;
      puVar4[4] = &lbl_821B28DC;
    }
  }
  puVar5 = (unsigned int *)fn_8265C9E0(0x30);
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_821A8D8C;
    if (puVar5 + 4 != (unsigned int *)0x0) {
      puVar5[10] = 0;
      puVar5[4] = &lbl_821B2914;
    }
  }
  puVar6 = (unsigned int *)fn_8265C9E0(0x30);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    puVar6[1] = 1;
    puVar6[2] = 1;
    *puVar6 = &lbl_821A8D8C;
    if (puVar6 + 4 != (unsigned int *)0x0) {
      puVar6[10] = 0;
      puVar6[4] = &lbl_821B288C;
    }
  }
  piVar14 = puVar4 + 6;
  if (piVar14 == (int *)(&stack0x00000000 + -0xa0)) {
LAB_8235bda8:
    piVar14 = (int *)(&stack0x00000000 + -0xa0);
    (**(int (***)())(*piVar14 + 0xc))(piVar14,0);
  }
  else {
    piVar1 = (int *)puVar4[10];
    if (piVar1 == (int *)0x0) {
LAB_8235bd88:
      puVar7 = (unsigned int *)(&stack0x00000000 + -0xa0);
      uVar8 = (**(int (***)())*puVar7)(puVar7,piVar14);
      puVar4[10] = uVar8;
      if (&stack0x00000000 != (unsigned char *)0xa0) goto LAB_8235bda8;
    }
    else {
      (**(int (***)())(*piVar1 + 0xc))(piVar1,piVar14 != piVar1);
      puVar4[10] = 0;
      if (&stack0x00000000 != (unsigned char *)0xa0) goto LAB_8235bd88;
      puVar4[10] = 0;
    }
  }
  piVar14 = puVar5 + 6;
  if (piVar14 == (int *)(&stack0x00000000 + -0xa0)) {
LAB_8235be84:
    piVar14 = (int *)(&stack0x00000000 + -0xa0);
    (**(int (***)())(*piVar14 + 0xc))(piVar14,0);
  }
  else {
    piVar1 = (int *)puVar5[10];
    if (piVar1 == (int *)0x0) {
LAB_8235be64:
      puVar7 = (unsigned int *)(&stack0x00000000 + -0xa0);
      uVar8 = (**(int (***)())*puVar7)(puVar7,piVar14);
      puVar5[10] = uVar8;
      if (&stack0x00000000 != (unsigned char *)0xa0) goto LAB_8235be84;
    }
    else {
      (**(int (***)())(*piVar1 + 0xc))(piVar1,piVar14 != piVar1);
      puVar5[10] = 0;
      if (&stack0x00000000 != (unsigned char *)0xa0) goto LAB_8235be64;
      puVar5[10] = 0;
    }
  }
  piVar14 = puVar6 + 6;
  if (piVar14 != (int *)(&stack0x00000000 + -0xa0)) {
    piVar1 = (int *)puVar6[10];
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 0xc))(piVar1,piVar14 != piVar1);
      puVar6[10] = 0;
      if (&stack0x00000000 == (unsigned char *)0xa0) {
        puVar6[10] = 0;
        goto LAB_8235bf80;
      }
    }
    puVar7 = (unsigned int *)(&stack0x00000000 + -0xa0);
    uVar8 = (**(int (***)())*puVar7)(puVar7,piVar14);
    puVar6[10] = uVar8;
    if (&stack0x00000000 == (unsigned char *)0xa0) goto LAB_8235bf80;
  }
  piVar14 = (int *)(&stack0x00000000 + -0xa0);
  (**(int (***)())(*piVar14 + 0xc))(piVar14,0);
LAB_8235bf80:
  if (puVar4 != (unsigned int *)0x0) {
    fn_8223AAC0(puVar4);
  }
  fn_823B77E8(*(unsigned int *)(param_1 + 0x8c),&stack0x00000000 + -0xc0,0);
  if (puVar5 != (unsigned int *)0x0) {
    fn_8223AAC0(puVar5);
  }
  fn_823B77E8(*(unsigned int *)(param_1 + 0x8c),&stack0x00000000 + -0xc0,1);
  if (puVar6 != (unsigned int *)0x0) {
    fn_8223AAC0(puVar6);
  }
  fn_823B77E8(*(unsigned int *)(param_1 + 0x8c),&stack0x00000000 + -0xc0,2);
  pppuStack_70 = &ppuStack_80;
  ppuStack_80 = &lbl_821B29F4;
  uStack_7c = CONCAT44(&lbl_8241CF90,*(unsigned int *)(param_1 + 0x2b20));
  fn_8227CB30((unsigned __int64)*(unsigned int *)(param_1 + 0x8c) + 0x38,&stack0x00000000 + -0x80);
  fn_82359C18(&stack0x00000000 + -0x80);
  if (puVar6 != (unsigned int *)0x0) {
    fn_822315A0(puVar6);
  }
  if (puVar5 != (unsigned int *)0x0) {
    fn_822315A0(puVar5);
  }
  if (puVar4 != (unsigned int *)0x0) {
    fn_822315A0(puVar4);
  }
  return;
}

