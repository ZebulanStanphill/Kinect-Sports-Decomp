extern unsigned int *auStack_170;
extern unsigned int *auStack_190;
extern int fn_825200F0();
extern int fn_82A1EFC0();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_8251F8E0(unsigned __int64 param_1)

{
  unsigned char auStack_190 [32];
  unsigned char auStack_170 [308];
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  fn_825200F0(auStack_190,param_1);
  uStack_3c = 0;
  uStack_38 = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_170,0,0x148);
}

