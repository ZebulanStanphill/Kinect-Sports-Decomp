extern unsigned int *auStack_20;
extern int fn_82230040();
extern int fn_822300A0();
extern int fn_8265C9E0();
extern unsigned int iStack_18;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;


int fn_82661BE0(unsigned int param_1,unsigned int param_2)

{
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned char auStack_20 [8];
  int iStack_18;
  
  iStack_18 = 0;
  if ((param_1 != 0) &&
     ((uStack00000014 = param_1, uStack0000001c = param_2, 0x7ffffff < param_1 ||
      (iStack_18 = fn_8265C9E0(param_1 << 5), iStack_18 == 0)))) {
    fn_822300A0(auStack_20,0);
                    /* WARNING: Subroutine does not return */
    fn_82230040();
  }
  return iStack_18;
}

