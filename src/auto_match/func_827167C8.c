typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern unsigned int *auStack_b8;
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_8269A190();
extern int fn_8269A858();
extern int fn_8269A990();
extern int fn_8269AD40();
extern int fn_8269B718();
extern int fn_826B0F10();
extern int fn_826C3768();
extern int fn_826CD420();
extern int fn_826CD840();
extern int fn_826D1050();
extern int fn_826DBC20();
extern int fn_826DCF88();
extern int fn_82700248();
extern int fn_82715750();
extern int fn_82F68CC0();
extern unsigned int iStack_6c;
extern unsigned int iStack_a4;
extern unsigned int iStack_c0;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_bc;


void fn_827167C8(int *param_1)

{
  int *piVar1;
  bool bVar2;
  unsigned int uVar3;
  int *piVar8;
  __int64 lVar4;
  int iVar9;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  char cVar10;
  unsigned __int64 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  unsigned int uVar15;
  int iVar16;
  int iStack_c0;
  unsigned int uStack_bc;
  unsigned int auStack_b8 [2];
  int *piStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  int iStack_a4;
  unsigned char bStack_a0;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned char auStack_70 [4];
  int iStack_6c;
  
  iVar9 = param_1[0x27];
  uVar11 = 0;
  if (*(int *)(iVar9 + 0x1c) != 0) {
    iVar13 = 0;
    iVar12 = 0;
    do {
      iVar14 = *(int *)(iVar9 + 0x18) + iVar12;
      iVar9 = param_1[0x2e];
      if (*(int *)(iVar13 + param_1[0x29]) == 0) {
        if ((((iVar9 == 0) && ((*(unsigned char *)(iVar14 + 0x48) & 8) != 0)) ||
            ((iVar9 == 1 && ((*(unsigned char *)(iVar14 + 0x48) & 2) != 0)))) ||
           ((iVar9 == 2 && ((*(unsigned char *)(iVar14 + 0x48) & 4) != 0)))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) || ((*(unsigned char *)(iVar14 + 0x48) & 1) != 0)) {
          uStack_bc = *(unsigned int *)(iVar14 + 0x3c);
          fn_826DCF88(&piStack_b0,param_1[0x1f],&uStack_bc);
          if (piStack_b0 != (int *)0x0) {
            uStack_bc = *(unsigned int *)(iVar14 + 0x3c);
            iVar16 = *(int *)(param_1[0x27] + 0x18) + iVar12;
            piVar8 = (int *)(**(int (***)())(*piStack_b0 + 0x24))
                                      (piStack_b0,param_1,&uStack_bc,uStack_ac);
            iVar9 = param_1[0x29];
            if (piVar8 != (int *)0x0) {
              piVar8[1] = piVar8[1] + 1;
            }
            if (*(int *)(iVar13 + iVar9) != 0) {
              fn_8267C498();
            }
            *(int **)(iVar13 + iVar9) = piVar8;
            piVar8[0x11] = *(int *)(iVar16 + 4);
            piVar8[0x12] = *(int *)(iVar16 + 8);
            piVar8[0x13] = *(int *)(iVar16 + 0xc);
            piVar8[0x14] = *(int *)(iVar16 + 0x10);
            piVar8[0x15] = *(int *)(iVar16 + 0x14);
            piVar8[0x16] = *(int *)(iVar16 + 0x18);
            fn_82F68CC0(piVar8 + 9,iVar16 + 0x1c,0x20);
            (**(int (***)())(*piVar8 + 4))(piVar8);
            (**(int (***)())(*piVar8 + 0x18))(piVar8,*(unsigned int *)(iVar14 + 0x44));
            *(unsigned char *)((int)piVar8 + 0x66) = *(unsigned char *)((int)piVar8 + 0x66) & 0xfe;
            for (piVar1 = (int *)piVar8[8]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
              iVar9 = (**(int (***)())(*piVar1 + 0x38))(piVar1);
              if (iVar9 != 0) {
                *(unsigned char *)((int)piVar8 + 0x66) = *(unsigned char *)((int)piVar8 + 0x66) | 1;
                (**(int (***)())(*piVar8 + 0x3c))(piVar8);
                break;
              }
            }
            uVar15 = -(unsigned int)((*(unsigned char *)((int)piVar8 + 0x66) & 0x80) != 0) & (unsigned int)piVar8;
            if (uVar15 != 0) {
              lVar4 = (**(int (***)())(*param_1 + 0x40))(param_1);
              iVar9 = (**(int (***)())(*(int *)(uVar15 + 0x68) + 8))(uVar15 + 0x68);
              if (iVar9 == 2) {
                uVar5 = (**(int (***)())(*param_1 + 0xb0))(param_1);
                bStack_a0 = 0;
                uStack_a8 = 0;
                iStack_a4 = 0;
                auStack_b8[0] = *(unsigned int *)(iVar14 + 0x3c);
                uVar6 = (**(int (***)())(*piVar8 + 0x48))(piVar8);
                lVar7 = fn_826DBC20(uVar6,auStack_b8);
                if (lVar7 != 0) {
                  iVar9 = (**(int (***)())(*param_1 + 0x5c))(param_1);
                  fn_8269A190(&iStack_c0,(unsigned __int64)*(unsigned int *)(iVar9 + 0x78) + 0x254,lVar7);
                  lVar7 = (**(int (***)())(*param_1 + 0x5c))(param_1);
                  cVar10 = fn_826B0F10(uVar5,lVar7 + 0x78,&iStack_c0,&uStack_a8);
                  if (cVar10 == '\0') {
                    uStack_98 = 0;
                    auStack_70[0] = 5;
                    uStack_94 = 0;
                    uStack_90 = 0;
                    iStack_6c = iStack_c0;
                    *(int *)(iStack_c0 + 8) = *(int *)(iStack_c0 + 8) + 1;
                    fn_826CD420(&uStack_98,auStack_70);
                    fn_82696330(auStack_70);
                    iVar9 = fn_82700248(lVar4 + 0xa2c,3);
                    if (iVar9 != 0) {
                      *(unsigned int *)(iVar9 + 4) = 4;
                      *(int *)(uVar15 + 4) = *(int *)(uVar15 + 4) + 1;
                      if (*(int *)(iVar9 + 8) != 0) {
                        fn_8267C498();
                      }
                      *(unsigned int *)(iVar9 + 8) = uVar15;
                      if (*(int *)(iVar9 + 0xc) != 0) {
                        fn_8267C498();
                      }
                      *(unsigned int *)(iVar9 + 0xc) = 0;
                      *(int (***)())(iVar9 + 0x2c) = fn_826D1050;
                      fn_826CD840(iVar9 + 0x30,&uStack_98);
                    }
                    uVar3 = uStack_98;
                    fn_8269A990(uStack_98,uStack_94);
                    fn_8267BE38(uVar3);
                  }
                  else {
                    lVar7 = (unsigned __int64)uStack_a8 + 0x10;
                    if ((unsigned __int64)uStack_a8 == 0) {
                      lVar7 = 0;
                    }
                    fn_8269A858(uVar15,lVar7);
                    iVar9 = fn_82700248(lVar4 + 0xa2c,3);
                    if (iVar9 != 0) {
                      uStack_7c = 0;
                      *(unsigned int *)(iVar9 + 4) = 2;
                      *(int *)(uVar15 + 4) = *(int *)(uVar15 + 4) + 1;
                      uStack_78 = 0xff;
                      uStack_74 = uStack_74 & 0xffff;
                      if (*(int *)(iVar9 + 8) != 0) {
                        fn_8267C498();
                      }
                      *(unsigned int *)(iVar9 + 8) = uVar15;
                      if (*(int *)(iVar9 + 0xc) != 0) {
                        fn_8267C498();
                      }
                      *(unsigned int *)(iVar9 + 0xc) = 0;
                      *(unsigned int *)(iVar9 + 0x10) = uStack_80;
                      *(unsigned int *)(iVar9 + 0x14) = uStack_7c;
                      *(unsigned int *)(iVar9 + 0x18) = uStack_78;
                      *(unsigned int *)(iVar9 + 0x1c) = uStack_74;
                    }
                    iVar9 = fn_82700248(lVar4 + 0xa2c,3);
                    if (iVar9 != 0) {
                      *(unsigned int *)(iVar9 + 4) = 3;
                      *(int *)(uVar15 + 4) = *(int *)(uVar15 + 4) + 1;
                      if (*(int *)(iVar9 + 8) != 0) {
                        fn_8267C498();
                      }
                      *(unsigned int *)(iVar9 + 8) = uVar15;
                      if (*(int *)(iVar9 + 0xc) != 0) {
                        fn_8267C498();
                      }
                      *(unsigned int *)(iVar9 + 0xc) = 0;
                      fn_826C3768(iVar9 + 0x20,&uStack_a8);
                    }
                  }
                  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_c0 + 8) - 1;
                  *(int *)(iStack_c0 + 8) = (int)lVar7;
                  if (lVar7 == 0) {
                    fn_826944C8(iStack_c0);
                  }
                }
                if (((bStack_a0 & 2) == 0) && (uStack_a8 != 0)) {
                  fn_826824B0();
                }
                uStack_a8 = 0;
                if (((bStack_a0 & 1) == 0) && (iStack_a4 != 0)) {
                  fn_826824B0();
                }
                iStack_a4 = 0;
              }
              fn_8269AD40(uVar15,lVar4);
              fn_8269B718(uVar15,lVar4);
              (**(int (***)())(*piVar8 + 0x70))(piVar8);
            }
            fn_8267C498(piVar8);
          }
        }
      }
      else {
        if ((((iVar9 == 0) && ((*(unsigned char *)(iVar14 + 0x48) & 8) != 0)) ||
            ((iVar9 == 1 && ((*(unsigned char *)(iVar14 + 0x48) & 2) != 0)))) ||
           ((iVar9 == 2 && ((*(unsigned char *)(iVar14 + 0x48) & 4) != 0)))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((!bVar2) && ((*(unsigned char *)(iVar14 + 0x48) & 1) == 0)) {
          fn_82715750(param_1,uVar11);
        }
      }
      iVar9 = param_1[0x27];
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 0x4c;
      iVar13 = iVar13 + 4;
    } while ((uVar11 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar9 + 0x1c));
  }
  return;
}

