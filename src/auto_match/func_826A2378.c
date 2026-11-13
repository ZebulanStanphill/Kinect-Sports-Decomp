extern unsigned int *auStack_a0;
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_826BEC28();
extern int fn_826EF268();
extern int fn_826EF7D0();
extern int fn_826EFAF8();
extern int fn_826EFDB8();
extern unsigned int lbl_8200C4D4;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;


void fn_826A2378(int param_1,unsigned int *param_2,int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  int aiStack_b0 [2];
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned char auStack_a0 [12];
  unsigned char **ppuStack_94;
  
  fn_826BEC28();
  uVar1 = *(unsigned int *)(param_1 + 0x28);
  uVar4 = 8;
  if (uVar1 < 8) {
    uVar4 = uVar1;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    iVar7 = 0;
    uVar6 = uVar4;
    do {
      if (*(int *)(*(int *)(param_1 + 0x24) + iVar7) != 0) {
        (**(int (***)())(*param_3 + 4))
                  (param_3,*param_2 + iVar7 + 0x224,
                   *(unsigned int *)(*(int *)(param_1 + 0x24) + iVar7),0);
      }
      uVar6 = uVar6 - 1;
      iVar7 = iVar7 + 4;
      uVar5 = uVar4;
    } while (uVar6 != 0);
  }
  if (uVar5 < uVar1) {
    iVar7 = uVar5 << 2;
    do {
      if (*(int *)(*(int *)(param_1 + 0x24) + iVar7) != 0) {
        fn_826EFAF8(auStack_a0,uVar5);
        fn_826EFDB8(auStack_a0);
        fn_826EF7D0(&uStack_a8,auStack_a0);
        iVar2 = *(int *)(param_1 + 0x24);
        aiStack_b0[0] = fn_82694610((unsigned __int64)*param_2 + 0x254,uStack_a8,uStack_a4);
        *(int *)(aiStack_b0[0] + 8) = *(int *)(aiStack_b0[0] + 8) + 1;
        (**(int (***)())(*param_3 + 4))(param_3,aiStack_b0,*(unsigned int *)(iVar2 + iVar7),0);
        lVar3 = (unsigned __int64)*(unsigned int *)(aiStack_b0[0] + 8) - 1;
        *(int *)(aiStack_b0[0] + 8) = (int)lVar3;
        if (lVar3 == 0) {
          fn_826944C8(aiStack_b0[0]);
        }
        ppuStack_94 = &lbl_8200C4D4;
        fn_826EF268(auStack_a0);
      }
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar5 < uVar1);
  }
  return;
}

