extern unsigned int *auStack_2c;
extern int fn_82E28AA8();
extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int uStack_30;


unsigned int fn_82E2CE00(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  piVar5 = (int *)(param_1 + -4);
  uVar4 = 0;
  (**(int (***)())(*(int *)(param_1 + -4) + 0x70))(piVar5);
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar2 = fn_82E4FE08(0x8b0);
    *(int *)(param_1 + 0x30) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,0x8b0);
    }
  }
  else {
    uStack_30 = 0;
    auStack_2c[0] = 0;
    iVar3 = fn_82E28AA8(piVar5,&uStack_30,auStack_2c);
    uVar1 = uStack_30;
    if (-1 < iVar3) {
      if (auStack_2c[0] < 0x8b1) {
        fn_82F68CC0(*(unsigned int *)(param_1 + 0x30),uStack_30);
        fn_82E4FE40(uVar1);
        uVar4 = *(unsigned int *)(param_1 + 0x30);
      }
      else {
        fn_82E4FE40(uStack_30);
      }
    }
  }
  (**(int (***)())(*piVar5 + 0x74))(piVar5);
  return uVar4;
}

