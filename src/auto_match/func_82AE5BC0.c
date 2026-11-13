extern int fn_82AA66A8();
extern int fn_82ACA4F0();
extern int fn_82AE5400();


unsigned __int64 fn_82AE5BC0(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar2 = fn_82AE5400(param_1,0xff,param_2,0xfffffffffffffffc);
  if ((int)uVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*param_1,0xdee);
  }
  uVar3 = fn_82ACA4F0(uVar2 & 0xf,param_2);
  iVar1 = ((unsigned int)(uVar2 >> 8) & 0xffffff) + 1;
  *(unsigned __int64 *)(param_1 + iVar1 * 2) =
       (uVar3 & 0xffffffff) << ((uVar2 & 0xffffffff) >> 2 & 0x3c) |
       *(unsigned __int64 *)(param_1 + iVar1 * 2);
  return uVar2 & 0xfffffff0 | uVar3 & 0xffffffff0000000f;
}

