#define true 1
extern int fn_828223C8();
extern int fn_82F672D8();


void fn_8282D970(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int aiStack_20 [2];
  
  fn_82F672D8(param_1,0xffffffff8201ed64,4);
  fn_82F672D8(param_1 + 4,0xffffffff8201ed6c,0x10);
  pcVar3 = (char *)0x0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned char *)(param_1 + 0x50) = 0;
  *(char *)(param_1 + 0x52) = (char)*(unsigned int *)(param_1 + 0x3dc);
  if (*(char *)(param_1 + 0x3ed) != '\0') {
    *(unsigned char *)(param_1 + 0x50) = 1;
  }
  iVar2 = param_1 + 0x2f4;
  while( true ) {
    *(char **)(param_1 + 0x54) = pcVar3;
    fn_828223C8(iVar2,aiStack_20);
    if (aiStack_20[0] == 0) break;
    pcVar3 = *(char **)(aiStack_20[0] + 8);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (*(int *)(param_1 + 0x54) - (int)*(char **)(aiStack_20[0] + 8));
    iVar2 = aiStack_20[0];
  }
  return;
}

