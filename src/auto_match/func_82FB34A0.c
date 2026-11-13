extern unsigned int *auStack_28;
extern int fn_82FB3830();
extern int fn_82FF82A8();


__int64 fn_82FB34A0(int param_1,int *param_2)

{
  __int64 lVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puStack_30;
  unsigned int *puStack_2c;
  unsigned char auStack_28 [16];
  
  puStack_30 = *(unsigned int **)(param_1 + 4);
  puVar3 = (unsigned int *)(param_1 + 4);
  puStack_2c = (unsigned int *)0x0;
  if (puStack_30 != (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
    do {
      puStack_2c = puStack_30;
      if (*param_2 < (int)puStack_2c[1]) {
        puStack_30 = puStack_2c;
        puStack_2c = puVar4;
        piVar2 = (int *)fn_82FB3830(auStack_28,puVar3,&puStack_30,param_2);
        if (*piVar2 == 0) {
          return 0;
        }
        if ((puVar4 == (unsigned int *)0x0) && (puVar4 = (unsigned int *)*puVar3, puVar4 == (unsigned int *)0x0)) {
          return 4;
        }
        return (unsigned __int64)*puVar4 + 4;
      }
      puVar4 = puStack_2c;
      puStack_30 = (unsigned int *)*puStack_2c;
    } while ((unsigned int *)*puStack_2c != (unsigned int *)0x0);
    puStack_30 = (unsigned int *)0x0;
  }
  lVar1 = fn_82FF82A8(puVar3);
  return lVar1;
}

