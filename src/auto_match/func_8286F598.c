extern int fn_8286F3A8();
extern int fn_8287A7A8();
extern int fn_8287A7B0();
extern int fn_8287A7D0();
extern int fn_82F63CA0();


unsigned __int64 fn_8286F598(int param_1)

{
  unsigned int uVar1;
  char cVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  puVar5 = *(unsigned int **)(param_1 + 0x14);
  puVar4 = puVar5;
  if (puVar5 != *(unsigned int **)(param_1 + 0x18)) {
    do {
      puVar4 = puVar4 + 1;
      uVar1 = *puVar5;
      cVar3 = fn_8287A7B0(uVar1);
      if (cVar3 == '\0') {
        cVar3 = fn_8287A7D0(uVar1);
        if (cVar3 != '\0') {
          uVar2 = fn_8287A7A8(uVar1);
          fn_8286F3A8(param_1,uVar2);
        }
      }
      else {
        fn_82F63CA0(puVar5,puVar4,(*(int *)(param_1 + 0x18) - (int)puVar4 >> 2) << 2);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -4;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(unsigned int **)(param_1 + 0x18));
  }
  return 0x20100000;
}

