extern int fn_82681E98();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_8269F500();
extern int fn_8272A678();
extern int fn_8272B128();
extern int fn_8272B2E8();


void fn_8272B998(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  int iVar4;
  char *pcVar5;
  unsigned __int64 uVar3;
  int iVar6;
  int *piVar7;
  int iVar8;
  __int64 lVar9;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  lVar9 = 0;
  *puVar1 = 2;
  puVar1[4] = 0;
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar4 = (**(int (***)())(**(int **)(param_1 + 8) + 8))(), iVar4 == 4)) {
    piVar7 = (int *)(*(int *)(param_1 + 8) + -0x68);
    if (*(int *)(param_1 + 8) == 0) {
      piVar7 = (int *)0x0;
    }
    if (0 < *(int *)(param_1 + 0x1c)) {
      pcVar5 = (char *)fn_826957D0(param_1,0);
      if (*pcVar5 == '\x01') {
        fn_8272B128(piVar7);
        iVar4 = piVar7[0x28];
        iVar6 = *(int *)(iVar4 + 0x18);
        if (iVar6 != 0) {
          fn_8272A678(iVar6,1);
        }
        *(unsigned int *)(iVar4 + 0x18) = 0;
        *(unsigned char *)(piVar7[0x28] + 0x13f) = *(unsigned char *)(piVar7[0x28] + 0x13f) | 2;
      }
      else {
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        iVar4 = fn_82696958(uVar3,uVar2);
        if (iVar4 == 0) {
          iVar4 = piVar7[0x20];
          if (iVar4 == 0) {
            iVar4 = fn_8269F500(piVar7);
          }
          if (iVar4 == 0) {
            iVar4 = (**(int (***)())(*piVar7 + 0x58))(piVar7);
            iVar4 = *(int *)(iVar4 + 0x78);
          }
          fn_82681E98(piVar7 + 3,0xffffffff820113c0,**(unsigned int **)(iVar4 + 8));
        }
        else {
          iVar6 = (**(int (***)())(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10);
          if (iVar6 == 7) {
            iVar6 = *(int *)(iVar4 + 0x38);
            if (0 < iVar6) {
              iVar8 = 0;
              do {
                fn_8272B2E8(piVar7,param_1,lVar9,*(unsigned int *)(iVar8 + *(int *)(iVar4 + 0x34)));
                lVar9 = lVar9 + 1;
                iVar8 = iVar8 + 4;
              } while ((int)lVar9 < iVar6);
            }
          }
          else {
            uVar3 = fn_826957D0(param_1,0);
            fn_8272B2E8(piVar7,param_1,0,uVar3);
          }
        }
      }
    }
  }
  return;
}

