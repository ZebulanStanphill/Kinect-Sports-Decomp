extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D80820();
extern int fn_82D8D918();
extern int fn_82D9C790();
extern unsigned int iStack_40;
extern unsigned int uStack_8c;


void fn_82D9C220(int param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int aiStack_a0 [5];
  unsigned int uStack_8c;
  int iStack_40;
  
  if (*param_2 != 0) {
    iVar1 = fn_82D8D918();
    if (iVar1 == 0) {
      iVar1 = fn_82CE5410();
      if (*(unsigned int *)(param_1 + 0x164) == (*(unsigned int *)(param_1 + 0x168) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),(int *)(param_1 + 0x160),8);
      }
      iVar1 = *(int *)(param_1 + 0x164);
      *(int *)(param_1 + 0x164) = iVar1 + 1;
      puVar3 = (unsigned int *)(iVar1 * 8 + *(int *)(param_1 + 0x160));
      fn_82D9C790(aiStack_a0,*(unsigned int *)(*(int *)(param_1 + 8) + 0x78));
      iStack_40 = aiStack_a0[0] + 0x1c60;
      uStack_8c = 0;
      uVar2 = (**(int (***)())((unsigned int)*(unsigned char *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) * 0x20 +
                                           aiStack_a0[0] + 0x1a0 + *(int *)(*param_2 + 0xc)) * 0x14
                           + aiStack_a0[0] + 0x9a0))(param_1 + 0x10,param_2,aiStack_a0,0);
      *puVar3 = uVar2;
      puVar3[1] = param_2;
      *(unsigned char *)(param_1 + 0x16c) = 1;
      fn_82D80820(aiStack_a0);
    }
  }
  return;
}

