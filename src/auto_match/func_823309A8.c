extern int fn_822315A0();
extern int fn_8232C8B8();
extern int fn_82331168();
extern int fn_82331698();
extern int fn_824CCD80();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


void fn_823309A8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puStack_30;
  unsigned int *puStack_2c;
  
  if (param_2 == 0) {
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x28) + 0x2c);
    uVar2 = fn_824CCD80(*(unsigned int *)(param_1 + 0x2c));
    puStack_2c = (unsigned int *)fn_8265C9E0(0xe0);
    if (puStack_2c == (unsigned int *)0x0) {
LAB_82330a94:
      puStack_2c = (unsigned int *)0x0;
    }
    else {
      puStack_2c[1] = 1;
      *puStack_2c = &lbl_821A8D8C;
      puStack_2c[2] = 1;
      if (puStack_2c + 4 != (unsigned int *)0x0) {
        fn_82331168(puStack_2c + 4,param_1 + 0x40,*(unsigned int *)(param_1 + 0xd4),
                          param_1 + 0x54,param_1 + 0x6c,param_1 + 0xd8,uVar2,uVar1);
      }
    }
  }
  else {
    if (param_2 != 1) goto LAB_82330ac0;
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x28) + 0x2c);
    uVar2 = fn_824CCD80(*(unsigned int *)(param_1 + 0x2c));
    puStack_2c = (unsigned int *)fn_8265C9E0(0x100);
    if (puStack_2c == (unsigned int *)0x0) goto LAB_82330a94;
    puStack_2c[1] = 1;
    *puStack_2c = &lbl_821A8D8C;
    puStack_2c[2] = 1;
    if (puStack_2c + 4 != (unsigned int *)0x0) {
      fn_82331698(puStack_2c + 4,param_1 + 0x40,*(unsigned int *)(param_1 + 0xd4),param_1 + 0x54
                        ,param_1 + 0x78,param_1 + 0xd8,uVar2,uVar1);
    }
  }
  puStack_30 = puStack_2c + 4;
  fn_8232C8B8(param_1,&puStack_30);
  if (puStack_2c != (unsigned int *)0x0) {
    fn_822315A0();
  }
LAB_82330ac0:
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  return;
}

