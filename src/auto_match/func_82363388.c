extern int fn_824550A8();
extern int fn_824556F0();
extern int fn_82508078();
extern int fn_8252CAF8();
extern int fn_82555A88();
extern int fn_827F6210();
extern int fn_827F62A8();
extern int fn_827F6318();
extern int fn_827F6430();
extern unsigned int lbl_821BA71C;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D37E8;


void fn_82363388(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned char **ppuVar4;
  double dVar5;
  
  fn_824556F0(param_1 + 0x45c);
  *(unsigned int *)(*(int *)(param_1 + 0x6ac) + 0x1d0) = 0;
  fn_8252CAF8(*(unsigned int *)(param_1 + 0x6ac),1,1);
  fn_824550A8(param_1 + 0x6a8);
  fn_82508078(*(unsigned int *)(param_1 + 0x3f4),lbl_821BA71C,0);
  ppuVar4 = &lbl_831D37E8;
  uVar1 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x210) + 0x3e4) + 0x8c0);
  dVar5 = (double)ltcg_pool_0_0f;
  do {
    iVar3 = fn_82555A88((unsigned __int64)uVar1 + 0x98,*ppuVar4);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x144), iVar3 != 0)) {
      iVar2 = **(int **)(iVar3 + 400);
      if (*(int *)(iVar2 + 0x110) != 0) {
        fn_827F62A8(dVar5);
        fn_827F6318(*(unsigned int *)(iVar2 + 0x110));
        fn_827F6430(*(unsigned int *)(iVar2 + 0x110));
      }
      if (*(int *)(**(int **)(iVar3 + 400) + 0x110) != 0) {
        fn_827F6210(dVar5);
      }
    }
    ppuVar4 = ppuVar4 + 1;
  } while (ppuVar4 != (unsigned char **)0x831d3820);
  return;
}

