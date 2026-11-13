extern int fn_8239DBB0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F63CA0();
extern unsigned int lbl_821B828C;
extern unsigned int lbl_821B8290;


void fn_824155A0(unsigned int *param_1,unsigned int param_2)

{
  int *piVar1;
  int iVar3;
  __int64 lVar2;
  unsigned int uVar4;
  int *piVar5;
  unsigned int *apuStack_40 [16];
  
  *param_1 = param_2;
  piVar1 = param_1 + 1;
  uVar4 = 0;
  if ((int)(param_1[2] - param_1[1]) >> 2 != 0) {
    iVar3 = 0;
    do {
      fn_8265CA20(*(unsigned int *)(iVar3 + *piVar1));
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < (unsigned int)(param_1[2] - *piVar1 >> 2));
  }
  piVar5 = param_1 + 5;
  uVar4 = 0;
  if ((int)(param_1[6] - param_1[5]) >> 2 != 0) {
    iVar3 = 0;
    do {
      fn_8265CA20(*(unsigned int *)(iVar3 + *piVar5));
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < (unsigned int)(param_1[6] - *piVar5 >> 2));
  }
  iVar3 = *piVar1;
  if (iVar3 != param_1[2]) {
    fn_82F63CA0(iVar3,param_1[2],0);
    param_1[2] = iVar3;
  }
  iVar3 = *piVar5;
  if (iVar3 != param_1[6]) {
    fn_82F63CA0(iVar3,param_1[6],0);
    param_1[6] = iVar3;
  }
  lVar2 = 9;
  do {
    apuStack_40[0] = (unsigned int *)fn_8265C9E0(0xc);
    if (apuStack_40[0] == (unsigned int *)0x0) {
      apuStack_40[0] = (unsigned int *)0x0;
    }
    else {
      *apuStack_40[0] = &lbl_821B828C;
      apuStack_40[0][1] = 0;
      apuStack_40[0][2] = 0;
    }
    fn_8239DBB0(piVar1,apuStack_40);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  apuStack_40[0] = (unsigned int *)fn_8265C9E0(0xc);
  if (apuStack_40[0] == (unsigned int *)0x0) {
    apuStack_40[0] = (unsigned int *)0x0;
  }
  else {
    apuStack_40[0][1] = 0;
    apuStack_40[0][2] = 0;
    *apuStack_40[0] = &lbl_821B8290;
  }
  param_1[9] = apuStack_40[0];
  fn_8239DBB0(piVar1,apuStack_40);
  return;
}

