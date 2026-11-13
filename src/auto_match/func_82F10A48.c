extern int fn_82BA02A8();
extern int fn_82ED7D48();
extern int fn_82ED7E00();
extern int fn_82F0DD50();
extern int fn_82F0E010();
extern int fn_82F0E0D8();
extern int fn_82F0E1E0();
extern int fn_82F0E698();
extern int fn_82F0E920();
extern int fn_82F0FD50();
extern int fn_82F18420();
extern int fn_82F19330();
extern int fn_82F1ABB8();
extern int fn_82F1ED80();


void fn_82F10A48(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int iVar10;
  __int64 lVar11;
  
  uVar7 = 0;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x658) != 0) {
    puVar9 = (unsigned int *)(param_1 + 0xa58);
    do {
      puVar9[0xdd] = 0;
      uVar7 = uVar7 + 1;
      puVar9[0xdc] = 0;
      puVar9[0xda] = 0;
      puVar9[0xdb] = 0;
      puVar9[0xe0] = 0;
      puVar9[0xde] = 0;
      puVar9[0xdf] = 0;
      puVar9[0xe5] = 0;
      puVar9[0xe6] = 0;
      puVar9[0xe1] = 0;
      puVar9[0xe2] = 0;
      puVar9[0xe3] = 0;
      puVar9[0xe4] = 0;
      puVar9[0xee] = 0;
      puVar9[0xef] = 0;
      puVar9[0xea] = 0;
      puVar9[0xe9] = 0;
      puVar9[0xe8] = 0;
      puVar9[0xe7] = 0;
      puVar9[0xeb] = 0;
      puVar9[0xf4] = 0;
      puVar9[0xf3] = 0;
      puVar9 = puVar9 + 0xf2;
      *puVar9 = 0;
      uVar6 = *(unsigned int *)(param_1 + 0x658);
    } while (uVar7 < uVar6);
  }
  if (uVar6 == 1) {
    if (*(int *)(param_1 + 0x6d54) == 0) {
      if (((*(int *)(param_1 + 0xaf0) != 0) && (*(int *)(param_1 + 0xaf0) != 4)) ||
         (*(int *)(param_1 + 0xa0c) != 0)) {
        uVar5 = *(unsigned int *)(param_1 + 0xd4c);
        uVar4 = *(unsigned int *)(param_1 + 0xc40);
        uVar2 = *(unsigned int *)(param_1 + 0xc28);
        goto LAB_82f10b68;
      }
      fn_82ED7D48(param_1,*(unsigned int *)(param_1 + 0xc28),*(unsigned int *)(param_1 + 0xc2c),
                        *(unsigned int *)(param_1 + 0xc40),*(unsigned int *)(param_1 + 0xd48),
                        *(unsigned int *)(param_1 + 0xd4c));
    }
    else {
      uVar5 = *(unsigned int *)(param_1 + 0xd4c);
      uVar4 = *(unsigned int *)(param_1 + 0xc40);
      uVar2 = *(unsigned int *)(param_1 + 0xc28);
      if (*(int *)(param_1 + 0x7b38) == 0) {
        fn_82BA02A8();
      }
      else {
LAB_82f10b68:
        fn_82F1ED80(param_1,uVar2,*(unsigned int *)(param_1 + 0xc2c),uVar4,uVar5);
      }
    }
    if (*(int *)(param_1 + 0x6d54) == 0) {
      if (((*(int *)(param_1 + 0xaf0) != 0) && (*(int *)(param_1 + 0xaf0) != 4)) ||
         (*(int *)(param_1 + 0xa0c) != 0)) {
        uVar5 = *(unsigned int *)(param_1 + 0xd50);
        uVar4 = *(unsigned int *)(param_1 + 0xd4c);
        uVar2 = *(unsigned int *)(param_1 + 0xc40);
        uVar3 = *(unsigned int *)(param_1 + 0xc28);
        goto LAB_82f10bf8;
      }
      fn_82ED7E00(param_1,*(unsigned int *)(param_1 + 0xc28),*(unsigned int *)(param_1 + 0xc2c),
                        *(unsigned int *)(param_1 + 0xc40),*(unsigned int *)(param_1 + 0xd48),
                        *(unsigned int *)(param_1 + 0xd4c),*(unsigned int *)(param_1 + 0xd50));
    }
    else {
      uVar5 = *(unsigned int *)(param_1 + 0xd50);
      uVar4 = *(unsigned int *)(param_1 + 0xd4c);
      uVar2 = *(unsigned int *)(param_1 + 0xc40);
      uVar3 = *(unsigned int *)(param_1 + 0xc28);
      if (*(int *)(param_1 + 0x7b38) == 0) {
        fn_82BA02A8();
      }
      else {
LAB_82f10bf8:
        fn_82F1ABB8(param_1,uVar3,*(unsigned int *)(param_1 + 0xc2c),uVar2,uVar4,uVar5);
      }
    }
    fn_82F0E698(param_1,param_1 + 0xb20);
  }
  if ((*(int *)(param_1 + 0xaf0) == 1) || (*(int *)(param_1 + 0xaf0) == 2)) {
    if ((*(int *)(param_1 + 0x648) != 0) && (*(int *)(param_1 + 0x1db0) != 1)) {
      uVar1 = fn_82F0E010(param_1,*(unsigned int *)(param_1 + 0x658));
      fn_82F0FD50(uVar1,*(unsigned int *)(param_1 + 0x658));
      goto LAB_82f10ccc;
    }
    uVar6 = 0;
    puVar8 = *(unsigned int **)(param_1 + 0x1e54);
    if (*(int *)(param_1 + 0x2d4) != 0) {
      do {
        uVar7 = 0;
        if (*(int *)(param_1 + 0x2d0) != 0) {
          do {
            iVar10 = 0;
            lVar11 = 6;
            *puVar8 = *puVar8 & 0xe8ffffff;
            do {
              *(unsigned char *)((int)puVar8 + iVar10 + 0x38) = 0;
              iVar10 = iVar10 + 1;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + 0x45;
          } while (uVar7 < *(unsigned int *)(param_1 + 0x2d0));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(unsigned int *)(param_1 + 0x2d4));
    }
  }
  fn_82F0DD50(param_1,*(unsigned int *)(param_1 + 0x658));
LAB_82f10ccc:
  if ((*(int *)(param_1 + 0xaf0) == 1) || (*(int *)(param_1 + 0xaf0) == 2)) {
    if (*(int *)(param_1 + 0x6d54) == 0) {
      fn_82F18420(param_1);
      if ((*(int *)(param_1 + 0x202c) != 0) && (*(int *)(param_1 + 4) == 8)) {
        return;
      }
    }
    else if (*(int *)(param_1 + 0x7b38) == 0) {
      fn_82BA02A8(param_1);
      if (*(int *)(param_1 + 0x202c) != 0) {
        return;
      }
    }
    else {
      fn_82BA02A8(param_1);
    }
    if ((*(int *)(param_1 + 0x648) == 0) && (*(int *)(param_1 + 0x658) == 1)) {
      fn_82F0E920(param_1,param_1 + 0xb20);
    }
  }
  if ((*(int *)(param_1 + 0x648) != 0) &&
     (((*(int *)(param_1 + 0xaf0) == 1 || (*(int *)(param_1 + 0xaf0) == 2)) &&
      (*(int *)(param_1 + 0x658) == 1)))) {
    fn_82F0E920(param_1,param_1 + 0xb20);
  }
  if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
    if ((*(unsigned int *)(param_1 + 0x924) & 4) != 0) {
      fn_82F19330(param_1,5);
    }
  }
  else if (*(int *)(param_1 + 0x7b38) == 0) {
    if (*(int *)(param_1 + 0x6d54) == 0) {
      fn_82F19330(param_1,0);
      if (*(int *)(param_1 + 0x89c) == 0) {
        fn_82F19330(param_1,1);
      }
      fn_82F0E0D8(param_1,0,*(unsigned int *)(param_1 + 0x658));
      fn_82F0E1E0();
    }
    else {
      fn_82F19330(param_1,0);
      fn_82BA02A8(param_1);
      fn_82BA02A8(param_1);
      fn_82BA02A8(param_1);
      fn_82BA02A8(param_1);
      if (*(int *)(param_1 + 0x89c) == 0) {
        fn_82BA02A8(param_1);
      }
    }
  }
  else {
    fn_82BA02A8();
    fn_82BA02A8(param_1);
    fn_82BA02A8(param_1);
    if (*(int *)(param_1 + 0x89c) == 0) {
      fn_82BA02A8(param_1);
    }
  }
  if (((*(int *)(param_1 + 0x6d54) != 0) && (*(int *)(param_1 + 0x7b38) == 0)) &&
     ((*(int *)(param_1 + 0xaf0) == 0 || (*(int *)(param_1 + 0xaf0) == 4)))) {
    fn_82F19330(param_1,2);
  }
  if ((*(int *)(param_1 + 4) == 8) &&
     ((*(int *)(param_1 + 0xaf0) == 0 || (*(int *)(param_1 + 0xaf0) == 4)))) {
    fn_82F19330(param_1,4);
  }
  if (*(int *)(param_1 + 0xaf0) == 2) {
    fn_82F19330(param_1,3);
  }
  return;
}

