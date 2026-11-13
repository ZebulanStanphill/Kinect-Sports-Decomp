__int64 fn_82E76C40(int param_1)

{
  char cVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  cVar1 = *(char *)(param_1 + 0x151);
  lVar2 = 0;
  if (cVar1 == '\x01') {
    lVar2 = 1;
  }
  else if (cVar1 == '\x02') {
    lVar2 = 2;
  }
  else if (cVar1 == '\x03') {
    lVar2 = 4;
  }
  cVar1 = *(char *)(param_1 + 0x153);
  lVar3 = 0;
  if (cVar1 == '\x01') {
    lVar3 = 1;
  }
  else if (cVar1 == '\x02') {
    lVar3 = 2;
  }
  else if (cVar1 == '\x03') {
    lVar3 = 4;
  }
  cVar1 = *(char *)(param_1 + 0x152);
  lVar4 = 0;
  if (cVar1 == '\x01') {
    lVar4 = 1;
  }
  else if (cVar1 == '\x02') {
    lVar4 = 2;
  }
  else if (cVar1 == '\x03') {
    lVar4 = 4;
  }
  lVar4 = lVar4 + lVar3 + lVar2;
  if (*(int *)(param_1 + 0x154) == 0) {
    return lVar4 + 8;
  }
  return lVar4 + 9;
}

