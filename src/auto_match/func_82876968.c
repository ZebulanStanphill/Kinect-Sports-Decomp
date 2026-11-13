#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F66368();
extern int fn_82F6E8D4();
extern int fn_82FE89F8();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


unsigned __int64 fn_82876968(int param_1,__int64 param_2)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  char *pcVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  __int64 lVar7;
  
  puVar2 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0x70);
  *puVar2 = register0x0000000c;
  lVar4 = param_2;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    do {
      pcVar5 = (char *)lVar4;
      lVar4 = lVar4 + 1;
    } while (*pcVar5 != '\0');
    lVar4 = ((lVar4 - param_2) - 1U & 0xffffffff) + 1;
    uVar6 = -lVar4 & 0xfffffff0;
    fn_82F6E8D4();
    lVar7 = (ZEXT48(&stack0x00000000) - 0x70) + uVar6;
    *(unsigned int *)lVar7 = *puVar2;
    lVar7 = lVar7 + 0x50;
    fn_82F66368(lVar7,lVar4);
    cVar1 = *(char *)lVar7;
    lVar4 = lVar7;
    while (cVar1 != '\0') {
      if (*(char *)lVar4 == '.') {
        *(char *)lVar4 = '\0';
        break;
      }
      lVar4 = lVar4 + 1;
      cVar1 = *(char *)lVar4;
    }
    uVar3 = fn_82FE89F8(lVar7);
  }
  return uVar3;
}

