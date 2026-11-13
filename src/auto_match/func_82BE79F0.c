extern int fn_82BE5B38();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern unsigned int lbl_8317524C;


unsigned __int64 fn_82BE79F0(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (((param_1 & 0xffffffff) == 0) ||
     (iVar2 = fn_82BEA200(0xffffffff8322b1ec,0xffffffff820e9a50), iVar2 == 0)) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    iVar2 = fn_82BE5B38(param_1);
    uVar1 = (unsigned __int64)*(unsigned short *)(&lbl_8317524C + iVar2 * 0xc);
    fn_82BEA230(0xffffffff8322b1ec,0xffffffff820e9a50);
  }
  return uVar1;
}

