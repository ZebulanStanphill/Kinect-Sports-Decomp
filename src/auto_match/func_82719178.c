typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_a0;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826A76D0();
extern int fn_826A7720();
extern int fn_826AA930();
extern int fn_826BD928();
extern int fn_826C7030();
extern int fn_82700248();
extern int fn_827167C8();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int uStack_90;


unsigned __int64 fn_82719178(int *param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  unsigned int uVar6;
  int *piVar7;
  int iVar8;
  unsigned __int64 uVar4;
  char cVar10;
  __int64 lVar5;
  int iVar9;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  int iVar17;
  int aiStack_b0 [4];
  unsigned char auStack_a0 [16];
  unsigned int uStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  if (((unsigned int)param_1[0x23] >> 4 & 1) == 0) {
    return 0;
  }
  uVar12 = 0;
  if (*(char *)(param_2 + 3) != '\0') goto LAB_8271948c;
  iVar9 = *param_2;
  if (iVar9 == 0x400) {
LAB_82719210:
    param_1[0x2e] = 1;
  }
  else if (iVar9 == 0x800) {
LAB_82719208:
    param_1[0x2e] = 2;
  }
  else {
    if (iVar9 != 0x1000) {
      if (iVar9 == 0x2000) goto LAB_82719208;
      if (iVar9 != 0x4000) {
        if (iVar9 == 0x8000) goto LAB_82719210;
        if (iVar9 != 0x10000) goto LAB_82719218;
        if (((unsigned int)param_1[0x23] >> 0xd & 1) == 0) goto LAB_82719208;
      }
    }
    param_1[0x2e] = 0;
  }
LAB_82719218:
  if (*(int *)(param_1[0x27] + 0x10) != 0) {
    iVar9 = *param_2;
    if (iVar9 == 0x400) {
      lVar5 = 2;
    }
    else if (iVar9 == 0x800) {
      lVar5 = 3;
    }
    else if (iVar9 == 0x2000) {
      lVar5 = 1;
    }
    else {
      lVar5 = -(unsigned __int64)(iVar9 != 0x4000);
    }
    piVar7 = *(int **)(param_1[0x27] + 0x10);
    (**(int (***)())(*piVar7 + 4))(piVar7,param_1,lVar5);
  }
  iVar9 = *param_2;
  uVar13 = 0;
  uVar6 = 0;
  if (iVar9 == 0x2000) {
    uVar13 = 1;
  }
  else if (iVar9 == 0x4000) {
    uVar13 = 2;
  }
  else if (iVar9 == 0x400) {
    uVar13 = 4;
  }
  else if (iVar9 == 0x800) {
    uVar13 = 8;
  }
  else if (iVar9 == 0x10000) {
    uVar13 = 0x10;
  }
  else if (iVar9 == 0x8000) {
    uVar13 = 0x20;
  }
  else if (iVar9 == 0x1000) {
    uVar13 = 0x40;
  }
  else if (iVar9 == 0x20000) {
    uVar6 = fn_826A7720(param_2);
  }
  fn_827167C8(param_1);
  if ((((unsigned __int64)(unsigned int)param_1[8] != 0) &&
      (piVar7 = (int *)fn_826BD928((unsigned __int64)(unsigned int)param_1[8] + 0x68), piVar7 != (int *)0x0))
     && (uVar14 = 0, *(int *)(param_1[0x27] + 0x28) != 0)) {
    iVar9 = 0;
    do {
      uVar1 = *(unsigned int *)(*(int *)(param_1[0x27] + 0x24) + iVar9);
      uVar11 = uVar1 & uVar13;
      if ((CONCAT44(uVar11,uVar11) != 0) ||
         ((0 < (int)uVar6 && (((int)uVar1 >> 9 & 0x7fU) == uVar6)))) {
        iVar8 = (**(int (***)())(*piVar7 + 0x5c))(piVar7);
        uVar16 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1[0x27] + 0x24) + iVar9 + 8);
        if (uVar16 != 0) {
          iVar17 = 0;
          uVar15 = uVar16;
          do {
            iVar2 = *(int *)(*(int *)(*(int *)(param_1[0x27] + 0x24) + iVar9 + 4) + iVar17);
            if ((*(int *)(iVar2 + 0xc) == 0) || (bVar3 = false, **(char **)(iVar2 + 8) == '\0')) {
              bVar3 = true;
            }
            if (!bVar3) {
              uVar4 = fn_8267B890(*(unsigned int *)(*(int *)(iVar8 + 0x78) + 0x288),0x20,0);
              if ((uVar4 & 0xffffffff) == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = fn_826AA930(uVar4,(int *)(iVar8 + 0x78),
                                          *(unsigned int *)
                                           (*(int *)(*(int *)(param_1[0x27] + 0x24) + iVar9 + 4) +
                                           iVar17));
              }
              fn_826C7030(piVar7,uVar4,4);
              if ((uVar4 & 0xffffffff) != 0) {
                fn_8267C498(uVar4);
              }
            }
            uVar15 = uVar15 - 1;
            iVar17 = iVar17 + 4;
          } while (uVar15 != 0);
          if (uVar16 != 0) {
            uVar12 = 1;
          }
        }
      }
      uVar14 = uVar14 + 1;
      iVar9 = iVar9 + 0x10;
    } while (uVar14 < *(unsigned int *)(param_1[0x27] + 0x28));
  }
LAB_8271948c:
  uVar16 = (**(int (***)())(*param_1 + 0x5c))(param_1);
  if ((uVar16 & 0xffffffff) != 0) {
    fn_826A76D0(aiStack_b0,param_2,uVar16 + 0x78);
    if (*(int *)(aiStack_b0[0] + 0x10) != 0) {
      auStack_a0[0] = 0;
      cVar10 = (**(int (***)())(param_1[0x1a] + 0x2c))
                         (param_1 + 0x1a,uVar16 + 0x78,aiStack_b0,auStack_a0);
      if (cVar10 != '\0') {
        uVar12 = 1;
        lVar5 = (**(int (***)())(*param_1 + 0x40))(param_1);
        iVar9 = fn_82700248(lVar5 + 0xa2c,4);
        if (iVar9 != 0) {
          iStack_8c = param_2[1];
          iStack_88 = param_2[2];
          iStack_84 = param_2[3];
          *(unsigned int *)(iVar9 + 4) = 2;
          param_1[1] = param_1[1] + 1;
          if (*(int *)(iVar9 + 8) != 0) {
            fn_8267C498();
          }
          *(int **)(iVar9 + 8) = param_1;
          if (*(int *)(iVar9 + 0xc) != 0) {
            fn_8267C498();
          }
          *(unsigned int *)(iVar9 + 0xc) = 0;
          *(unsigned int *)(iVar9 + 0x10) = uStack_90;
          *(int *)(iVar9 + 0x14) = iStack_8c;
          *(int *)(iVar9 + 0x18) = iStack_88;
          *(int *)(iVar9 + 0x1c) = iStack_84;
        }
      }
      fn_82696330(auStack_a0);
    }
    lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_b0[0] + 8) - 1;
    *(int *)(aiStack_b0[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_b0[0]);
    }
  }
  return uVar12;
}

