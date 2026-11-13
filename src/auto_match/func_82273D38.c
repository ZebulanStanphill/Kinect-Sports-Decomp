extern unsigned int *auStack_23e;
extern int fn_82273FC8();
extern int fn_82274130();
extern int fn_82274250();
extern int fn_82279768();
extern int fn_822C5B18();
extern int fn_8248F4B8();
extern int fn_82BA02A8();
extern int memset();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_82193CD8;
extern unsigned int lbl_821A7FEC;
extern unsigned int lbl_821A7FF4;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_83265988;
extern unsigned int uStack_240;


/* WARNING: Removing unreachable block (ram,0x82273d60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82273D38(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  char cVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned char **ppuStack_280;
  int (**pcStack_27c)();
  unsigned char ***pppuStack_270;
  unsigned short uStack_240;
  unsigned char auStack_23e [574];

  pcStack_27c = fn_8248F4B8;
  pppuStack_270 = &ppuStack_280;
  ppuStack_280 = &lbl_821A7FF4;
  fn_82279768(param_1,param_2,0,1,1,&ppuStack_280,0,1);
  *param_1 = &lbl_821A7FEC;
  param_1[0x4c] = &lbl_821A8C90;
  fn_822C5B18(param_1 + 0x52,param_3);
  param_1[0x58] = 0;
  param_1[0x4d] = param_1;
  param_1[0x4e] = fn_82274250;
  param_1[0x4f] = fn_82BA02A8;
  param_1[0x50] = fn_82BA02A8;
  param_1[0x29] = param_1 + 0x4c;
  iVar3 = lbl_83265988;
  if (lbl_83265988 != 0) {
    uVar5 = 0;
    puVar4 = (unsigned int *)&lbl_82193CD8;
    do {
      uVar1 = *puVar4;
      if ((uVar1 == 0) ||
         (cVar2 = '\x01',
         ((unsigned int)*(unsigned char *)(*(int *)(*(int *)(iVar3 + 0xf0) + 8) + (uVar1 >> 3)) & 1 << (uVar1 & 7))
         == 0)) {
        cVar2 = '\0';
      }
      fn_82274130(param_1,uVar5,cVar2 + '\x02');
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while ((uVar5 & 0xffffffff) < 6);
  }
  fn_82273FC8(param_1);
  uStack_240 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  memset(auStack_23e,0,0x1fe);
}
