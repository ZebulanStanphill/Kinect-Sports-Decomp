extern unsigned int *auStack_63e;
extern unsigned int *auStack_68c;
extern int memset();
extern unsigned int lbl_820E975C;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_640;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824691D8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int auStack_68c [19];
  unsigned short uStack_640;
  unsigned char auStack_63e [1566];
  
  *param_1 = 9;
  param_1[1] = 0;
  lVar3 = 3;
  param_1[2] = 0;
  uVar1 = ltcg_pool_0_0f;
  param_1[3] = 3;
  param_1[5] = uVar1;
  param_1[4] = 0;
  puVar2 = auStack_68c;
  do {
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uStack_640 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  memset(auStack_63e,0,0x1fe);
}

