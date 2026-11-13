#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8239D390();
extern int fn_824C97F0();
extern int fn_82536070();
extern int fn_82552720();
extern int fn_825529B0();
extern int fn_82552B50();
extern unsigned int lbl_821B3ED0;
extern unsigned int lbl_821B3F50;


void fn_82399D48(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned int uVar8;
  int iVar9;
  
  piVar7 = (int *)**(int **)(param_1 + 8);
  if (*(int *)(param_1 + 0x178) == 1) {
    fn_8239D390(param_1,(int)*(float *)(*(int *)(((int *)*piVar7)[4] * 4 + *(int *)*piVar7) +
                                             0x20));
  }
  else {
    uVar1 = (unsigned int)*(float *)(*(int *)(((int *)*piVar7)[4] * 4 + *(int *)*piVar7) + 0x20);
    uVar2 = (unsigned int)*(float *)(*(int *)(((int *)piVar7[1])[4] * 4 + *(int *)piVar7[1]) + 0x20);
    if (uVar2 + uVar1 != *(int *)(param_1 + 600)) {
      iVar4 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x34))();
      piVar7 = (int *)**(int **)(param_1 + 0xa8);
      piVar3 = (int *)(*(int **)(param_1 + 0xa8))[1];
      if (piVar7 != piVar3) {
        if (iVar4 == 0) {
          do {
            fn_824C97F0(*(unsigned int *)(*piVar7 + 0x28),0xffffffff821a6a9c);
            piVar7 = piVar7 + 2;
          } while (piVar7 != piVar3);
        }
        else {
          do {
            fn_824C97F0(*(unsigned int *)(*piVar7 + 0x28),0xffffffff821a6b18);
            piVar7 = piVar7 + 2;
          } while (piVar7 != piVar3);
        }
      }
      if ((uVar1 < 0x1f) && (uVar2 < 0x1f)) {
        *(unsigned int *)(param_1 + 600) = uVar2 + uVar1;
        uVar6 = uVar1;
        if (0x1d < (int)uVar1) {
          uVar6 = 0x1e;
        }
        uVar8 = uVar2;
        if (0x1d < (int)uVar2) {
          uVar8 = 0x1e;
        }
        if (uVar1 == uVar2) {
          fn_82536070(0xffffffff821b4bbc,(&lbl_821B3F50)[uVar6]);
          uVar5 = 0xffffffff821b3d30;
        }
        else {
          fn_82536070(0xffffffff821b4bbc,(&lbl_821B3ED0)[uVar6]);
          uVar5 = ZEXT48((&lbl_821B3ED0)[uVar8]);
        }
        fn_82536070(0xffffffff821b4bd8,uVar5);
        iVar9 = param_1 + 0x244;
        iVar4 = fn_825529B0(iVar9);
        if (iVar4 != 0) {
          fn_82552B50(iVar9,1);
        }
        fn_82552720(param_2 + 0x84c,iVar9,param_1 + 0x250,0,1,0,0);
      }
    }
  }
  return;
}

