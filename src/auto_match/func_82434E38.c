typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_822794D0();
extern int fn_822ABA88();
extern int fn_8233E7C0();
extern int fn_8242C410();
extern int fn_8242CFE0();
extern int fn_8242E3E0();
extern int fn_824329A8();
extern int fn_82435F38();
extern int fn_82436070();
extern int fn_82436FE8();
extern int fn_824376F8();
extern int fn_82437A38();
extern int fn_82437EC8();
extern int fn_8243D2D8();
extern int fn_8265BF48();
extern int fn_8265C9E0();
extern int fn_82672C20();
extern int fn_8288B760();
extern int fn_8289AB78();
extern int fn_828AAF70();
extern unsigned int lbl_821CA460;


void fn_82434E38(double param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int *piVar3;
  int iVar6;
  char cVar9;
  __int64 lVar4;
  char cVar10;
  char cVar11;
  int iVar7;
  unsigned __int64 uVar5;
  unsigned int uVar8;
  unsigned __int64 uVar12;
  unsigned int *puVar13;
  unsigned int uVar14;
  int iVar15;
  bool bVar16;
  unsigned int auStack_40 [16];
  
  *(float *)(*(int *)(param_2 + 0x40) + 0x188) =
       (float)((double)*(float *)(*(int *)(param_2 + 0x40) + 0x188) + param_1);
  *(float *)(*(int *)(param_2 + 0x40) + 0x18c) =
       (float)((double)*(float *)(*(int *)(param_2 + 0x40) + 0x18c) + param_1);
  switch(*(unsigned int *)(param_2 + 0x14)) {
  case 0:
    goto code_r0x82434e9c;
  case 1:
    if (*(char *)(*(int *)(param_2 + 0x40) + 8) == '\0') {
      return;
    }
    uVar12 = 3;
    break;
  case 2:
    if ((*(int **)(param_2 + 0x40))[0x73] != 0) {
      return;
    }
    if (*(int *)(*(int *)(*(int *)(**(int **)(param_2 + 0x40) + 0xd4) + 0xc) + 0x18) == 0) {
      return;
    }
    fn_82437A38(param_2);
    return;
  case 3:
    if ((*(int *)(param_2 + 0x18) == 3) || (bVar16 = true, *(int *)(param_2 + 0x18) == 0)) {
      bVar16 = false;
    }
    if (bVar16) {
      return;
    }
    iVar7 = *(int *)(*(int *)(param_2 + 0x40) + 0xf0);
    if (iVar7 != 0) {
      if (((*(int *)(iVar7 + 0x11c) != 0) || (*(float *)(iVar7 + 0x88) < *(float *)(iVar7 + 0x94)))
         && (*(int *)(*(int *)(param_2 + 0x40) + 0xf4) == 0)) {
        return;
      }
      fn_82435F38(param_2);
      uVar12 = 5;
      break;
    }
    goto code_r0x8243513c;
  case 4:
    iVar7 = *(int *)(*(int *)(param_2 + 0x40) + 0xf0);
    if (((iVar7 != 0) &&
        ((*(int *)(iVar7 + 0x11c) != 0 || (*(float *)(iVar7 + 0x88) < *(float *)(iVar7 + 0x94)))))
       && (*(int *)(*(int *)(param_2 + 0x40) + 0xf4) == 0)) {
      return;
    }
    fn_82435F38(param_2);
code_r0x8243513c:
    uVar12 = 2;
    break;
  case 5:
    if (*(float *)(param_2 + 0x38) <= *(float *)(*(int *)(param_2 + 0x40) + 0x1bc)) {
      return;
    }
    uVar12 = 4;
    break;
  default:
    fn_82436FE8(param_2);
    return;
  case 0x10:
    if ((*(int *)(param_2 + 0x18) == 0x10) || (bVar16 = true, *(int *)(param_2 + 0x18) == 0)) {
      bVar16 = false;
    }
    if (bVar16) {
      return;
    }
    iVar7 = *(int *)(**(int **)(param_2 + 0x40) + 0x94);
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar7 + 0x50);
    }
    if ((iVar7 != 0) && (iVar7 = fn_82436070(param_2), iVar7 != 0)) {
      iVar7 = **(int **)(param_2 + 0x40);
      if (*(int *)(iVar7 + 0x94) == 0) {
        bVar16 = false;
      }
      else {
        bVar16 = *(int *)(*(int *)(iVar7 + 0x94) + 0x1c) != 0;
      }
      if (bVar16) {
        if ((*(int **)(param_2 + 0x40))[0x3e] != 0) {
          fn_8242CFE0(iVar7,0,1,0);
          lVar4 = 1;
          iVar7 = **(int **)(param_2 + 0x40);
          if (1 < *(int *)(*(int *)(iVar7 + 0x174) + 0xbc)) {
            do {
              fn_8242CFE0(iVar7,lVar4,0,0);
              lVar4 = lVar4 + 1;
              iVar7 = **(int **)(param_2 + 0x40);
            } while ((int)lVar4 < *(int *)(*(int *)(iVar7 + 0x174) + 0xbc));
          }
        }
        if (*(int *)(*(int *)(iVar7 + 0x174) + 0x11c) == 0) {
          *(unsigned int *)(*(int *)(iVar7 + 0x174) + 0x11c) = 1;
          iVar7 = *(int *)(iVar7 + 0x94);
          if (iVar7 != 0) {
            *(unsigned int *)(iVar7 + 0x3c) = 1;
            *(unsigned int *)(iVar7 + 0x48) = 0;
          }
        }
        iVar7 = fn_8242E3E0(**(unsigned int **)(param_2 + 0x40));
        if (iVar7 == 0) {
          uVar12 = 0xffffffff821b921c;
        }
        else {
          uVar12 = 0xffffffff821b91fc;
        }
        fn_8243D2D8((unsigned __int64)*(unsigned int *)(**(int **)(param_2 + 0x40) + 0x174) + 8,uVar12,0,0);
        uVar12 = 0x15;
        break;
      }
    }
    if (*(int *)(*(int *)(param_2 + 0x40) + 0x1a0) != 0) {
code_r0x824352dc:
      uVar12 = 0x13;
      break;
    }
    if (*(int *)(*(int *)(param_2 + 0x40) + 0x198) == 0) {
      fn_824376F8(param_2);
    }
    piVar3 = *(int **)(param_2 + 0x40);
    if (piVar3[0x66] == 0) {
      return;
    }
    iVar7 = *(int *)(*piVar3 + 0xa0);
    if (((iVar7 == 0) || (*(int *)(iVar7 + 0x40) != 1)) &&
       (iVar7 = *(int *)(*(int *)(*piVar3 + 0x174) + 0x5c),
       (*(int *)(iVar7 + 0x1c8) - *(int *)(iVar7 + 0x1c4) & 0xfffffffcU) != 4)) {
      if ((piVar3[0x3e] != 0) ||
         (bVar16 = false,
         *(int *)(*(int *)(param_2 + 0x40) + 0x14c) + 1 ==
         *(int *)(*(int *)(param_2 + 0x40) + 0x158))) {
        bVar16 = true;
      }
      if (bVar16) {
        if (piVar3[0x3e] == 0) goto code_r0x824353d4;
        uVar14 = 0;
        uVar1 = (piVar3[0x4a] - piVar3[0x49]) / 0x5c;
        if (uVar1 != 0) {
          iVar7 = 0;
          do {
            if (*(int *)(iVar7 + piVar3[0x49] + 0x4c) == 2) goto code_r0x824353dc;
            uVar14 = uVar14 + 1;
            iVar7 = iVar7 + 0x5c;
          } while (uVar14 < uVar1);
        }
code_r0x824353c8:
        bVar16 = true;
        goto code_r0x824353cc;
      }
    }
    goto code_r0x82435694;
  case 0x11:
    puVar13 = *(unsigned int **)(param_2 + 0x40);
    bVar16 = true;
    iVar15 = 0;
    uVar5 = (unsigned __int64)*puVar13;
    iVar7 = fn_8242C410(uVar5);
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        piVar3 = *(int **)(**(int **)((int)uVar5 + 8) + iVar7);
        iVar6 = fn_822ABA88(*(unsigned int *)(piVar3[4] * 4 + *piVar3),0);
        piVar3 = *(int **)(iVar6 + 0x168);
        if ((piVar3 != (int *)0x0) && (cVar9 = fn_8288B760(piVar3), cVar9 != '\0')) {
          lVar4 = (**(int (***)())(*piVar3 + 8))(piVar3);
          fn_8233E7C0(lVar4 + 0x48c,0,0);
          fn_8233E7C0(lVar4 + 0x48c,0,1);
          lVar4 = (**(int (***)())(*piVar3 + 8))(piVar3);
          cVar9 = fn_8289AB78(lVar4 + 0x48c);
          lVar4 = (**(int (***)())(*piVar3 + 8))(piVar3);
          fn_828AAF70(lVar4 + 0x588,0);
          lVar4 = (**(int (***)())(*piVar3 + 8))(piVar3);
          cVar10 = fn_8289AB78(lVar4 + 0x588);
          lVar4 = (**(int (***)())(*piVar3 + 8))(piVar3);
          fn_828AAF70(lVar4 + 0x5dc,0);
          lVar4 = (**(int (***)())(*piVar3 + 8))(piVar3);
          cVar11 = fn_8289AB78(lVar4 + 0x5dc);
          bVar16 = (bool)(cVar11 != '\0' & cVar10 != '\0' & cVar9 != '\0' & bVar16);
        }
        puVar13 = *(unsigned int **)(param_2 + 0x40);
        iVar15 = iVar15 + 1;
        iVar7 = iVar7 + 4;
        uVar5 = (unsigned __int64)*puVar13;
        iVar6 = fn_8242C410(uVar5);
      } while (iVar15 < iVar6);
    }
    if (*(char *)(puVar13 + 2) != '\0') {
      return;
    }
    if (!bVar16) {
      return;
    }
    goto code_r0x82434e9c;
  case 0x12:
    if ((*(float *)(*(int *)(param_2 + 0x40) + 0x1b4) < *(float *)(param_2 + 0x38)) &&
       (*(int *)(*(int *)(param_2 + 0x40) + 0x1b8) == 0)) {
      iVar7 = *(int *)(**(int **)(param_2 + 0x40) + 0xd4);
      (*(int **)(param_2 + 0x40))[0x6e] = 1;
      if (((*(int *)(*(int *)(param_2 + 0x40) + 0xf8) != 0) ||
          (*(int *)(*(int *)(param_2 + 0x40) + 0x148) + 1 ==
           *(int *)(*(int *)(param_2 + 0x40) + 0x154))) &&
         (iVar7 = *(int *)(*(int *)(iVar7 + 0x48) + 0x28), iVar7 != 0)) {
        fn_82672C20(iVar7,0xffffffff821ac348,0,0);
      }
    }
    if (*(float *)(param_2 + 0x38) <= *(float *)(*(int *)(param_2 + 0x40) + 0x1b0)) {
      return;
    }
    goto code_r0x82435694;
  case 0x14:
    if (*(float *)(param_2 + 0x38) <= *(float *)(*(int *)(param_2 + 0x40) + 0x194)) {
      return;
    }
    uVar12 = 10;
    break;
  case 0x15:
    if ((*(int *)(param_2 + 0x18) == 0x15) || (bVar16 = true, *(int *)(param_2 + 0x18) == 0)) {
      bVar16 = false;
    }
    if (bVar16) {
      return;
    }
    if (*(int *)(*(int *)(**(int **)(param_2 + 0x40) + 0x174) + 0x11c) != 0) {
      return;
    }
    iVar7 = fn_8242E3E0();
    if (iVar7 != 0) {
      auStack_40[0] = fn_8265BF48(0xffffffff821b9230,0);
      if (*(int *)(*(int *)(param_2 + 0x40) + 0x200) != 0) {
        return;
      }
      uVar5 = fn_8265C9E0(0x130);
      if ((uVar5 & 0xffffffff) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = fn_822794D0(uVar5,auStack_40,0,3,0);
      }
      puVar2 = *(unsigned int **)(*(int *)(param_2 + 0x40) + 0x200);
      *(unsigned int *)(*(int *)(param_2 + 0x40) + 0x200) = uVar8;
      if (puVar2 != (unsigned int *)0x0) {
        (**(int (***)())*puVar2)(puVar2,1);
      }
      *(unsigned int *)(*(int *)(*(int *)(**(int **)(param_2 + 0x40) + 0x174) + 100) + 8) =
           lbl_821CA460;
      fn_824329A8((unsigned __int64)*(unsigned int *)(**(int **)(param_2 + 0x40) + 0x174) + 0x60,8);
      fn_8243D2D8((unsigned __int64)*(unsigned int *)(**(int **)(param_2 + 0x40) + 0x174) + 8,
                        0xffffffff821b9268,0,0);
      return;
    }
    if (*(int *)(*(int *)(param_2 + 0x40) + 0x1a0) != 0) goto code_r0x824352dc;
    if (*(int *)(*(int *)(param_2 + 0x40) + 0x198) == 0) {
      fn_824376F8(param_2);
    }
    piVar3 = *(int **)(param_2 + 0x40);
    if (piVar3[0x66] == 0) {
      return;
    }
    iVar7 = *(int *)(*piVar3 + 0xa0);
    if (((iVar7 == 0) || (*(int *)(iVar7 + 0x40) != 1)) &&
       (iVar7 = *(int *)(*(int *)(*piVar3 + 0x174) + 0x5c),
       (*(int *)(iVar7 + 0x1c8) - *(int *)(iVar7 + 0x1c4) & 0xfffffffcU) != 4)) {
      if ((piVar3[0x3e] != 0) ||
         (bVar16 = false,
         *(int *)(*(int *)(param_2 + 0x40) + 0x14c) + 1 ==
         *(int *)(*(int *)(param_2 + 0x40) + 0x158))) {
        bVar16 = true;
      }
      if (bVar16) {
        if (piVar3[0x3e] != 0) {
          uVar14 = 0;
          uVar1 = (piVar3[0x4a] - piVar3[0x49]) / 0x5c;
          if (uVar1 != 0) {
            iVar7 = 0;
            do {
              if (*(int *)(piVar3[0x49] + iVar7 + 0x4c) == 2) goto code_r0x824353dc;
              uVar14 = uVar14 + 1;
              iVar7 = iVar7 + 0x5c;
            } while (uVar14 < uVar1);
          }
          goto code_r0x824353c8;
        }
        goto code_r0x824353d4;
      }
    }
code_r0x82435694:
    uVar12 = 0x11;
  }
code_r0x82434ea0:
  fn_82437EC8(param_2,uVar12);
  return;
code_r0x824353dc:
  bVar16 = false;
code_r0x824353cc:
  if (bVar16) {
code_r0x824353d4:
    uVar12 = 0x12;
    goto code_r0x82434ea0;
  }
  goto code_r0x82435694;
code_r0x82434e9c:
  uVar12 = 1;
  goto code_r0x82434ea0;
}

