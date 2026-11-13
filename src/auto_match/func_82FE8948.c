#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82A2A378();
extern int fn_82F64CE0();
extern int fn_82F6E8D4();
extern int fn_82FE6540();
extern int fn_82FE88A0();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_82FE8948(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  puVar1 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0x80);
  *puVar1 = register0x0000000c;
  if ((param_1 & 0xffffffff) != 0) {
    uVar2 = fn_82F64CE0(param_1);
    uVar4 = -(uVar2 + 1) & 0xfffffff0;
    fn_82F6E8D4();
    lVar5 = (ZEXT48(&stack0x00000000) - 0x80) + uVar4;
    *(unsigned int *)lVar5 = *puVar1;
    lVar5 = lVar5 + 0x50;
    lVar3 = fn_82F64CE0(param_1);
    uVar4 = uVar2;
    if ((lVar3 + 1U & 0xffffffff) < (uVar2 & 0xffffffff)) {
      lVar3 = fn_82F64CE0(param_1);
      uVar4 = lVar3 + 1;
    }
    fn_82A2A378(0,0,param_1,uVar4,lVar5,uVar2,0,0);
    *(unsigned char *)((int)lVar5 + (int)uVar2) = 0;
    fn_82FE6540(lVar5);
    fn_82FE88A0();
  }
  return;
}

