extern int fn_8269D9C0();
extern int fn_826AEA50();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_44;


unsigned __int64 fn_8269EAF0(unsigned __int64 param_1,int param_2,int *param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  struct { int first; int second; } stack_pair_50;

  int iStack_48;
  unsigned int uStack_44;
  
  stack_pair_50.first = *param_3;
  if ((stack_pair_50.first == 0x40) || (stack_pair_50.first == 0x80)) {
    stack_pair_50.second = 0;
    iStack_48 = 0xff;
    uStack_44 = ((((unsigned __int64)(uStack_44)) & (~(((unsigned __int64)0xFFFFFF) << 8))) | ((((unsigned __int64)((((unsigned __int64)(uStack_44) >> 8) & 0xFFFFFF) & 0xffff)) & ((unsigned __int64)0xFFFFFF)) << 8));
    uStack_44 = (unsigned int)(((unsigned __int64)(uStack_44) >> 8) & 0xFFFFFF);
  }
  else {
    stack_pair_50.second = param_3[1];
    iStack_48 = param_3[2];
    uStack_44 = param_3[3];
  }
  iVar2 = fn_8269D9C0(param_1 + 0x88,&stack_pair_50.first);
  puVar4 = (unsigned int *)(-(unsigned int)(iVar2 != 0) & iVar2 + 0x10U);
  if (puVar4 == (unsigned int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar5 = (unsigned __int64)puVar4[1];
    if (uVar5 != 0) {
      lVar6 = 0;
      do {
        lVar3 = param_1 + 0x68;
        if ((param_1 & 0xffffffff) == 0) {
          lVar3 = 0;
        }
        fn_826AEA50((unsigned __int64)*puVar4 + lVar6,0,lVar3,param_2,0,
                          (__int64)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0xc) >> 4) +
                          ((unsigned __int64)*(unsigned int *)(param_2 + 0x1c) & 0x7ffffff) * 0x20 + -0x1f,0);
        uVar5 = uVar5 - 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar5 != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

