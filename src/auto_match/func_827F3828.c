extern int fn_827F6AC0();
extern int fn_827F6BA0();
extern int fn_827F6F58();
extern int fn_827FA1F0();
extern int fn_82F691F0();


void fn_827F3828(__int64 param_1,int param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  
  fn_827F6F58(param_1,0);
  uVar1 = *(unsigned short *)(param_2 + 0x4e);
  uVar2 = *(unsigned short *)(param_2 + 0x52);
  fn_827F6BA0(param_1,*(unsigned short *)(param_2 + 0x20));
  fn_827F6AC0(param_1,uVar1);
  fn_827FA1F0(param_1,uVar2);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x34,0,0x20);
}

