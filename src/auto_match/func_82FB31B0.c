extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FB3100();
extern int fn_82FB6A10();
extern unsigned int lbl_831BC768;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


unsigned __int64 fn_82FB31B0(unsigned __int64 param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  unsigned __int64 uVar6;
  unsigned int *puStack0000001c;
  unsigned int uStack00000024;
  
  puStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar2 = fn_82FB6A10(param_1,&stack0x0000001c,&stack0x00000024,0);
  uVar1 = *puStack0000001c;
  uVar6 = (unsigned __int64)uVar1;
  if (uVar6 != 0) {
    puStack0000001c = puStack0000001c + 1;
    iVar3 = fn_82FA5060(lbl_831BC768,
                              (uVar6 + ((unsigned __int64)uVar1 & 0x7fffffff) * 2 & 0x1fffffff) << 3);
    if (iVar3 == 0) {
      uVar2 = 2;
    }
    else {
      if (uVar6 != 0) {
        pcVar5 = (char *)(iVar3 + -1);
        do {
          *(unsigned int *)(pcVar5 + 1) = *puStack0000001c;
          *(unsigned int *)(pcVar5 + 5) = puStack0000001c[1];
          *(unsigned int *)(pcVar5 + 9) = puStack0000001c[2];
          *(unsigned int *)(pcVar5 + 0xd) = puStack0000001c[3];
          *(unsigned short *)(pcVar5 + 0x11) = *(unsigned short *)(puStack0000001c + 4);
          *(unsigned short *)(pcVar5 + 0x13) = *(unsigned short *)((int)puStack0000001c + 0x12);
          *(unsigned short *)(pcVar5 + 0x15) = *(unsigned short *)(puStack0000001c + 5);
          pcVar4 = (char *)((int)puStack0000001c + 0x17);
          pcVar5[0x17] = '\x01' - (*(char *)((int)puStack0000001c + 0x16) == '\0');
          puStack0000001c = puStack0000001c + 6;
          pcVar5 = pcVar5 + 0x18;
          *pcVar5 = '\x01' - (*pcVar4 == '\0');
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      fn_82FB3100(param_1,iVar3);
      fn_82FA5190(lbl_831BC768,iVar3);
    }
  }
  return uVar2;
}

