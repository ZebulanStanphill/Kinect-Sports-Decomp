typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_82681728();
extern int fn_826826A8();
extern int fn_8268B330();
extern int fn_826944C8();
extern int fn_82695520();
extern int fn_8269E088();
extern int fn_826AF618();
extern int fn_8271A720();
extern int fn_8271B248();
extern int fn_82720748();
extern unsigned int iStack_5c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8271B938(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,
                  unsigned int param_5)

{
  unsigned char *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  __int64 lVar8;
  char in_RESERVE;
  unsigned char bVar9;
  unsigned int uStack_60;
  int iStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  
  if ((param_3 & 0xffffffff) != 0) {
    fn_8268B330(&uStack_60);
    fn_8269E088(param_3,&uStack_60);
    lVar8 = param_1 + 0x30;
    puVar4 = (unsigned int *)fn_8271A720(lVar8,&uStack_60);
    bVar9 = (puVar4 == (unsigned int *)0x0) << 1;
    if (puVar4 == (unsigned int *)0x0) {
      puStack_50 = &uStack_60;
      puStack_4c = &uStack_58;
      uStack_58 = param_4;
      uStack_54 = param_5;
      fn_8271B248(lVar8,lVar8,&puStack_50);
    }
    else {
      *puVar4 = param_4;
      puVar4[1] = param_5;
    }
    lVar8 = ((unsigned __int64)uStack_60 & 0xfffffffc) + 4;
    do {
      puVar6 = (unsigned int *)lVar8;
      uVar5 = (unsigned __int64)*puVar6;
      if (in_RESERVE != '\0') {
        uVar7 = storeWordConditionalIndexed(uVar5 - 1,0,lVar8);
        *puVar6 = uVar7;
        bVar9 = 2;
      }
    } while (!(bool)(bVar9 >> 1 & 1));
    if (uVar5 == 1) {
      fn_8267BE38();
    }
  }
  puVar6 = (unsigned int *)(param_2 + 8);
  uVar7 = *(int *)(param_2 + 8) + 0x10;
  *(unsigned int *)(param_2 + 8) = uVar7;
  if (*(unsigned int *)(param_2 + 0x10) <= uVar7) {
    fn_826826A8(puVar6);
  }
  puVar1 = (unsigned char *)*puVar6;
  if (puVar1 != (unsigned char *)0x0) {
    *(unsigned int *)(puVar1 + 8) = param_5;
    *puVar1 = 4;
  }
  uVar7 = *puVar6;
  *puVar6 = uVar7 + 0x10;
  if (*(unsigned int *)(param_2 + 0x10) <= uVar7 + 0x10) {
    fn_826826A8(puVar6);
  }
  puVar1 = (unsigned char *)*puVar6;
  if (puVar1 != (unsigned char *)0x0) {
    *(unsigned int *)(puVar1 + 8) = param_4;
    *puVar1 = 4;
  }
  uVar7 = *puVar6;
  *puVar6 = uVar7 + 0x10;
  if (*(unsigned int *)(param_2 + 0x10) <= uVar7 + 0x10) {
    fn_826826A8(puVar6);
  }
  if (*puVar6 != 0) {
    fn_82695520(*puVar6,param_3);
  }
  lVar8 = param_1 + 0x10;
  if ((param_1 & 0xffffffff) == 0) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(param_2 + 0xc);
  uVar7 = *puVar6;
  uVar3 = *(unsigned int *)(param_2 + 0x1c);
  fn_82681728(&iStack_5c,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,0xffffffff8200eb50);
  fn_82720748(param_2,lVar8,&iStack_5c,3,
                    (__int64)((int)(uVar7 - iVar2) >> 4) + ((unsigned __int64)uVar3 & 0x7ffffff) * 0x20 +
                    -0x20);
  lVar8 = (unsigned __int64)*(unsigned int *)(iStack_5c + 8) - 1;
  *(int *)(iStack_5c + 8) = (int)lVar8;
  if (lVar8 == 0) {
    fn_826944C8(iStack_5c);
  }
  fn_826AF618(puVar6);
  return;
}

