extern unsigned int *auStack_68;
extern int fn_827F6950();
extern int fn_82800E88();
extern unsigned int uStack_60;
extern unsigned int uStack_6c;


void fn_82800288(unsigned __int64 param_1)

{
  unsigned int uStack_6c;
  unsigned char auStack_68 [8];
  unsigned int uStack_60;
  
  uStack_60 = 0;
  fn_82800E88(param_1,&uStack_6c);
                    /* WARNING: Subroutine does not return */
  fn_827F6950(uStack_6c,auStack_68);
}

