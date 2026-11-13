extern unsigned int *auStack_a0;
extern int fn_82AA66A8();
extern int fn_82B45880();
extern int fn_82B4A3D8();
extern int fn_82B80788();


unsigned __int64 fn_82B4B6F0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_a0 [112];
  
  iVar2 = fn_82B45880();
  uVar1 = fn_82B4A3D8(param_1,0xffffffffffffffff,0,*(unsigned int *)(iVar2 + 0x18),param_3,param_4,
                        param_5);
  if (uVar1 == 0) {
    fn_82B80788(param_1,auStack_a0,100,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdc3,auStack_a0);
  }
  if ((uVar1 & 0xf) == 0) {
    fn_82B80788(param_1,auStack_a0,100,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe32,auStack_a0,(uVar1 & 0xffffffff) >> 4);
  }
  return uVar1;
}

