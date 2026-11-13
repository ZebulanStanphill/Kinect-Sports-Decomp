extern unsigned int *auStack_22e;
extern int fn_82279768();
extern int fn_8228C748();
extern int fn_822C5B18();
extern int fn_8248F4B8();
extern int fn_82BA02A8();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821A7FF4;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_821A9774;
extern unsigned int lbl_8228C928;
extern unsigned int uStack_230;


/* WARNING: Removing unreachable block (ram,0x8228c398) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8228C370(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char **ppuStack_270;
  int (**pcStack_26c)();
  unsigned char ***pppuStack_260;
  unsigned short uStack_230;
  unsigned char auStack_22e [558];
  
  pcStack_26c = fn_8248F4B8;
  pppuStack_260 = &ppuStack_270;
  ppuStack_270 = &lbl_821A7FF4;
  fn_82279768(param_1,param_2,0,1,1,&ppuStack_270,0,1);
  *param_1 = &lbl_821A9774;
  param_1[0x4c] = &lbl_821A8C90;
  fn_822C5B18(param_1 + 0x52,param_3);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 1;
  param_1[0x4d] = param_1;
  param_1[0x4e] = &lbl_8228C928;
  param_1[0x4f] = fn_82BA02A8;
  param_1[0x50] = fn_82BA02A8;
  param_1[0x29] = param_1 + 0x4c;
  fn_8228C748(param_1);
  uStack_230 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_22e,0,0x1fe);
}

