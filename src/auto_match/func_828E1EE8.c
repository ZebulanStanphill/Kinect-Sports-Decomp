typedef unsigned char bool;
extern int fn_82311AB8();
extern int fn_82F69290();
extern unsigned int lbl_82167E64;


bool fn_828E1EE8(int param_1,unsigned int param_2)

{
  unsigned char **appuStack_20 [8];
  
  if ((unsigned int)((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x1c) <= param_2) {
    fn_82311AB8(appuStack_20,0xffffffff821ae698);
    appuStack_20[0] = &lbl_82167E64;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dda18);
  }
  return *(int *)(param_2 * 0x1c + *(int *)(param_1 + 0xc)) != 0;
}

