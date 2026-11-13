extern int fn_8289DDD0();
extern int fn_8289DF30();
extern int fn_828A0198();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_828E4B88(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned int *puVar2;
  int iVar3;
  struct { unsigned int first; int second; } stack_pair_40;

  
  puVar2 = *(unsigned int **)(param_1 + 0x10);
  if (puVar2 != *(unsigned int **)(param_1 + 0x14)) {
    do {
      iVar3 = puVar2[1];
      stack_pair_40.first = 0;
      stack_pair_40.second = iVar3;
      if (iVar3 == 0) {
LAB_828e4c20:
        *(unsigned char *)(param_1 + 4) = 0;
        if (iVar3 == 0) {
          return;
        }
        fn_8289DF30(iVar3);
        return;
      }
      cVar1 = fn_8289DDD0(iVar3);
      if (cVar1 == '\0') {
        iVar3 = 0;
        goto LAB_828e4c20;
      }
      stack_pair_40.first = *puVar2;
      if (iVar3 == 0) goto LAB_828e4c20;
      fn_828A0198(param_2,&stack_pair_40.first);
      if (iVar3 != 0) {
        fn_8289DF30(iVar3);
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 != *(unsigned int **)(param_1 + 0x14));
  }
  return;
}

