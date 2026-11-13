extern unsigned int *auStack_30;
extern int fn_82CE08D0();
extern int fn_82CE08E0();
extern int fn_82CE0A20();


void fn_82459C60(int param_1)

{
  int iVar1;
  unsigned char auStack_30 [32];
  
  if (*(unsigned int *)(param_1 + 0x20) != 0) {
    fn_82CE08E0(*(int *)(param_1 + 0x20),1);
    do {
      iVar1 = fn_82CE0A20(*(unsigned int *)(param_1 + 0x20),auStack_30,0x20,0);
      if (iVar1 == 0) break;
    } while (iVar1 != -1);
    fn_82CE08D0(*(unsigned int *)(param_1 + 0x20));
    *(unsigned int *)(param_1 + 0x20) = 0;
  }
  return;
}

