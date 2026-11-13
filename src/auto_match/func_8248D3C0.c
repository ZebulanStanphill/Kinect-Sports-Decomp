extern unsigned int *auStack_54;
extern unsigned int *auStack_58;
extern int fn_8263BDD8();
extern int fn_8263C7F0();
extern int fn_82F691F0();
extern unsigned int lbl_821BEAC4;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_8248D3C0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned char auStack_58 [4];
  unsigned char auStack_54 [84];
  
  *param_1 = &lbl_821BEAC4;
  uVar1 = lbl_821CA460;
  param_1[0x28] = lbl_821CA460;
  param_1[0x29] = uVar1;
  param_1[0x2a] = uVar1;
  param_1[0x2b] = uVar1;
  uVar1 = fn_8263C7F0(0x140,0x100,1,1,0x200,0x18280186,0,3);
  param_1[1] = uVar1;
  fn_8263BDD8(uVar1,0,0,0,&uStack_5c,&uStack_60,auStack_54,auStack_58);
  param_1[2] = uStack_60;
  param_1[3] = uStack_5c;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uStack_5c,0,((unsigned __int64)uStack_60 & 0xffffff) << 8);
}

