extern unsigned int *auStack_4c;
extern int fn_82A2B9A0();
extern int fn_82A2D890();
extern int fn_82F691F0();
extern unsigned int uStack_50;


void fn_82A2DB28(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uStack_50;
  unsigned char auStack_4c [76];
  
  iVar1 = fn_82A2B9A0();
  if ((iVar1 == 0) && (iVar1 = fn_82A2D890(param_1,&uStack_50,auStack_4c), iVar1 < 0)) {
    return;
  }
  if ((param_3 != 0) && (param_3 < 4)) {
    trapWord(6,(unsigned __int64)*(unsigned int *)("XLNI_DET_MEDIA" + param_3 * 4 + 0xc),0);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(((unsigned __int64)uStack_50 & 0xfffff) * 0x1000 + (unsigned __int64)*(unsigned int *)(param_1 + 0x34),0,
               0x1000);
}

