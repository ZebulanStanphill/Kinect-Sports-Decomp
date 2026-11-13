extern int fn_82230360();
extern int fn_82F6DCE0();
extern int fn_82F8DBA0();
extern unsigned int uStack_2d;


__int64 fn_82E1C150(int param_1)

{
  char cVar1;
  __int64 lVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  char *pcVar5;
  char acStack_130 [259];
  unsigned char uStack_2d;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x4c) == 0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    if (*(char *)(param_1 + 8) == '\x01') {
      puVar4 = (unsigned int *)(param_1 + 0xc);
      *(unsigned int *)(param_1 + 0x1c) = 0;
      if (0xf < *(unsigned int *)(param_1 + 0x20)) {
        puVar4 = (unsigned int *)*puVar4;
      }
      *(unsigned char *)puVar4 = 0;
      *(unsigned char *)(param_1 + 8) = 0;
    }
    puVar4 = (unsigned int *)(param_1 + 0x3c);
    if (0xf < *(unsigned int *)(param_1 + 0x50)) {
      puVar4 = (unsigned int *)*puVar4;
    }
    lVar2 = fn_82F8DBA0(puVar4,*(unsigned int *)(param_1 + 4),0,param_1 + 0x58);
    if (-1 < lVar2) {
      uVar3 = (**(int (***)())(**(int **)(param_1 + 0x5c) + 0xc))();
      *(unsigned int *)(param_1 + 0x2c) = uVar3;
      *(unsigned short *)(param_1 + 0x28) = 2;
      *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(param_1 + 0x38);
      fn_82F6DCE0(acStack_130,0x103,0xffffffff820eb130,*(unsigned char *)(param_1 + 0x2c),
                        *(unsigned char *)(param_1 + 0x2d),*(unsigned char *)(param_1 + 0x2e),
                        *(unsigned char *)(param_1 + 0x2f));
      uStack_2d = 0;
      pcVar5 = acStack_130;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      fn_82230360(param_1 + 0xc,acStack_130,pcVar5 + (-1 - (int)acStack_130));
      *(unsigned char *)(param_1 + 8) = 1;
    }
  }
  return lVar2;
}

