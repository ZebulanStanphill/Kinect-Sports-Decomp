extern unsigned int *auStack_6c;
extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82F691F0();
extern unsigned int uStack_70;


unsigned __int64 fn_82E28AA8(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uStack_70;
  unsigned int auStack_6c [27];
  
  *param_2 = 0;
  auStack_6c[0] = 0;
  uStack_70 = 0;
  uVar3 = 0xb0;
  (**(int (***)())(*param_1 + 0x38))(param_1,0xffffffff821536c8,auStack_6c);
  uVar1 = auStack_6c[0] >> 2;
  (**(int (***)())(*param_1 + 0x38))(param_1,0xffffffff821536d8,&uStack_70);
  if ((unsigned __int64)uVar1 != 0) {
    uVar3 = ((unsigned __int64)uVar1 + 0x2b) * 4 & 0xfffffffc;
  }
  lVar2 = uStack_70 + uVar3;
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = (int)lVar2;
  }
  uVar3 = fn_82E4FE08(lVar2);
  *param_2 = (int)uVar3;
  if ((uVar3 & 0xffffffff) == 0) {
    fn_82E4FE40(*param_2);
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar3,0,lVar2);
}

