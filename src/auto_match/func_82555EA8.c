extern unsigned int *auStack_a0;
extern int fn_8253B7C0();
extern unsigned int iStack_58;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_a8;


void fn_82555EA8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 *puVar5;
  unsigned __int64 *puVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  double dVar10;
  double dVar11;
  unsigned __int64 uStack_a8;
  unsigned char auStack_a0 [72];
  int iStack_58;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar8 = 0;
    dVar10 = (double)ltcg_pool_0_0f;
    dVar11 = (double)lbl_821CA460;
    do {
      piVar2 = *(int **)(iVar8 + *(int *)(param_1 + 0x24));
      if (((piVar2[9] & 0x10000000U) == 0) && ((piVar2[9] & 0x8000000U) == 0)) {
        (**(int (***)())(**(int **)(*piVar2 + 0x1a8) + 0xc))(*(int **)(*piVar2 + 0x1a8),0);
        piVar1 = *(int **)(*piVar2 + 0x1a8);
        iVar4 = *piVar1;
        fn_8253B7C0(dVar11,dVar11,dVar10);
        uVar3 = fn_8253B7C0();
        (**(int (***)())(iVar4 + 4))(piVar1,0,uVar3);
        puVar6 = &uStack_a8;
        puVar5 = (unsigned __int64 *)(param_2 + -8);
        lVar9 = 10;
        do {
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar5;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        iStack_58 = piVar2[0x53];
        (**(int (***)())(**(int **)(*piVar2 + 0x1ac) + 4))
                  (*(int **)(*piVar2 + 0x1ac),auStack_a0,piVar2[2],
                   (__int64)(piVar2[3] - piVar2[2] >> 6) + 1,0xffffffff82196290,0,
                   0xffffffffffffffff);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar7 < *(int *)(param_1 + 0x28));
  }
  return;
}

