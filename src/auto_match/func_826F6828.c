unsigned __int64 fn_826F6828(int param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  
  bVar1 = *(unsigned char *)(param_1 + 4);
  bVar2 = bVar1 >> 1 & 1;
  if ((bVar2 != 0) && ((bVar1 & 1) != 0)) {
    return 2;
  }
  if ((bVar2 == 0) && ((bVar1 & 1) != 0)) {
    return 1;
  }
  return 0;
}

