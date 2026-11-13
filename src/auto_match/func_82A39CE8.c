extern int fn_82A39BB0();
extern int fn_82A3D230();
extern int fn_82F63CA0();
extern int fn_82F691F0();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82A39CE8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  *(unsigned char *)(param_1 + 0x972) = 0;
  fn_82A3D230(param_1,0,*(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x20),
                    &uStack_20,&uStack_1c);
  fn_82A39BB0(param_1,uStack_20,uStack_1c);
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
  if (uStack_20 == *(unsigned int *)(param_1 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,0x2000);
  }
  fn_82F63CA0(uVar1,(uStack_20 >> 3) + uVar1,
               ((unsigned __int64)(*(unsigned int *)(param_1 + 0x1c) >> 3) - (unsigned __int64)(uStack_20 >> 3)) + 1);
  uVar1 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x1c) - (unsigned __int64)uStack_20 & 0xffffffff) >> 3;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1 + *(unsigned int *)(param_1 + 0x2c) + 1,0,0x1fff - uVar1);
}

