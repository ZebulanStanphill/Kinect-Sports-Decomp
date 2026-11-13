extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82555328();
extern int fn_82573EE0();
extern int fn_825B05A0();
extern int fn_825B5718();
extern int fn_82837AC8();
extern int fn_82837AE0();
extern unsigned int lbl_821954B0;


void fn_82549808(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  double dVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  __int64 lVar6;
  double dVar7;
  
  iVar4 = fn_8251F720();
  *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 0x1c0;
  fn_825B05A0(*(unsigned int *)(*(int *)(iVar4 + 0x10) + 0x48),param_3);
  uVar3 = fn_82573EE0(iVar4,0xc);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_82555328(uVar3,param_3,param_2);
  }
  puVar1 = *(unsigned int **)(*(int *)(iVar4 + 0x10) + 0x48);
  iVar5 = fn_82837AE0(*puVar1);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = fn_82837AC8(*puVar1);
  }
  dVar2 = lbl_821954B0;
  if (iVar5 != 0) {
    lVar6 = 4;
    do {
      *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 0x94;
      *(unsigned int *)(param_3 + 0x18) = *(unsigned int *)(param_3 + 0x18);
      dVar7 = (double)*(unsigned int *)(param_3 + 0x30);
      if ((double)(*(unsigned int *)(param_3 + 0x30) - 0x10) < 0.0) {
        dVar7 = dVar2;
      }
      *(int *)(param_3 + 0x30) = (int)(__int64)dVar7;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  iVar5 = fn_82573EE0(iVar4,0);
  if (iVar5 != 0) {
    fn_82573EE0(iVar4);
    iVar5 = fn_825B5718();
    *(int *)(param_3 + 0x20) = iVar5 + *(int *)(param_3 + 0x20);
  }
  iVar5 = *(int *)(*(int *)(iVar4 + 0x10) + 0x44);
  if (iVar5 != 0) {
    fn_82549808(iVar5,param_2,param_3);
  }
  fn_8251FA58(iVar4);
  return;
}

