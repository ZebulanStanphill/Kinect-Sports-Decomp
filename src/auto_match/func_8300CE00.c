extern int fn_82F691F0();
extern int fn_82FA5060();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_8300CE00(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar1 = (int)(*(unsigned short *)(param_1 + 0x16) + 7) >> 3;
  iVar2 = iVar1 << 1;
  uVar3 = fn_82FA5060(lbl_831BC768,iVar2);
  *(int *)(param_1 + 0x24) = (int)uVar3;
  if ((uVar3 & 0xffffffff) == 0) {
    return 2;
  }
  *(int *)(param_1 + 0x28) = (int)uVar3 + iVar1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar3,0,iVar2);
}

