typedef unsigned char bool;
extern int fn_8264D6C0();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8262FBD8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  
  puVar3 = (unsigned int *)param_1;
  if ((*puVar3 & 0xf00) == 0x100) {
    uVar1 = puVar3[5];
    if (uVar1 != 0xffff0000) {
      uVar4 = ((unsigned __int64)(uVar1 >> 0x10) & 0x7fff) << 4;
      if ((uVar1 >> 0x10 & 0x8000) == 0) {
        uVar4 = (unsigned __int64)(uVar1 >> 0x10);
      }
      uVar5 = ((unsigned __int64)uVar1 & 0x7fff) << 4;
      if ((uVar1 & 0x8000) == 0) {
        uVar5 = (unsigned __int64)uVar1 & 0xffff;
      }
      bVar2 = (*puVar3 & 0x200000) == 0;
      in_cr0 = bVar2 << 1;
      puVar3[5] = 0xffff0000;
      if (bVar2) {
        param_2 = ((((param_2 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (param_2 & 0x1fffffff)) -
                  0x40000000;
      }
      fn_8264D6C0(uVar4 * 0x80 + (param_2 & 0xffffff80),uVar5 * 0x80 + (param_2 & 0xffffff80),0);
    }
    if (((param_3 & 0xffffffff) != 0) && (uVar1 = puVar3[6], uVar1 != 0xffff0000)) {
      uVar4 = ((unsigned __int64)(uVar1 >> 0x10) & 0x7fff) << 4;
      if ((uVar1 >> 0x10 & 0x8000) == 0) {
        uVar4 = (unsigned __int64)(uVar1 >> 0x10);
      }
      uVar5 = ((unsigned __int64)uVar1 & 0x7fff) << 4;
      if ((uVar1 & 0x8000) == 0) {
        uVar5 = (unsigned __int64)uVar1 & 0xffff;
      }
      puVar3[6] = 0xffff0000;
      bVar2 = (*puVar3 & 0x200000) == 0;
      in_cr0 = bVar2 << 1;
      if (bVar2) {
        param_3 = ((((param_3 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (param_3 & 0x1fffffff)) -
                  0x40000000;
      }
      fn_8264D6C0(uVar4 * 0x80 + (param_3 & 0xffffff80),uVar5 * 0x80 + (param_3 & 0xffffff80),0);
    }
  }
  sync(0);
  do {
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar3 - 0x100,0,param_1);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return;
}

