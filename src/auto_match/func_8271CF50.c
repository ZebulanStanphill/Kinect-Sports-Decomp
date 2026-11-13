typedef unsigned char bool;
extern unsigned int *auStack_24;
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_8271BF18();
extern int fn_827AE240();
extern unsigned int uStack_2c;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8271CF50(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar4;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  char in_RESERVE;
  unsigned char bVar8;
  unsigned int *puStack_30;
  unsigned int uStack_2c;
  unsigned int *puStack_28;
  unsigned int auStack_24 [9];
  
  cVar4 = fn_82695468(param_1,0x1b);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee50,0,0);
  }
  else {
    uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar7 = 0;
    }
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    fn_82696D38(&puStack_30,uVar3,uVar1,0xffffffffffffffff,0);
    fn_8268C510(auStack_24,*puStack_30);
    lVar6 = (unsigned __int64)(unsigned int)puStack_30[2] - 1;
    bVar8 = (lVar6 == 0) << 1;
    puStack_30[2] = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8(puStack_30);
    }
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    fn_82696D38(&puStack_28,uVar3,uVar1,0xffffffffffffffff,0);
    fn_8268C510(&uStack_2c,*puStack_28);
    lVar6 = uVar7 + 0x10;
    if ((uVar7 & 0xffffffff) == 0) {
      lVar6 = 0;
    }
    uVar3 = fn_8271BF18(*(unsigned int *)(param_1 + 0x18),lVar6,&uStack_2c);
    fn_827AE240(uVar7,*(unsigned int *)(param_1 + 0x18),uVar3);
    lVar6 = ((unsigned __int64)uStack_2c & 0xfffffffc) + 4;
    do {
      puVar5 = (unsigned int *)lVar6;
      uVar7 = (unsigned __int64)*puVar5;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar6);
        *puVar5 = uVar2;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
    if (uVar7 == 1) {
      fn_8267BE38();
    }
    lVar6 = (unsigned __int64)(unsigned int)puStack_28[2] - 1;
    bVar8 = (lVar6 == 0) << 1;
    puStack_28[2] = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8(puStack_28);
    }
    lVar6 = ((unsigned __int64)auStack_24[0] & 0xfffffffc) + 4;
    do {
      puVar5 = (unsigned int *)lVar6;
      uVar7 = (unsigned __int64)*puVar5;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar6);
        *puVar5 = uVar2;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
    if (uVar7 == 1) {
      fn_8267BE38();
    }
  }
  return;
}

