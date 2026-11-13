extern unsigned int *auStack_a0;
extern int fn_82A1EFC0();
extern int fn_82A29DE8();


unsigned __int64 fn_829D3930(unsigned __int64 param_1)

{
  int iVar1;
  unsigned char auStack_a0 [136];
  
  iVar1 = fn_82A29DE8(param_1,0xffffffff80000000,1,0,3,0,0);
  if (iVar1 == -1) {
    return 0xffffffff80004005;
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_a0,0,0x80);
}

