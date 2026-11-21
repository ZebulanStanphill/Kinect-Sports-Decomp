extern unsigned int lbl_831BC770;

/* WARNING: Inlined function: __savegprlr_25 */

unsigned __int64 fn_83049F98(int param_1,int *param_2)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  int *piVar8;
  int iStack_70;
  unsigned char auStack_6c [12];
  unsigned char auStack_60 [8];
  unsigned int uStack_58;
  
  uVar2 = *(unsigned int *)(param_1 + 0x5c);
  uVar6 = 0x2d;
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_8307DE78(*(int *)(param_1 + 0x28));
    fn_8307E6E0(*(unsigned int *)(param_1 + 0x28));
    uVar6 = fn_83049EC0(param_1,*param_2,&iStack_70,auStack_6c);
    piVar8 = (int *)(param_1 + 0x60);
    lVar7 = 2;
    do {
      if ((*piVar8 != 0) && (iVar4 = fn_8307DD98(*(unsigned int *)(param_1 + 0x28),0), iVar4 == 0)) {
        if (piVar8[1] != 0) {
          (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x30))();
          piVar8[1] = 0;
        }
        *piVar8 = 0;
      }
      lVar7 = lVar7 + -1;
      piVar8 = piVar8 + 2;
    } while (lVar7 != 0);
    *param_2 = iStack_70;
    if (((int)uVar6 == 0x2d) || ((int)uVar6 == 0x11)) {
      fn_8307E060(*(unsigned int *)(param_1 + 0x28));
      goto __restgprlr_25;
    }
    fn_8307E5A8(*(unsigned int *)(param_1 + 0x28));
    *(unsigned int *)(param_1 + 0x28) = 0;
    fn_82FA52E0(lbl_831BC770,*(unsigned int *)(param_1 + 0x70));
    *(unsigned int *)(param_1 + 0x70) = 0;
    fn_83049F40(param_1);
  }
  uVar5 = *param_2 + *(int *)(param_1 + 0x5c);
  uVar3 = *(unsigned int *)(param_1 + 0x78);
  *(unsigned int *)(param_1 + 0x5c) = uVar5;
  if (uVar3 <= uVar5) {
    sVar1 = *(short *)(param_1 + 0x1c);
    if (sVar1 == 1) {
      uVar6 = 0x11;
      *param_2 = (uVar3 - uVar5) + *param_2;
    }
    else {
      if (sVar1 != 0) {
        *(short *)(param_1 + 0x1c) = sVar1 + -1;
      }
      *(unsigned int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - uVar3;
      if (*(short *)(param_1 + 0x1c) == 1) {
        (**(int (***)())(**(int **)(param_1 + 0x2c) + 0xc))(*(int **)(param_1 + 0x2c),auStack_60);
        uStack_58 = 0;
        (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x10))(*(int **)(param_1 + 0x2c),auStack_60);
      }
    }
  }
__restgprlr_25:
  fn_8304D6C8(param_1,uVar2,*param_2,*(unsigned int *)(param_1 + 0x78));
  return uVar6;
}
