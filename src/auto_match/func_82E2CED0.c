extern int fn_82E28538();
extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


int fn_82E2CED0(int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  iVar4 = 0;
  (**(int (***)())(*param_1 + 0x70))();
  if (param_1[0xe] == 0) {
    uVar2 = fn_82E4FE08(0x1028);
    param_1[0xe] = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,0x1028);
    }
  }
  else {
    uStack_20 = 0;
    uStack_1c = 0;
    iVar3 = fn_82E28538(param_1,&uStack_20,&uStack_1c,0);
    uVar1 = uStack_20;
    if (-1 < iVar3) {
      if (uStack_1c < 0x1029) {
        fn_82F68CC0(param_1[0xe],uStack_20);
        fn_82E4FE40(uVar1);
        iVar4 = param_1[0xe];
      }
      else {
        fn_82E4FE40(uStack_20);
      }
    }
  }
  (**(int (***)())(*param_1 + 0x74))(param_1);
  return iVar4;
}

