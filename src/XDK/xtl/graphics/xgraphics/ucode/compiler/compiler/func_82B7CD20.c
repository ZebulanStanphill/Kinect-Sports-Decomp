extern unsigned int *auStack_b0;
extern int fn_82B7C958();
extern int sprintf();


void fn_82B7CD20(int param_1)

{
  unsigned int *puVar1;
  unsigned __int64 *puVar2;
  __int64 lVar3;
  unsigned __int64 *puVar4;
  unsigned char auStack_b0 [176];
  
  fn_82B7C958(param_1,0xffffffff820db560,0xffffffff820db584,0xffffffff820db58c);
  puVar4 = (unsigned __int64 *)(param_1 + 0x848);
  lVar3 = 0x10;
  do {
    puVar1 = (unsigned int *)((int)puVar4 + 0x24);
    puVar2 = puVar4 + 4;
    puVar4 = puVar4 + 3;
    sprintf(auStack_b0,0xffffffff820db544,*puVar1,*(unsigned int *)puVar2,*puVar4);
    fn_82B7C958(param_1,auStack_b0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

