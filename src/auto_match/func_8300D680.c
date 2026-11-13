extern unsigned int lbl_821AAD20;


double fn_8300D680(int *param_1)

{
  int *piVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  double dVar7;
  double dVar8;
  
  uVar3 = 0;
  dVar8 = (double)lbl_821AAD20;
  piVar2 = param_1;
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    do {
      piVar6 = piVar2 + 3;
      uVar4 = 0;
      if (piVar2[4] - *piVar6 >> 3 != 0) {
        iVar5 = 0;
        do {
          piVar1 = *(int **)(*piVar6 + iVar5 + 4);
          if ((piVar1 != (int *)0x0) &&
             (dVar7 = (double)(**(int (***)())(*piVar1 + 0x2c))(), dVar8 <= dVar7)) {
            dVar8 = dVar7;
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 8;
        } while (uVar4 < (unsigned int)(piVar2[4] - *piVar6 >> 3));
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar6;
    } while (uVar3 < *(unsigned char *)((int)param_1 + 0x4d));
  }
  return dVar8;
}

