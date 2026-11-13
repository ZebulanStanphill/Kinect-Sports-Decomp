extern unsigned int *auStack_42e;
extern unsigned int *auStack_45c;
extern int fn_8227F818();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821A89BC;
extern unsigned int uStack_430;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8227F950(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int auStack_45c [11];
  unsigned short uStack_430;
  unsigned char auStack_42e [1070];
  
  fn_8227F818(param_1,param_2,0xffffffff820e975c);
  puVar1 = auStack_45c;
  *param_1 = &lbl_821A89BC;
  lVar2 = 2;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  uStack_430 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_42e,0,0x1fe);
}

