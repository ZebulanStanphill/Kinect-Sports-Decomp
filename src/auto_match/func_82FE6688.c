#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F68CC0();
extern int fn_82F6E8D4();
extern int fn_8300F0E8();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


unsigned __int64 fn_82FE6688(unsigned int param_1,unsigned __int64 param_2,unsigned short param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  
  puVar1 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0xa0);
  *puVar1 = register0x0000000c;
  uVar3 = (unsigned __int64)param_3;
  if (((uVar3 == 0) || ((param_2 & 0xffffffff) == 0)) || (2 < param_4)) {
    uVar5 = 0x1f;
  }
  else {
    uVar4 = fn_8300F0E8();
    lVar6 = (uVar4 & 0xffff) + (uVar3 + (unsigned __int64)param_3 * 2) * 8;
    uVar4 = -lVar6 & 0xfffffff0;
    fn_82F6E8D4();
    lVar7 = (ZEXT48(&stack0x00000000) - 0xa0) + uVar4;
    puVar2 = (unsigned int *)lVar7;
    *puVar2 = *puVar1;
    lVar7 = lVar7 + 0x50;
    if (lVar7 != 0) {
      *(unsigned short *)((int)puVar2 + 0x52) = 0x21;
    }
    puVar2[0x17] = param_4;
    puVar2[0x15] = param_1;
    *(unsigned short *)(puVar2 + 0x16) = param_3;
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        fn_82F68CC0(uVar4 * 0x18 + lVar7 + 0x10,uVar4 * 0x18 + param_2,0x18);
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < uVar3);
    }
    uVar5 = fn_8300F208(lbl_832642E4,lVar7,lVar6);
  }
  return uVar5;
}

