extern int fn_8301BCA0();
extern int fn_8301C090();
extern int fn_8301D4F0();
extern int fn_83026B30();
extern int fn_83037500();
extern int fn_8303A630();


unsigned char fn_8301D698(int param_1,int param_2)

{
  unsigned short uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  unsigned char bVar6;
  unsigned __int64 uVar7;
  char acStack_60 [16];
  
  if (*(int *)(param_1 + 8) != 1) {
    return 0;
  }
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 0xfc) + 8);
  iVar3 = (**(int (***)())(*piVar2 + 0x2c))(piVar2);
  if ((iVar3 != -1) && (*(unsigned char *)(param_2 + 0x353) = 1, iVar3 == 0)) {
LAB_8301d86c:
    fn_8303A630(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xfc));
    *(unsigned int *)(param_1 + 8) = 2;
    return 0;
  }
  (**(int (***)())(*piVar2 + 0x24))(piVar2,param_1 + 0x160);
  fn_83037500(param_2,*(unsigned int *)(piVar2[0x1b] + 0x24) >> 0xe);
  fn_8301C090(param_1,*(unsigned char *)(param_2 + 0x350),piVar2,param_2,acStack_60);
  if ((*(char *)(param_1 + 0x3e) == '\0') || (cVar5 = '\0', acStack_60[0] == '\0')) {
    cVar5 = '\x01';
  }
  if ((acStack_60[0] != '\0') || ((*(unsigned char *)((int)piVar2 + 0xda) & 2) != 0)) {
    if ((*(unsigned char *)((int)piVar2 + 0xd9) & 2) == 0) {
      if ((*(unsigned char *)((int)piVar2 + 0xda) & 0x80) != 0) {
        *(unsigned char *)(param_2 + 0x352) = 1;
      }
    }
    else {
      *(unsigned char *)(param_2 + 0x353) = 1;
    }
  }
  *(char *)(param_2 + 0x351) = cVar5;
  iVar3 = *(int *)(param_1 + 0xc);
  bVar6 = 1;
  if (cVar5 == '\0') {
    if (*(int *)(param_1 + 0x194) == 2) {
      bVar6 = 0;
      if (*(char *)(param_1 + 0x3d) != '\0') {
        (**(int (***)())(*(int *)(iVar3 + 0xc0) + 0x10))(iVar3 + 0xc0,*(unsigned int *)(param_1 + 400));
      }
      if (*(int *)(param_1 + 400) == 0) {
        (**(int (***)())(*(int *)(*(int *)(param_1 + 0xc) + 0xc0) + 8))(*(int *)(param_1 + 0xc) + 0xc0);
      }
      else if (*(int *)(param_1 + 400) == 1) {
        (**(int (***)())(*(int *)(*(int *)(param_1 + 0xc) + 0xc0) + 8))(*(int *)(param_1 + 0xc) + 0xc0);
        uVar1 = *(unsigned short *)(param_2 + 0xc);
        if (piVar2[0x4d] < (int)(unsigned int)uVar1) {
          iVar4 = fn_8301D4F0(param_1,uVar1);
          if (iVar4 == 0x11) {
            fn_8303A630(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xfc));
            *(unsigned int *)(param_1 + 8) = 2;
          }
        }
        else {
          piVar2[0x4d] = piVar2[0x4d] - (unsigned int)uVar1;
        }
      }
      goto LAB_8301d9c4;
    }
    if (*(int *)(param_1 + 0x194) != 1) goto LAB_8301d9c4;
    fn_8303A630(*(unsigned int *)(iVar3 + 0xfc));
    *(unsigned int *)(param_1 + 8) = 2;
  }
  else {
    if (((*(char *)(param_1 + 0x3d) != '\0') &&
        ((*(unsigned char *)(*(int *)(iVar3 + 0xfc) + 0xc) & 0x80) != 0)) || (*(int *)(param_1 + 0x194) != 2)
       ) goto LAB_8301d9c4;
    if ((*(unsigned char *)(*(int *)(iVar3 + 0xfc) + 0xc) & 0x80) != 0) {
      uVar7 = 0;
      iVar4 = (**(int (***)())(*piVar2 + 0x34))(piVar2,*(unsigned int *)(param_1 + 400));
      if (iVar4 == 1) {
        fn_83026B30(*(unsigned int *)(param_1 + 0xc));
        uVar7 = 1;
      }
      else if (iVar4 == 2) goto LAB_8301d86c;
      iVar4 = (**(int (***)())(*(int *)(*(int *)(param_1 + 0xc) + 0xc0) + 0x14))
                        (*(int *)(param_1 + 0xc) + 0xc0,*(unsigned int *)(param_1 + 400),uVar7);
      if (iVar4 != 1) {
        fn_8303A630(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xfc));
        *(unsigned int *)(param_1 + 8) = 2;
        return 0;
      }
      goto LAB_8301d9c4;
    }
    iVar4 = fn_8301BCA0(param_1);
    if (iVar4 == 0x3f) {
      cVar5 = '\0';
    }
    else {
      if (iVar4 == 1) goto LAB_8301d9c4;
      fn_8303A630(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xfc));
      cVar5 = '\0';
      *(unsigned int *)(param_1 + 8) = 2;
    }
  }
  bVar6 = 0;
LAB_8301d9c4:
  *(char *)(param_1 + 0x3d) = cVar5;
  *(char *)(param_1 + 0x3e) = acStack_60[0];
  if ((cVar5 != '\0') || (bVar6 != 0)) {
    if ((int)(unsigned int)*(unsigned short *)(param_2 + 0xc) <= piVar2[0x4d]) {
      piVar2[0x4d] = piVar2[0x4d] - (unsigned int)*(unsigned short *)(param_2 + 0xc);
      bVar6 = -(*(char *)(iVar3 + 0xba) == '\0') & bVar6;
    }
  }
  *(unsigned char *)(param_1 + 0x3c) = 1;
  return bVar6;
}

