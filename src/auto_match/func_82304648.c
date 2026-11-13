extern int fn_82809CB0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821922D0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831DF1B0;


void fn_82304648(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar2 = fn_82F6A548();
  *(unsigned int *)(iVar2 + 0x5c) = 0;
  *(unsigned int *)(iVar2 + 0x60) = 0;
  dVar8 = (double)lbl_831DF1B0;
  *(unsigned int *)(iVar2 + 0x1e8) = 0;
  dVar7 = (double)lbl_821922D0;
  *(unsigned int *)(iVar2 + 0x1ec) = 0;
  *(unsigned int *)(iVar2 + 0x50) = 1;
  *(unsigned int *)(iVar2 + 0x1e4) = 4;
  iVar1 = *(int *)(iVar2 + 0x98);
  dVar6 = (double)ltcg_pool_0_0f;
  for (iVar3 = *(int *)(iVar2 + 0x94); iVar3 != iVar1; iVar3 = iVar3 + 0x40) {
    dVar4 = (double)fn_82809CB0((double)*(float *)(iVar3 + 0x20));
    dVar5 = (double)fn_82809CB0((double)*(float *)(iVar3 + 0x28));
    if (dVar5 < dVar4) {
      dVar4 = (double)*(float *)(iVar3 + 0x20);
      if (dVar4 <= dVar6) {
        if (dVar8 < dVar4) {
          *(unsigned int *)(iVar2 + 0x1ec) = *(unsigned int *)(iVar3 + 0x1c);
          dVar8 = (double)*(float *)(iVar3 + 0x20);
        }
      }
      else if (dVar4 < dVar7) {
        *(unsigned int *)(iVar2 + 0x1e8) = *(unsigned int *)(iVar3 + 0x1c);
        dVar7 = (double)*(float *)(iVar3 + 0x20);
      }
    }
  }
  fn_82F6A594();
  return;
}

