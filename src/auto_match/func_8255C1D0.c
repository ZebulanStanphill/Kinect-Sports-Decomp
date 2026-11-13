extern int fn_8255BFC0();


unsigned short fn_8255C1D0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned char bVar1;
  int *piVar2;
  int *piVar3;
  unsigned short uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  piVar3 = (int *)fn_8255BFC0(param_1,param_2,param_2);
  iVar5 = -(((param_2 & 0xffff) < 10000) - 1);
  piVar7 = piVar3;
  if (piVar3 == (int *)0x0) {
LAB_8255c204:
    uVar4 = 0;
  }
  else {
    do {
      piVar2 = (int *)param_1;
      if (iVar5 == 0) {
        iVar6 = *piVar2;
      }
      else {
        iVar6 = piVar2[1];
      }
      piVar7 = (int *)(-(unsigned int)((unsigned int)((*piVar7 + (int)piVar7) - iVar6) < *(unsigned int *)(iVar6 + 4)) &
                      *piVar7 + (int)piVar7);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)piVar2[1];
        if (piVar7 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar7;
        }
        if (((iVar5 != 0) || (piVar7 == (int *)0x0)) || (iVar6 == 0)) goto LAB_8255c204;
        iVar5 = 1;
        piVar7 = (int *)(-(unsigned int)(*piVar7 != 0) & (unsigned int)(piVar7 + 2));
      }
      if (*(short *)(piVar7 + 1) == 0x2a) {
        bVar1 = *(unsigned char *)(piVar7 + 4);
        if ((piVar7[3] == 0) || ((unsigned int)bVar1 + (-(unsigned int)(bVar1 == 0) - (bVar1 - 1)) != 0)) break;
      }
    } while (piVar7 != piVar3);
    uVar4 = *(unsigned short *)((int)piVar7 + 6);
  }
  return uVar4;
}

