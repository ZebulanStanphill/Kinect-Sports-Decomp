extern unsigned int *auStack_48;
extern unsigned int *auStack_60;
extern int fn_8223C610();
extern int fn_82429898();
extern int fn_828ABF58();
extern int fn_82F622E0();
extern unsigned int lbl_821B8C0C;
extern unsigned int uStack_4c;


/* WARNING: Type propagation algorithm not settling */

void fn_82429E60(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int auStack_60 [4];
  unsigned char **ppuStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_48 [24];
  
  uVar4 = 0;
  uStack_4c = 0;
  ppuStack_50 = &lbl_821B8C0C;
  fn_828ABF58(auStack_48,0,0,3);
  fn_82429898(&ppuStack_50,param_2,auStack_60 + 1);
  auStack_60[0] = 0;
  do {
    lVar3 = fn_8223C610(param_2,1,0,0);
    if (9 < uVar4) {
                    /* WARNING: Subroutine does not return */
      fn_82F622E0(0xffffffff821b5f00);
    }
    uVar1 = 1 << (uVar4 & 0x1f);
    if (lVar3 == 0) {
      uVar2 = uVar4 >> 3 & 0x1ffffffc;
      *(unsigned int *)((int)auStack_60 + uVar2) = *(unsigned int *)((int)auStack_60 + uVar2) & ~uVar1;
    }
    else {
      uVar2 = uVar4 >> 3 & 0x1ffffffc;
      *(unsigned int *)((int)auStack_60 + uVar2) = uVar1 | *(unsigned int *)((int)auStack_60 + uVar2);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 10);
  if (param_3 != 0) {
    *(unsigned int *)(param_3 + 8) = auStack_60[1];
    *(unsigned int *)(param_3 + 0xc) = auStack_60[0];
  }
  return;
}

