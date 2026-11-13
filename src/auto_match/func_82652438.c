extern unsigned int *auStack_5c;
extern int fn_82651AF8();
extern int fn_82A2AD00();
extern int fn_82F691F0();


void fn_82652438(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned char auStack_5c [68];
  
  uVar1 = fn_82A2AD00();
  if ((uVar1 & 0x20) != 0) {
    fn_82651AF8(param_1);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_5c,0,0x3c);
}

