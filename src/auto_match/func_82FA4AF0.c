extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;


unsigned __int64 fn_82FA4AF0(int param_1,unsigned int *param_2)

{
  unsigned char bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  int *piVar5;
  unsigned int uVar6;
  double dVar7;
  double dVar8;
  
  if (param_2 == (unsigned int *)0x0) {
    uVar3 = 0x1f;
  }
  else {
    *(unsigned int *)(param_1 + 4) = *param_2;
    *(unsigned int *)(param_1 + 8) = param_2[1];
    *(unsigned int *)(param_1 + 0xc) = param_2[2];
    dVar8 = (double)lbl_82005718;
    uVar3 = lbl_82015618;
    dVar7 = (double)fn_82F655D8(lbl_82015618,
                                      (double)(float)((double)(float)param_2[3] * dVar8));
    *(float *)(param_1 + 0x10) = (float)dVar7;
    dVar7 = (double)fn_82F655D8(uVar3,(double)(float)((double)(float)param_2[4] * dVar8));
    *(float *)(param_1 + 0x14) = (float)dVar7;
    *(unsigned int *)(param_1 + 0x18) = param_2[5];
    bVar1 = *(unsigned char *)(param_2 + 6);
    *(unsigned int *)(param_1 + 0x1c) = (unsigned int)bVar1 + (-(unsigned int)(bVar1 == 0) - (bVar1 - 1));
    piVar5 = (int *)((int)param_2 + 0x19);
    iVar2 = *piVar5;
    *(int *)(param_1 + 0x20) = iVar2;
    if ((iVar2 == 1) && (uVar6 = 0, *(int *)(param_1 + 0xc) != 0)) {
      piVar4 = (int *)(param_1 + 0x20);
      do {
        piVar5 = piVar5 + 1;
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 1;
        *piVar4 = *piVar5;
      } while (uVar6 < *(unsigned int *)(param_1 + 0xc));
    }
    uVar3 = 1;
  }
  return uVar3;
}

