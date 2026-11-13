typedef unsigned char bool;
#define false 0
extern int fn_82A3BE50();
extern int fn_82A3F4C8();


bool fn_82A3F198(int param_1)

{
  unsigned char uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    uVar1 = fn_82A3BE50(param_1,3);
    *(unsigned char *)(param_1 + 0xe34 + iVar4) = uVar1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  if (*(char *)(param_1 + 0x2eb7) == '\0') {
    cVar2 = fn_82A3F4C8(param_1,param_1 + 0xe34,param_1 + 0xdb4);
    bVar3 = cVar2 != '\0';
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

