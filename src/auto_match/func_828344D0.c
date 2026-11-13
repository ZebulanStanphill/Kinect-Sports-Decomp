extern int fn_82834388();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828344D0(__int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  uVar1 = (param_2 - (int)param_1) / 0xc;
  lVar4 = (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  if (0 < lVar4) {
    lVar3 = lVar4 * 0xc + param_1;
    do {
      lVar3 = lVar3 + -0xc;
      puVar2 = (unsigned int *)lVar3;
      uStack_40 = *puVar2;
      lVar4 = lVar4 + -1;
      uStack_3c = puVar2[1];
      uStack_38 = puVar2[2];
      fn_82834388(param_1,lVar4,uVar1,&uStack_40,param_3);
    } while (0 < (int)lVar4);
  }
  return;
}

