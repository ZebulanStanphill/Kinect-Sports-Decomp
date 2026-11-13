extern int fn_82311AB8();
extern int fn_82F69290();
extern unsigned int lbl_82167E64;


void fn_828B58F0(unsigned short *param_1,int param_2,unsigned int param_3)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  unsigned char **appuStack_20 [8];
  
  if ((unsigned int)(*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2) <= param_3) {
    fn_82311AB8(appuStack_20,0xffffffff821ae698);
    appuStack_20[0] = &lbl_82167E64;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dda18);
  }
  uVar1 = *(unsigned short *)(param_2 + 0x14);
  puVar2 = (unsigned short *)(param_3 * 4 + *(int *)(param_2 + 4));
  *(unsigned char *)(param_1 + 3) = 0xde;
  *param_1 = uVar1;
  *(unsigned char *)((int)param_1 + 7) = 1;
  uVar1 = puVar2[1];
  param_1[1] = *puVar2;
  param_1[2] = uVar1;
  return;
}

