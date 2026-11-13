extern int *piRam83219598;
extern unsigned int *auStack_40;
extern int fn_82A37888();
extern int fn_82A37BC8();
extern int fn_82A381F0();
extern int fn_82A383C0();


unsigned __int64 fn_82A39170(unsigned __int64 param_1)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  int *piVar5;
  unsigned int auStack_40;

  piVar1 = piRam83219598;
  piVar5 = piRam83219598 + 0x14;
  iVar3 = fn_82A381F0(piVar5,param_1,0);
  if (iVar3 == 0) {
    uVar2 = (**(int (***)())(*piVar1 + 4))(param_1);
  }
  else {
    iVar4 = -0x3fffffff;
    if ((int (**)())piVar1[0xf] != (int (**)())0x0) {
      iVar4 = (*(int (**)())piVar1[0xf])(0xffffffff820893a4,param_1,5,0,0,0,0,&auStack_40);
    }
    fn_82A37888(piVar1 + 0x31,*(unsigned int *)(iVar3 + 4));
    fn_82A37BC8(piVar1 + 0x23,*(unsigned int *)(iVar3 + 0x10));
    uVar2 = fn_82A383C0(piVar5,param_1);
    if (((int (**)())piVar1[0x10] != (int (**)())0x0) && (-1 < iVar4)) {
      (*(int (**)())piVar1[0x10])(uVar2,auStack_40);
    }
  }
  return uVar2;
}
