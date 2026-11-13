extern unsigned int *auStack_48;
extern int fn_82231540();
extern int fn_8265CA20();
extern int fn_8289E800();
extern int fn_8289F1E8();
extern int fn_828B6DD0();
extern int memmove();
extern unsigned int lbl_820252A8;
extern unsigned int uStack_50;


void fn_828B82D0(unsigned int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  int *piVar5;
  int *piVar6;
  unsigned char uStack_50;
  unsigned int *puStack_4c;
  unsigned int auStack_48;
  
  piVar5 = param_1 + 1;
  *param_1 = &lbl_820252A8;
  iVar1 = param_1[2];
  if (param_1[1] != iVar1) {
    uVar3 = fn_828B6DD0(iVar1,iVar1,param_1[1],uStack_50);
    fn_82231540(uVar3,param_1[2],param_1 + 4,uStack_50);
    param_1[2] = (int)uVar3;
  }
  puVar4 = (unsigned int *)param_1[10];
  piVar6 = param_1 + 10;
  if (puVar4 != (unsigned int *)param_1[0xb]) {
    do {
      *(unsigned int *)*puVar4 = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (puVar4 != (unsigned int *)param_1[0xb]);
  }
  iVar1 = *piVar6;
  if (iVar1 != param_1[0xb]) {
    memmove(iVar1,param_1[0xb],0);
    param_1[0xb] = iVar1;
  }
  uVar2 = param_1[5];
  puStack_4c = param_1;
  fn_8289F1E8(&auStack_48,(unsigned __int64)uVar2 + 0x1c0,&puStack_4c);
  fn_8289E800(&puStack_4c,(unsigned __int64)uVar2 + 0x1c0,auStack_48);
  if (*piVar6 != 0) {
    fn_8265CA20();
  }
  param_1[0xc] = 0;
  *piVar6 = 0;
  param_1[0xb] = 0;
  if (*piVar5 != 0) {
    fn_82231540(*piVar5,param_1[2],param_1 + 4,uStack_50);
    fn_8265CA20(*piVar5);
  }
  *piVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

