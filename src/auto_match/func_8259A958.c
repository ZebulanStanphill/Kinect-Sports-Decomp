extern unsigned int *auStack_170;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_1f8;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_8259A3A8();
extern int fn_8259B778();
extern int fn_8259BC00();
extern int fn_8265C9E0();
extern int fn_827D5158();
extern int fn_827D9670();
extern int fn_827DE858();
extern int fn_82811400();
extern int XMemSet();
extern int fn_82F67FE8();
extern unsigned int iStack_1bc;
extern unsigned int iStack_1d8;
extern unsigned int iStack_1fc;
extern unsigned int lbl_821CA75C;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_1d4;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1ec;
extern unsigned int uStack_1f0;
extern unsigned int uStack_200;


unsigned __int64 fn_8259A958(int param_1,__int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  struct { unsigned int first; int second; } stack_pair_200;

  unsigned int auStack_1f8;
  struct { unsigned int first; unsigned int second; } stack_pair_1f0;

  unsigned __int64 uStack_1e8;
  int *piStack_1e0;
  struct { unsigned int first; int second; } stack_pair_1dc;

  unsigned int uStack_1d4;
  int (**pcStack_1d0)();
  unsigned char auStack_1c0 [4];
  int iStack_1bc;
  unsigned char auStack_1b0 [32];
  unsigned char auStack_190 [32];
  unsigned char auStack_170 [352];

  if (*(int *)(param_1 + 0x94) == 2) {
    stack_pair_1dc.first = 0;
    stack_pair_1dc.second = 0;
    iVar1 = *(int *)lbl_83156AA0;
    uVar2 = fn_82811400(auStack_190,4);
    lVar3 = (**(int (***)())(iVar1 + 0xc))(lbl_83156AA0,0x1b8,uVar2);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      auStack_1f8 = 0;
      uStack_1e8 = 0;
      stack_pair_1f0.first = 0;
      stack_pair_200.first = 0;
      uVar2 = fn_827D9670(auStack_1b0,&stack_pair_1f0.first,&uStack_1e8,&auStack_1f8);
      uVar2 = fn_8259A3A8(lVar3,param_2,*(unsigned int *)(param_1 + 0x70),&stack_pair_200.first,uVar2,1);
    }
    uStack_1d4 = (unsigned int)uVar2;
    piStack_1e0 = (int *)fn_8265C9E0(0x44);
    if (piStack_1e0 == (int *)0x0) {
      piStack_1e0 = (int *)0x0;
    }
    else {
      stack_pair_200.first = 0;
      stack_pair_200.second = 0;
      fn_82517978(&stack_pair_200.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
      iVar1 = stack_pair_200.second;
      stack_pair_1f0.first = 0;
      stack_pair_1f0.second = 0;
      fn_82517978(&stack_pair_1f0.first,stack_pair_200.first,stack_pair_200.second,0);
      fn_827DE858(piStack_1e0,&stack_pair_1f0.first,uVar2);
      piStack_1e0[5] = 0;
      piStack_1e0[9] = 0;
      piStack_1e0[0xd] = 0;
      *piStack_1e0 = (int)&lbl_821CA75C;
      piStack_1e0[0xf] = 1;
      piStack_1e0[0x10] = 0;
      if (iVar1 != 0) {
        fn_822315A0(iVar1);
      }
    }
    (**(int (***)())(*piStack_1e0 + 4))(piStack_1e0,2,0);
    uVar2 = fn_827D5158(auStack_1c0);
    fn_823F2E20(&stack_pair_1dc.first,uVar2);
    if (iStack_1bc != 0) {
      fn_822315A0();
    }
    pcStack_1d0 = fn_8259B778;
    fn_8259BC00(param_1 + 0x78,&piStack_1e0);
    if (stack_pair_1dc.second != 0) {
      fn_822315A0();
    }
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x94) == 1) {
      auStack_1f8 = 0;
      fn_82F67FE8(param_2 + 0x108,0xffffffff821c557c,&auStack_1f8);
      stack_pair_200.first = auStack_1f8;
                    /* WARNING: Subroutine does not return */
      XMemSet(auStack_170,0,0x134);
    }
    uVar2 = 0;
  }
  return uVar2;
}
