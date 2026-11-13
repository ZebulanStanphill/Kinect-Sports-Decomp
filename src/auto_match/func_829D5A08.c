extern int fn_829D3750();
extern int fn_829D55E0();
extern int fn_82F691F0();


unsigned __int64
fn_829D5A08(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  __int64 lVar1;
  int iVar2;
  
  if ((*(char *)(param_2 + 0x24977) == '\0') && (lVar1 = fn_829D3750(param_2,param_5), lVar1 != 0)
     ) {
    if (*(char *)(param_2 + 0x24976) != '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar1,0,0x58);
    }
    iVar2 = fn_829D55E0(param_2,param_4);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(iVar2 * 0x11fb0 + param_2 + 0x12938,0,0x84);
  }
  return 0xffffffff800700aa;
}

