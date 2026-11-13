extern int fn_8229F910();
extern int fn_822A02D8();
extern int fn_8239FF60();
extern int fn_82508078();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CA460;


void fn_823A6168(int param_1)

{
  int *piVar1;
  int iVar3;
  unsigned __int64 uVar2;
  double dVar4;
  int iStack_30;
  int iStack_2c;
  __int64 alStack_28 [2];
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x2e0);
  iVar3 = (**(int (***)())(*piVar1 + 0xa4))(piVar1);
  if (iVar3 != 0) {
    iStack_30 = *(int *)(param_1 + 0xc);
    iStack_30 = fn_82535298(&iStack_30,
                                  *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x174) + 0x84c),
                                  0xffffffff83296bc0,0xffffffff83296bd0);
    fn_82536288(&iStack_30);
    dVar4 = (double)(**(int (***)())(*piVar1 + 0xa0))(piVar1);
    if ((double)lbl_821922D0 < dVar4) {
      iVar3 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
      if ((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) {
        fn_8239FF60(*(unsigned int *)(*(int *)(param_1 + 8) + 0x2dc),0x1c);
      }
    }
    fn_82508078(*(unsigned int *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b4f9c,0);
    *(unsigned int *)(param_1 + 0x24) = 1;
    *(unsigned int *)(param_1 + 0x2c) = lbl_821CA460;
    uVar2 = (**(int (***)())(*piVar1 + 0xa8))(piVar1,0);
    iVar3 = *(int *)(param_1 + 8);
    fn_822A02D8((double)*(float *)(*(int *)(iVar3 + 0x2d8) + 0x168),uVar2,alStack_28,&iStack_30,
                 &iStack_2c);
    alStack_28[0] = (__int64)iStack_2c;
    fn_8229F910((double)(__int64)iStack_30,(double)alStack_28[0],
                      *(unsigned int *)(*(int *)(iVar3 + 0xd4) + 0xc),0xffffffff821b5094);
  }
  return;
}

