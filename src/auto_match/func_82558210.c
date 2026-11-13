extern int fn_82586A48();


void fn_82558210(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = fn_82586A48(param_2);
  pcVar3 = (char *)(param_1 + 2);
  iVar2 = iVar2 - (int)pcVar3;
  do {
    if ((char *)(param_1 + 0x42) <= pcVar3) break;
    cVar1 = pcVar3[iVar2];
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == (char *)(param_1 + 0x42)) {
    pcVar3[-1] = '\0';
  }
  return;
}

