#define true 1
extern unsigned int *auStack_30;
extern int fn_82526A20();
extern int fn_82559EF0();
extern int fn_82561880();
extern int fn_825619C0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83280B8C;
extern unsigned int lbl_83280B98;


unsigned __int64 fn_825605B0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_30 [48];
  
  iVar2 = (&lbl_83280B8C)[param_1 * 2];
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar5 = fn_82526A20(iVar2 + 0x84);
    if (iVar5 == 0) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  uVar1 = *(unsigned int *)(iVar2 + 0xa8);
  if ((uVar1 & 2) != 0) {
    iVar5 = (&lbl_83280B98)[param_1];
    if ((iVar5 != 0) && ((*(unsigned int *)(iVar5 + 0xa8) & 4) == 0)) {
      puVar3 = (unsigned int *)(iVar5 + 0x10U & 0xfffffff0);
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar4 = (unsigned int *)(iVar2 + 0x10U & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      puVar4[2] = uVar7;
      puVar4[3] = uVar8;
      if ((uVar1 & 1) == 0) {
        fn_825619C0((&lbl_83280B98)[param_1],iVar2 + 0x40);
      }
      else {
        fn_82561880((&lbl_83280B98)[param_1],auStack_30);
        fn_82559EF0(iVar2 + 0x50,iVar2 + 0x54);
        *(unsigned int *)(iVar2 + 0x58) = ltcg_pool_0_0f;
      }
    }
  }
  (&lbl_83280B98)[param_1] = iVar2;
  return 1;
}

