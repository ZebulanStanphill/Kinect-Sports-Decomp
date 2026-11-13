extern int fn_83029BB0();
extern int fn_83029CF0();


unsigned __int64 fn_8302A198(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((*(unsigned int *)(param_1 + 0x1c) & 1) == 0) {
      cVar1 = fn_83029BB0();
    }
    else {
      cVar1 = fn_83029CF0();
    }
    if (((*(unsigned int *)(param_1 + 0x1c) & 2) != 0) &&
       ((cVar1 == '\0' || (*(char *)(param_1 + 0x21) != '\0')))) {
      *(unsigned short *)(param_1 + 0x18) = 0;
      return 1;
    }
  }
  return 0x11;
}

