extern unsigned int *auStack_30;
extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_8234D690();
extern int fn_82560010();


unsigned __int64 fn_8234C398(int param_1,int param_2)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned char *puVar3;
  unsigned char auStack_50 [32];
  unsigned char auStack_30 [32];
  
  if (param_2 == 0) {
    puVar2 = (unsigned int *)fn_8234D690(auStack_30,0xffffffff821b1ce8);
    if (0xf < (unsigned int)puVar2[5]) {
      puVar2 = (unsigned int *)*puVar2;
    }
    uVar1 = fn_82560010(**(unsigned int **)(param_1 + 0x114),puVar2);
    puVar3 = auStack_30;
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    puVar2 = (unsigned int *)fn_8234D690(auStack_50,0xffffffff821b1cf4);
    if (0xf < (unsigned int)puVar2[5]) {
      puVar2 = (unsigned int *)*puVar2;
    }
    uVar1 = fn_82560010(**(unsigned int **)(param_1 + 0x114),puVar2);
    puVar3 = auStack_50;
  }
  fn_82230300(puVar3,1,0);
  return uVar1;
}

