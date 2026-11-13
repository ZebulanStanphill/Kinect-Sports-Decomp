extern int fn_83005980();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_83028D68(int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar2;
  unsigned __int64 uVar1;
  int iVar3;
  double dVar4;
  
  piVar2 = (int *)fn_83005980();
  if (piVar2 == (int *)0x0) {
    uVar1 = 2;
  }
  else {
    for (iVar3 = param_1[0x22];
        (iVar3 != param_1[0x23] && ((unsigned __int64)*(unsigned int *)(iVar3 + 4) != (param_3 & 0xffffffff)));
        iVar3 = iVar3 + 8) {
    }
    if (*(short *)((int)param_2 + 0x2a) == 0) {
      *(unsigned short *)((int)param_2 + 0x2a) = *(unsigned short *)(*(int *)(iVar3 + 4) + 0x2a);
      *(unsigned short *)(param_2 + 10) = *(unsigned short *)(*(int *)(iVar3 + 4) + 0x28);
      *param_2 = piVar2;
    }
    dVar4 = (double)(**(int (***)())(*param_1 + 0x114))(param_1,param_4);
    param_2[1] = (float)dVar4;
    param_2[4] = lbl_821AAD20;
    uVar1 = (**(int (***)())(*piVar2 + 0x100))(piVar2,param_2,param_3,param_4,0);
  }
  return uVar1;
}

