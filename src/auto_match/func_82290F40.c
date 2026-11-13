extern unsigned int *auStack_22e;
extern unsigned int *auStack_280;
extern int fn_8225C590();
extern int fn_8225DB68();
extern int fn_8225F160();
extern int fn_82279768();
extern int fn_822912A8();
extern int fn_82291398();
extern int fn_822C5B18();
extern int fn_8248F4B8();
extern int fn_82BA02A8();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821985F4;
extern unsigned int lbl_821A7FF4;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_821A9D60;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_230;


/* WARNING: Removing unreachable block (ram,0x82290f68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82290F40(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int auStack_280 [4];
  unsigned char **ppuStack_270;
  int (**pcStack_26c)();
  unsigned char ***pppuStack_260;
  unsigned short uStack_230;
  unsigned char auStack_22e [558];
  
  pcStack_26c = fn_8248F4B8;
  pppuStack_260 = &ppuStack_270;
  ppuStack_270 = &lbl_821A7FF4;
  fn_82279768(param_1,param_2,0,1,1,&ppuStack_270,0,1);
  *param_1 = &lbl_821A9D60;
  param_1[0x4c] = &lbl_821A8C90;
  fn_822C5B18(param_1 + 0x52,param_3);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = ltcg_pool_0_0f;
  param_1[0x4d] = param_1;
  param_1[0x4e] = fn_82291398;
  param_1[0x4f] = fn_82BA02A8;
  param_1[0x50] = fn_82BA02A8;
  param_1[0x29] = param_1 + 0x4c;
  iVar2 = fn_8225F160();
  auStack_280[0] = *(unsigned int *)(iVar2 + 0x38);
  pcStack_26c = (int (**)())auStack_280;
  pppuStack_260 = &ppuStack_270;
  ppuStack_270 = &lbl_821985F4;
  uVar1 = fn_8225C590();
  fn_8225DB68(uVar1,&ppuStack_270);
  fn_822912A8(param_1,auStack_280[0]);
  uStack_230 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_22e,0,0x1fe);
}

