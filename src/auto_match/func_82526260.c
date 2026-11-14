extern int fn_8265C990();
extern int XMemSet();
extern int fn_82A1F238();
extern int fn_82A81CD0();


void fn_82526260(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  
  puVar4 = (unsigned int *)0x832767f0;
  lVar3 = 0x23;
  do {
    if (*puVar4 != 0) {
      iVar2 = fn_82A81CD0(param_1,puVar4 + 1);
      if (((iVar2 != 0) && ((param_2 & 0xffffffff) == (unsigned __int64)puVar4[0xfb])) &&
         ((param_3 & 0xffffffff) == (unsigned __int64)puVar4[0xfc])) {
        uVar1 = *puVar4;
        *puVar4 = (unsigned int)((unsigned __int64)uVar1 - 1);
        if ((unsigned __int64)uVar1 - 1 == 0) {
          if ((param_2 & 0xffffffff) != 0) {
            fn_8265C990(param_2,0x21006000);
          }
          if ((param_3 & 0xffffffff) != 0) {
            fn_82A1F238(param_3);
          }
                    /* WARNING: Subroutine does not return */
          XMemSet(puVar4,0,0x3f4);
        }
      }
    }
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 0xfd;
  } while (lVar3 != 0);
  return;
}

