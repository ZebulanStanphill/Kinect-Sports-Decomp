#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82876B90();
extern int fn_82F68CC0();
extern int fn_82F6E8D4();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


unsigned __int64 fn_82869890(__int64 param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  char *pcVar5;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  
  puVar1 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0x80);
  *puVar1 = register0x0000000c;
  lVar3 = param_1 + 0x318;
  do {
    pcVar5 = (char *)lVar3;
    lVar3 = lVar3 + 1;
  } while (*pcVar5 != '\0');
  uVar4 = (lVar3 - (param_1 + 0x318)) - 1;
  uVar6 = uVar4 & 0xffffffff;
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  else {
    uVar6 = -uVar6 & 0xfffffff0;
    fn_82F6E8D4();
    lVar3 = (ZEXT48(&stack0x00000000) - 0x80) + uVar6;
    *(unsigned int *)lVar3 = *puVar1;
    lVar3 = lVar3 + 0x50;
    if (lVar3 == 0) {
      return 2;
    }
    fn_82F68CC0(lVar3);
    *(unsigned char *)((int)lVar3 + (int)uVar4 + -1) = 0;
  }
  uVar2 = fn_82876B90(param_2 + 8,lVar3);
  return uVar2;
}

