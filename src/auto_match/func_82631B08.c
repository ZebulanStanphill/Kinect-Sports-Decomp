extern int fn_82F691F0();
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82631B08(unsigned short *param_1,unsigned __int64 param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  
  uVar1 = *param_1;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar4 = 0;
  uVar3 = 0;
  while (uVar2 = (unsigned int)uVar1, uVar2 != 0xff) {
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    param_1 = param_1 + 6;
    uVar1 = *param_1;
    lVar4 = lVar4 + 1;
    *(unsigned char *)((int)&uStack_40 + uVar2) = 0xff;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2,0,lVar4 * 0xc + 0x38);
}

