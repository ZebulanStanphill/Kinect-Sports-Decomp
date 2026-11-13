extern int fn_82A43318();
extern int fn_82A45958();
extern int fn_82A45CD8();
extern int fn_82A474B0();
extern int fn_82A47FC0();
extern int fn_82A48100();
extern unsigned int uStack_40;


void fn_82A48728(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int uStack_40;
  
  if (*(unsigned int **)(param_1 + 0x20c) == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    puVar5 = (unsigned int *)**(unsigned int **)(param_1 + 0x20c);
  }
  if (puVar5 != (unsigned int *)0x0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x1c0) != 0) {
      uVar3 = (unsigned __int64)uStack_40;
      do {
        fn_82A45CD8(*(unsigned int *)(param_1 + 0x1d8),uVar4,puVar5[2],puVar5[1]);
        uVar1 = puVar5[3];
        uVar2 = fn_82A474B0(puVar5[2],puVar5[1],uVar4,uVar1 >> 9);
        if ((uVar2 & 0xffffffff) != 0) {
          uStack_40 = uVar1 >> 7 & 3;
          uVar3 = uVar2;
        }
        fn_82A45958(*(unsigned int *)(param_1 + 0x1d8),uVar4,uVar3,uStack_40);
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1c0));
    }
    fn_82A47FC0(param_1);
    if ((puVar5[4] != 0) && (puVar5[7] == 0)) {
      fn_82A48100(param_1);
      *(unsigned int *)(param_1 + 0x1d4) = 1;
    }
    fn_82A43318(param_1 + 0x8c,puVar5[8],*puVar5);
    *(unsigned int *)(param_1 + 0x1dc) = 1;
  }
  return;
}

