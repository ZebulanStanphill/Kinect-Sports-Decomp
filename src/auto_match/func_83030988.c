extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_8301AF50();
extern int fn_83030318();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;


unsigned __int64 fn_83030988(int param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  
  if (param_3 == 0) {
    uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x118);
    if (uVar6 == 0) {
      fn_8301AF50(lbl_832642EC,*(unsigned int *)(param_1 + 0xc),0);
      uVar2 = 1;
    }
    else {
      iVar3 = fn_82FA5060(lbl_831BC768,*(unsigned int *)(param_1 + 0x118) << 2);
      if (iVar3 == 0) {
        uVar2 = 2;
      }
      else {
        piVar1 = *(int **)(param_1 + 0x104);
        if (piVar1 != (int *)0x0) {
          piVar4 = (int *)(iVar3 + -4);
          do {
            piVar4 = piVar4 + 1;
            *piVar4 = piVar1[8];
            piVar1 = (int *)*piVar1;
          } while (piVar1 != (int *)0x0);
        }
        if (uVar6 != 0) {
          puVar5 = (unsigned int *)(iVar3 + -4);
          do {
            puVar5 = puVar5 + 1;
            fn_83030318(param_1,param_2,*puVar5);
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        fn_82FA5190(lbl_831BC768,iVar3);
        uVar2 = 1;
      }
    }
  }
  else {
    fn_83030318(param_1,param_2);
    uVar2 = 1;
  }
  return uVar2;
}

