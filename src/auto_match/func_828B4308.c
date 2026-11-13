extern int fn_828B3C78();


unsigned __int64 fn_828B4308(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned char cVar2;
  
  piVar1 = (int *)**(int **)(param_1 + 0x20);
  if (piVar1 != *(int **)(param_1 + 0x20)) {
    do {
      cVar2 = fn_828B3C78(param_2,piVar1[2]);
      if (cVar2 == '\x01') {
        return 1;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x20));
  }
  return 0;
}

