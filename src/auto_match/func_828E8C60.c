extern int fn_8289DDD0();
extern int fn_8289DF30();


void fn_828E8C60(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != *(int *)(param_1 + 0x14)) {
    do {
      iVar3 = *(int *)(iVar2 + 4);
      if (iVar3 == 0) {
LAB_828e8ccc:
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
        goto LAB_828e8ccc;
      }
      if (iVar3 == 0) goto LAB_828e8ccc;
      fn_8289DF30(iVar3);
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_1 + 0x14));
  }
  return;
}

