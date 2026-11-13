typedef unsigned char bool;
extern int fn_8264D6C0();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82630158(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  
  puVar3 = (unsigned int *)param_1;
  uVar2 = puVar3[6];
  uVar5 = (unsigned __int64)uVar2 & 0xfffffffc;
  uVar6 = 0;
  if ((*puVar3 & 0xf00) == 0x100) {
    uVar1 = puVar3[5];
    if (uVar1 != 0xffff0000) {
      uVar7 = ((unsigned __int64)(uVar1 >> 0x10) & 0x7fff) << 4;
      if ((uVar1 >> 0x10 & 0x8000) == 0) {
        uVar7 = (unsigned __int64)(uVar1 >> 0x10);
      }
      uVar8 = ((unsigned __int64)uVar1 & 0x7fff) << 4;
      if ((uVar1 & 0x8000) == 0) {
        uVar8 = (unsigned __int64)uVar1 & 0xffff;
      }
      bVar4 = (*puVar3 & 0x200000) == 0;
      in_cr0 = bVar4 << 1;
      puVar3[5] = 0xffff0000;
      if (bVar4) {
        uVar5 = (((unsigned __int64)(uVar2 >> 0x14) + 0x200 & 0x1000) + ((unsigned __int64)uVar2 & 0x1ffffffc)) -
                0x40000000;
      }
      fn_8264D6C0(uVar7 * 0x80 + (uVar5 & 0xffffff80),uVar8 * 0x80 + (uVar5 & 0xffffff80),0);
    }
    if (((uVar6 & 0xffffffff) != 0) && (uVar2 = puVar3[6], uVar2 != 0xffff0000)) {
      uVar5 = ((unsigned __int64)(uVar2 >> 0x10) & 0x7fff) << 4;
      if ((uVar2 >> 0x10 & 0x8000) == 0) {
        uVar5 = (unsigned __int64)(uVar2 >> 0x10);
      }
      uVar7 = ((unsigned __int64)uVar2 & 0x7fff) << 4;
      if ((uVar2 & 0x8000) == 0) {
        uVar7 = (unsigned __int64)uVar2 & 0xffff;
      }
      puVar3[6] = 0xffff0000;
      bVar4 = (*puVar3 & 0x200000) == 0;
      in_cr0 = bVar4 << 1;
      if (bVar4) {
        uVar6 = ((((uVar6 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff)) -
                0x40000000;
      }
      fn_8264D6C0(uVar5 * 0x80 + (uVar6 & 0xffffff80),uVar7 * 0x80 + (uVar6 & 0xffffff80),0);
    }
  }
  sync(0);
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar3 - 0x100,0,param_1);
      *puVar3 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return;
}

