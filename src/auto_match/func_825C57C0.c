extern int fn_82522D98();
extern int fn_8265C9E0();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CACFC;
extern unsigned int ltcg_pool_0_0f;


void fn_825C57C0(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  
  puVar7 = (unsigned int *)fn_8265C9E0(0x40);
  if (puVar7 != (unsigned int *)0x0) {
    uVar1 = *(unsigned int *)(param_1 + 0x10);
    uVar2 = *(unsigned int *)(param_1 + 0xc);
    puVar7[1] = param_3;
    puVar7[9] = uVar1;
    puVar7[8] = uVar2;
    uVar6 = ltcg_pool_0_0f;
    uVar5 = lbl_821CA460;
    uVar2 = lbl_82193B00;
    uVar1 = lbl_821916FC;
    *puVar7 = &lbl_821CACFC;
    puVar7[2] = uVar2;
    puVar7[3] = uVar1;
    puVar7[6] = uVar6;
    puVar7[5] = uVar6;
    puVar7[4] = uVar6;
    puVar7[0xc] = uVar6;
    puVar7[10] = uVar6;
    puVar7[0xb] = uVar5;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(8);
  }
  iVar4 = *(int *)(iVar3 + 4);
  while (iVar4 != 0) {
    iVar3 = *(int *)(iVar3 + 4);
    iVar4 = *(int *)(iVar3 + 4);
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(8);
}

