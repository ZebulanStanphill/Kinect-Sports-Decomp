typedef unsigned char bool;
extern unsigned int lbl_820082FC;
extern unsigned int stack0x00000010;
extern unsigned int stack0x00000018;
extern unsigned int uStack00000010;


bool fn_826BC9A0(unsigned __int64 param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned __int64 uStack00000010;
  
  uStack00000010 = param_1;
  pbVar4 = (unsigned char *)&stack0x00000010;
  pbVar3 = &lbl_820082FC;
  do {
    bVar1 = *pbVar4;
    bVar2 = *pbVar3;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (pbVar4 != &stack0x00000018);
  return (int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0;
}

