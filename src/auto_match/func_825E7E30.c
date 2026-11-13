typedef unsigned char bool;
extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_82A1E6A0();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_825E7E30(__int64 param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int uVar3;
  char in_RESERVE;
  unsigned char bVar4;
  unsigned int *apuStack_20 [2];
  
  lVar2 = fn_8265C9E0(0x20);
  bVar4 = (lVar2 == 0) << 1;
  if (lVar2 == 0) {
    apuStack_20[0] = (unsigned int *)0x0;
  }
  else {
    puVar1 = (unsigned int *)lVar2;
    puVar1[2] = (int)param_1;
    uVar3 = fn_82A1E6A0(0,1,0,0);
    *puVar1 = uVar3;
    do {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(0,0,lVar2 + 4);
        *(unsigned int *)(lVar2 + 4) = uVar3;
        bVar4 = 2;
      }
    } while (!(bool)(bVar4 >> 1 & 1));
    sync(0);
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    apuStack_20[0] = puVar1;
  }
  fn_82536690(param_1 + 4,apuStack_20);
  return;
}

