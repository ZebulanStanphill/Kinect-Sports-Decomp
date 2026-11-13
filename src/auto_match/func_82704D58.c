typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_18;
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_826959C8();
extern int fn_826F8A98();
extern int fn_82704528();
extern unsigned int uStack_1c;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82704D58(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  char cVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char bVar8;
  char acStack_20 [4];
  unsigned int uStack_1c;
  unsigned int auStack_18 [2];
  
  fn_8268B330(&uStack_1c);
  cVar4 = fn_826F8A98(*(unsigned int *)(param_1 + 0x14),&uStack_1c,auStack_18,acStack_20);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*(char *)(iVar1 + 0x78) == '\0') || (cVar4 == '\0')) {
    if (cVar4 == '\0') {
      lVar6 = ((unsigned __int64)uStack_1c & 0xfffffffc) + 4;
      puVar7 = (unsigned int *)lVar6;
      uVar5 = (unsigned __int64)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
        *puVar7 = uVar2;
      }
      if (uVar5 == 1) {
        fn_8267BE38();
      }
      return 0;
    }
    bVar8 = (acStack_20[0] == '\0') << 1;
    if ((acStack_20[0] == '\0') && (*(char *)(iVar1 + 0x30) == '\x06')) {
      fn_826959C8(iVar1 + 0x30);
    }
    fn_82704528(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x10),
                  *(unsigned int *)(param_1 + 0x18),&uStack_1c,auStack_18[0]);
    lVar6 = ((unsigned __int64)uStack_1c & 0xfffffffc) + 4;
    do {
      puVar7 = (unsigned int *)lVar6;
      uVar5 = (unsigned __int64)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
        *puVar7 = uVar2;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
  }
  else {
    lVar6 = ((unsigned __int64)uStack_1c & 0xfffffffc) + 4;
    bVar3 = false;
    do {
      puVar7 = (unsigned int *)lVar6;
      uVar5 = (unsigned __int64)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
        *puVar7 = uVar2;
        bVar3 = true;
      }
    } while (!bVar3);
  }
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  return 1;
}

