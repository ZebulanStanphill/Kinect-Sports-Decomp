extern unsigned int *auStack_1ae;
extern unsigned int *auStack_1ec;
extern int memset();
extern unsigned int lbl_820E975C;
extern unsigned int uStack_1b0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82469800(void)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int auStack_1ec [15];
  unsigned short uStack_1b0;
  unsigned char auStack_1ae [414];
  
  puVar1 = auStack_1ec;
  lVar2 = 3;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  uStack_1b0 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  memset(auStack_1ae,0,0x7e);
}

