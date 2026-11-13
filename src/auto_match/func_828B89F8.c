extern unsigned int *auStack_100;
extern unsigned int *auStack_10c;
extern unsigned int *auStack_110;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_f0;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82516FD8();
extern int fn_825174B8();
extern int fn_828A1958();
extern int fn_828AC428();
extern int fn_828AC488();
extern int fn_828AC498();
extern int fn_828B8550();
extern int fn_828BAC68();
extern int fn_828ED9C8();
extern unsigned int iStack_104;
extern unsigned int iStack_a4;
extern unsigned int iStack_ac;
extern unsigned int iStack_c4;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_108;


/* WARNING: Removing unreachable block (ram,0x828b8c5c) */
/* WARNING: Removing unreachable block (ram,0x828b8c90) */
/* WARNING: Removing unreachable block (ram,0x828b8c94) */
/* WARNING: Removing unreachable block (ram,0x828b8ca0) */
/* WARNING: Removing unreachable block (ram,0x828b8ca4) */
/* WARNING: Removing unreachable block (ram,0x828b8cb0) */
/* WARNING: Removing unreachable block (ram,0x828b8e58) */
/* WARNING: Removing unreachable block (ram,0x828b8e98) */

void fn_828B89F8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar13;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  char cVar15;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar14;
  unsigned __int64 uVar12;
  __int64 lVar16;
  unsigned char auStack_110 [4];
  unsigned char auStack_10c [4];
  unsigned int uStack_108;
  int iStack_104;
  unsigned char auStack_100 [16];
  unsigned char auStack_f0 [16];
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  unsigned char auStack_c8 [4];
  int iStack_c4;
  unsigned char auStack_b0 [4];
  int iStack_ac;
  int iStack_a4;
  unsigned char auStack_a0 [160];
  
  (**(int (***)())(**(int **)(param_1 + 0x50) + 4))();
  iVar13 = (*(int **)(param_1 + 0x50))[2];
  if (iVar13 != 1) {
    iVar1 = **(int **)(param_1 + 0x50);
    if (iVar13 == 2) {
      lVar16 = 0;
      iVar13 = (**(int (***)())(iVar1 + 0xc))();
      if (0 < iVar13) {
        do {
          uVar4 = (**(int (***)())(**(int **)(param_1 + 0x50) + 0x24))(*(int **)(param_1 + 0x50),lVar16)
          ;
          uVar5 = (**(int (***)())(**(int **)(param_1 + 0x50) + 0x28))(*(int **)(param_1 + 0x50),lVar16)
          ;
          uVar6 = (**(int (***)())(**(int **)(param_1 + 0x50) + 0x2c))(*(int **)(param_1 + 0x50),lVar16)
          ;
          fn_828AC428(&stack0x00000000 + -0xa0);
          cVar15 = fn_828ED9C8(*(unsigned int *)(param_1 + 0x50));
          if (cVar15 != '\0') {
            lVar7 = (**(int (***)())(**(int **)(param_1 + 0x50) + 0x40))
                              (*(int **)(param_1 + 0x50),lVar16);
            lVar8 = (**(int (***)())(**(int **)(param_1 + 0x50) + 0x3c))
                              (*(int **)(param_1 + 0x50),lVar16);
            lVar9 = (**(int (***)())(**(int **)(param_1 + 0x50) + 0x34))
                              (*(int **)(param_1 + 0x50),lVar16);
            lVar10 = (**(int (***)())(**(int **)(param_1 + 0x50) + 0x30))
                               (*(int **)(param_1 + 0x50),lVar16);
            fn_828AC498(&stack0x00000000 + -0xa0,lVar8,lVar10,lVar8 + lVar7,lVar10 + lVar9);
          }
          piVar2 = *(int **)(*(int *)(param_1 + 0x14) + 0xdc);
          piVar3 = (int *)*piVar2;
          while (piVar3 != piVar2) {
            iVar13 = piVar3[0xb];
            iVar1 = piVar3[10];
            iStack_e0 = 0;
            iStack_dc = 0;
            if ((iVar13 != 0) && (cVar15 = fn_8223AAC0(iVar13), cVar15 != '\0')) {
              iStack_e0 = iVar1;
              iStack_dc = iVar13;
            }
            (**(int (***)())(**(int **)(param_1 + 0x50) + 0x20))
                      (*(int **)(param_1 + 0x50),lVar16,*(unsigned int *)(iStack_e0 + 8),
                       &stack0x00000000 + -0x110);
            if (iStack_dc != 0) {
              fn_822315A0(iStack_dc);
            }
            fn_828A1958(&stack0x00000000 + -0x10c);
            piVar2 = *(int **)(*(int *)(param_1 + 0x14) + 0xdc);
          }
          piVar2 = *(int **)(*(int *)(param_1 + 0x14) + 0xfc);
          piVar3 = (int *)*piVar2;
          while (piVar3 != piVar2) {
            iVar13 = piVar3[0xb];
            iVar1 = piVar3[10];
            iStack_d8 = 0;
            iStack_d4 = 0;
            if ((iVar13 != 0) && (cVar15 = fn_8223AAC0(iVar13), cVar15 != '\0')) {
              iStack_d8 = iVar1;
              iStack_d4 = iVar13;
            }
            uVar11 = (**(int (***)())(**(int **)(param_1 + 0x50) + 0x10))
                               (*(int **)(param_1 + 0x50),lVar16,*(unsigned int *)(iStack_d8 + 8));
            if ((uVar11 & 0xffffffff) != 0) {
              puVar14 = (unsigned int *)fn_828BAC68(&stack0x00000000 + -200,uVar11 + 8);
              iStack_104 = 0;
              if ((unsigned int *)(&stack0x00000000 + -0x108) != puVar14) {
                iStack_104 = puVar14[1];
                puVar14[1] = 0;
                *puVar14 = 0;
              }
              if (iStack_c4 != 0) {
                fn_822315A0();
              }
              uVar12 = fn_825174B8(&stack0x00000000 + -0xb0,&stack0x00000000 + -0xd8,
                                         &stack0x00000000 + -0x108);
              fn_82516FD8(&stack0x00000000 + -0xf0,uVar12);
              if (iStack_a4 != 0) {
                fn_822315A0();
              }
              if (iStack_ac != 0) {
                fn_822315A0();
              }
              if (iStack_104 != 0) {
                fn_822315A0(iStack_104);
              }
            }
            if (iStack_d4 != 0) {
              fn_822315A0(iStack_d4);
            }
            fn_828A1958(&stack0x00000000 + -0x10c);
            piVar2 = *(int **)(*(int *)(param_1 + 0x14) + 0xfc);
          }
          fn_828B8550(param_1,param_2,uVar4,uVar5,uVar6,&stack0x00000000 + -0xa0,
                        &stack0x00000000 + -0x100,&stack0x00000000 + -0xf0);
          fn_828AC488(&stack0x00000000 + -0xa0);
          lVar16 = lVar16 + 1;
          iVar13 = (**(int (***)())(**(int **)(param_1 + 0x50) + 0xc))();
        } while ((int)lVar16 < iVar13);
      }
      (**(int (***)())(**(int **)(param_1 + 0x50) + 8))();
      puVar14 = *(unsigned int **)(param_1 + 0x50);
      if (puVar14 != (unsigned int *)0x0) {
        (**(int (***)())*puVar14)(puVar14,1);
      }
      *(unsigned int *)(param_1 + 0x50) = 0;
      *(unsigned int *)(param_1 + 0x20) = 2;
    }
    else {
      (**(int (***)())(iVar1 + 8))();
      puVar14 = *(unsigned int **)(param_1 + 0x50);
      if (puVar14 != (unsigned int *)0x0) {
        (**(int (***)())*puVar14)(puVar14,1);
      }
      *(unsigned int *)(param_1 + 0x50) = 0;
      *(unsigned int *)(param_1 + 0x20) = 3;
    }
  }
  return;
}

