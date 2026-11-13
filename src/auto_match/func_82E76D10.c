__int64 fn_82E76D10(int param_1)

{
  char cVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  cVar1 = *(char *)(param_1 + 0x15d);
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
  cVar1 = *(char *)(param_1 + 0x159);
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
  cVar1 = *(char *)(param_1 + 0x15a);
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
  return lVar2 + lVar4 + lVar3 + 1;
}

