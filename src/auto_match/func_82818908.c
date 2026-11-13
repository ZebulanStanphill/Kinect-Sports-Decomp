int fn_82818908(int param_1,unsigned __int64 param_2)

{
  int (**pcVar1)();
  char cVar2;
  
  param_2 = param_2 & 0xffff;
  pcVar1 = *(int (***)())(*(int *)(param_1 + 0x10) + 0x20);
  if (pcVar1 == (int (**)())0x0) {
    cVar2 = '\0';
    for (; *(char *)(param_1 + 0x75) = cVar2, 1 < param_2; param_2 = param_2 >> 1) {
      cVar2 = *(char *)(param_1 + 0x75) + '\x01';
    }
  }
  else {
    (*pcVar1)();
  }
  return 1 << (*(unsigned char *)(param_1 + 0x75) & 0x3f);
}

