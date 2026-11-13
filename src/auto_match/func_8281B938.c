extern unsigned int *auStack_240;
extern unsigned int uStack_250;
extern unsigned int uStack_254;
extern unsigned int uStack_258;
extern unsigned int uStack_264;
extern unsigned int uStack_268;
extern unsigned int uStack_26c;
extern unsigned int uStack_26d;
extern unsigned int uStack_26e;
extern unsigned int uStack_26f;
extern unsigned int uStack_270;


void fn_8281B938(int (**param_1)(),int param_2,__int64 param_3,__int64 param_4,int param_5,
                  int param_6)

{
  char cVar1;
  int iVar2;
  unsigned char *puVar3;
  char *pcVar4;
  int iVar5;
  unsigned char uStack_270;
  unsigned char uStack_26f;
  unsigned char uStack_26e;
  unsigned char uStack_26d;
  unsigned int uStack_26c;
  unsigned int uStack_268;
  unsigned int uStack_264;
  char *pcStack_260;
  unsigned int *puStack_25c;
  unsigned int uStack_258;
  unsigned int uStack_254;
  unsigned int uStack_250;
  unsigned int auStack_240 [64];
  char acStack_140 [320];
  
  if (((param_2 != 0) && ((*(unsigned int *)(param_2 + 0xc) & 4) != 0)) && (param_6 != 1)) {
    param_3 = (unsigned __int64)*(unsigned int *)(param_2 + 0x78) + param_3;
    param_4 = param_4 + ((unsigned __int64)*(unsigned int *)(param_2 + 0x78) & 0x7fffffff) * -2;
  }
  if (param_5 == 0) {
    if (param_1 == (int (**)())0x0) {
      return;
    }
    puVar3 = (unsigned char *)0x0;
  }
  else {
    uStack_270 = *(unsigned char *)(param_5 + 0x10);
    uStack_26f = *(unsigned char *)(param_5 + 0x11);
    uStack_26e = *(unsigned char *)(param_5 + 0x12);
    uStack_26d = *(unsigned char *)(param_5 + 0x13);
    uStack_26c = *(unsigned int *)(param_5 + 0x18);
    uStack_268 = *(unsigned int *)(param_5 + 0x1c);
    uStack_264 = *(unsigned int *)(param_5 + 0x20);
    pcVar4 = *(char **)(param_5 + 0x24);
    iVar5 = -(int)pcVar4;
    do {
      cVar1 = *pcVar4;
      pcVar4[(int)(acStack_140 + iVar5)] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcStack_260 = acStack_140;
    iVar5 = 0;
    if (*(int *)(param_5 + 0x28) == 0) {
      auStack_240[0] = 0;
    }
    else {
      iVar2 = *(int *)(param_5 + 0x28);
      do {
        *(unsigned int *)((int)auStack_240 + iVar5) = *(unsigned int *)(iVar5 + iVar2);
        if (*(int *)(iVar5 + iVar2) == 0) break;
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0x100);
    }
    uStack_258 = *(unsigned int *)(param_5 + 0xc);
    puStack_25c = auStack_240;
    uStack_254 = *(unsigned int *)(param_5 + 0x2c);
    uStack_250 = *(unsigned int *)(param_5 + 0x30);
    if (param_1 == (int (**)())0x0) {
      return;
    }
    puVar3 = &uStack_270;
  }
  (*param_1)(param_2,param_3,param_4,puVar3);
  return;
}

