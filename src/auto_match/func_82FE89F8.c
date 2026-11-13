#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F664B0();
extern int fn_82F6E8D4();
extern int fn_82FE6540();
extern int fn_82FE88A0();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_82FE89F8(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  char *pcVar3;
  unsigned __int64 uVar2;
  __int64 lVar4;
  
  puVar1 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0x70);
  *puVar1 = register0x0000000c;
  uVar2 = param_1;
  if ((param_1 & 0xffffffff) != 0) {
    do {
      pcVar3 = (char *)uVar2;
      uVar2 = uVar2 + 1;
    } while (*pcVar3 != '\0');
    uVar2 = -(((uVar2 - param_1) - 1 & 0xffffffff) + 1) & 0xfffffff0;
    fn_82F6E8D4();
    lVar4 = (ZEXT48(&stack0x00000000) - 0x70) + uVar2;
    *(unsigned int *)lVar4 = *puVar1;
    lVar4 = lVar4 + 0x50;
    fn_82F664B0(lVar4);
    fn_82FE6540(lVar4);
    fn_82FE88A0();
  }
  return;
}

