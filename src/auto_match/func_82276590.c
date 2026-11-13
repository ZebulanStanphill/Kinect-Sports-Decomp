extern unsigned int *auStack_201e;
extern int fn_822761F8();
extern int fn_82F691F0();
extern unsigned int lbl_821A8120;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82276590(unsigned int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned char auStack_201e [8222];
  
  fn_822761F8(param_1,param_2,param_3 + 4);
  *param_1 = &lbl_821A8120;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_201e,0,0xffe);
}

