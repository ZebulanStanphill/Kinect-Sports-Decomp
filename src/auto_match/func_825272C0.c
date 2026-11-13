extern int fn_82522ED8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_821954CC;
extern unsigned int lbl_82195510;
extern unsigned int lbl_82195514;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C080C;
extern unsigned int lbl_831C0810;
extern unsigned int lbl_831C0814;
extern unsigned int lbl_831C0818;
extern unsigned int lbl_831C081C;
extern unsigned int lbl_831C0820;
extern unsigned int lbl_831C0824;
extern unsigned int lbl_831C0828;
extern unsigned int lbl_831C082C;
extern unsigned int lbl_831C0830;
extern unsigned int lbl_831C0834;
extern unsigned int lbl_831C0838;
extern unsigned int lbl_831C083C;
extern unsigned int lbl_831C0840;
extern unsigned int lbl_831C0844;
extern int (*lbl_8326AF34)();


void fn_825272C0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x88c);
  iVar4 = param_1 + 0x85c;
  while (-1 < iVar3) {
    if (*(int *)(*(int *)(param_1 + 0x88c) * 0xc + iVar4) != 0) {
      fn_82522ED8();
      *(unsigned int *)(*(int *)(param_1 + 0x88c) * 0xc + iVar4) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x88c) * 0xc + iVar4;
    if (*(int *)(iVar3 + 4) != 0) {
      fn_82522ED8();
      *(unsigned int *)(iVar3 + 4) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x88c) + -1;
    *(int *)(param_1 + 0x88c) = iVar3;
  }
  piVar2 = *(int **)(param_1 + 0x304);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[1];
    if (*piVar2 != 0) {
      *(int **)(*piVar2 + 4) = piVar1;
    }
    if ((int *)piVar2[1] != (int *)0x0) {
      *(int *)piVar2[1] = *piVar2;
    }
    *piVar2 = 0;
    piVar2[1] = 0;
    fn_82522ED8();
    piVar2 = piVar1;
  }
  lbl_831C0828 = 0;
  lbl_831C0844 = 1;
  lbl_831C080C = ltcg_pool_0_0f;
  lbl_831C0810 = ltcg_pool_0_0f;
  lbl_831C0814 = ltcg_pool_0_0f;
  lbl_831C0818 = ltcg_pool_0_0f;
  lbl_831C081C = lbl_82191FCC;
  lbl_831C0820 = ltcg_pool_0_0f;
  lbl_831C0824 = ltcg_pool_0_0f;
  lbl_831C082C = lbl_82195510;
  lbl_831C0830 = lbl_82195514;
  lbl_831C0834 = lbl_82192F70;
  lbl_831C0838 = lbl_821954CC;
  lbl_831C083C = lbl_8218E8FC;
  lbl_831C0840 = lbl_8218E8E8;
  if (lbl_8326AF34 != (int (**)())0x0) {
    (*lbl_8326AF34)();
  }
  return;
}

