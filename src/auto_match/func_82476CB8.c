extern unsigned int *auStack_100e;
extern unsigned int *auStack_1030;
extern int fn_822806F0();
extern int fn_822C5B18();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int uStack_1010;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82476CB8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned char auStack_1030 [32];
  unsigned short uStack_1010;
  unsigned char auStack_100e [4094];
  
  uVar1 = fn_822C5B18(auStack_1030,param_1 + 0x28);
  fn_822806F0(*(unsigned int *)(param_1 + 0x14),param_1 + 0xa0,param_1,uVar1,0);
  *(unsigned int *)(param_1 + 0x154) = 1;
  uStack_1010 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_100e,0,0xffe);
}

