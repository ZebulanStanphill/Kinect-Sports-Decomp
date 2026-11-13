extern int fn_8285F118();
extern unsigned int lbl_83211330;


void fn_82859BE8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  __int64 lVar2;
  unsigned short *puVar3;
  __int64 lVar4;
  
  puVar3 = (unsigned short *)(param_1 + 0x1c);
  lVar2 = 8;
  do {
    if ((unsigned __int64)*puVar3 != 0) {
      lVar4 = (unsigned __int64)*puVar3 * 0x2c + (unsigned __int64)lbl_83211330;
      if (lVar4 != 0) {
        iVar1 = fn_8285F118(lVar4);
        if (iVar1 == 0) {
          fn_82859BE8(lVar4,param_2,param_3);
        }
      }
    }
    lVar2 = lVar2 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar2 != 0);
  return;
}

