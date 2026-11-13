typedef unsigned char bool;
extern int fn_82FB7748();


unsigned __int64 fn_82FB2A30(unsigned __int64 param_1,int param_2,int *param_3,unsigned int param_4)

{
  bool bVar1;
  unsigned char bVar2;
  int *piVar3;
  int *piVar4;
  char cVar6;
  int iVar5;
  unsigned int uVar7;
  int iVar8;
  
  uVar7 = 0;
  if (param_4 != 0) {
    iVar8 = 0;
    do {
      piVar3 = (int *)*param_3;
      *param_3 = (int)(piVar3 + 6);
      piVar4 = *(int **)(*(int *)(param_2 + 0x10) + iVar8);
      if (*piVar3 == 0) {
        cVar6 = (**(int (***)())(*piVar4 + 4))(piVar4);
        if (cVar6 != '\0') {
          return 1;
        }
        if (*(short *)(piVar4 + 10) != *(short *)(piVar3 + 5)) {
          return 1;
        }
        if ((unsigned int)*(unsigned short *)(piVar4 + 3) != (int)*(short *)(piVar3 + 4)) {
          return 1;
        }
        if (*(short *)((int)piVar4 + 0xe) != *(short *)((int)piVar3 + 0x12)) {
          return 1;
        }
        if (piVar4[7] != piVar3[3]) {
          return 1;
        }
        iVar5 = fn_82FB7748(piVar4);
        bVar2 = *(unsigned char *)((int)piVar3 + 0x17);
        if (iVar5 != (unsigned int)bVar2 + (-(unsigned int)(bVar2 == 0) - (bVar2 - 1))) {
          return 1;
        }
        if (piVar4[2] != piVar3[1]) {
          return 1;
        }
        if (piVar4[5] - piVar4[4] >> 2 != piVar3[2]) {
          return 1;
        }
        if (piVar3[2] == 0) {
          return 0;
        }
        cVar6 = ((int (*)())fn_82FB2A30)(param_1,piVar4,param_3);
        bVar1 = cVar6 == '\0';
      }
      else {
        cVar6 = (**(int (***)())(*piVar4 + 4))(piVar4);
        if (cVar6 == '\0') {
          return 1;
        }
        if ((unsigned int)*(unsigned short *)(piVar4 + 3) != (int)*(short *)(piVar3 + 4)) {
          return 1;
        }
        if (*(short *)((int)piVar4 + 0xe) != *(short *)((int)piVar3 + 0x12)) {
          return 1;
        }
        if (piVar4[4] != *piVar3) {
          return 1;
        }
        bVar1 = piVar4[2] == piVar3[1];
      }
      if (!bVar1) {
        return 1;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar7 < param_4);
  }
  return 0;
}

