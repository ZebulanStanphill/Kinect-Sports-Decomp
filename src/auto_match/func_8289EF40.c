#define true 1
extern int fn_82381BC0();


unsigned __int64 fn_8289EF40(int param_1)

{
  unsigned int *puVar1;
  unsigned int *apuStack_20 [4];
  
  puVar1 = *(unsigned int **)(param_1 + 0x220);
  apuStack_20[0] = (unsigned int *)*puVar1;
  while( true ) {
    if (apuStack_20[0] == puVar1) {
      return 0;
    }
    if (*(char *)(apuStack_20[0][4] + 0x24) != '\0') break;
    fn_82381BC0(apuStack_20);
  }
  return 1;
}

