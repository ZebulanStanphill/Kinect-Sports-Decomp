extern int fn_82F6E1C8();
extern int fn_82F71A70();
extern int fn_82F71B90();
extern int fn_82F71CD0();
extern int fn_82F85E30();
extern int fn_82F86178();
extern int fn_82F8619C();
extern unsigned int lbl_8329F60C;
extern unsigned int lbl_8329F620;
extern unsigned int uStack_60;


unsigned __int64 fn_82F85F60(void)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uStack_60;
  
  uStack_60 = 0xffffffff;
  iVar2 = fn_82F71B90(0xb);
  if (iVar2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    fn_82F71CD0(0xb);
    for (iVar2 = 0; iVar2 < 0x40; iVar2 = iVar2 + 1) {
      puVar4 = (unsigned int *)(&lbl_8329F620)[iVar2];
      if (puVar4 == (unsigned int *)0x0) {
        puVar4 = (unsigned int *)fn_82F6E1C8(0x20,0x48);
        if (puVar4 != (unsigned int *)0x0) {
          (&lbl_8329F620)[iVar2] = puVar4;
          lbl_8329F60C = lbl_8329F60C + 0x20;
          for (; puVar4 < (unsigned int *)((&lbl_8329F620)[iVar2] + 0x900); puVar4 = puVar4 + 0x12) {
            *(unsigned char *)(puVar4 + 1) = 0;
            *puVar4 = 0xffffffff;
            *(unsigned char *)((int)puVar4 + 5) = 10;
            puVar4[2] = 0;
          }
          uStack_60 = iVar2 << 5;
          *(unsigned char *)((&lbl_8329F620)[(int)uStack_60 >> 5] + 4) = 1;
          iVar2 = fn_82F85E30();
          if (iVar2 == 0) {
            uStack_60 = 0xffffffff;
          }
        }
        break;
      }
      for (; puVar4 < (unsigned int *)((&lbl_8329F620)[iVar2] + 0x900); puVar4 = puVar4 + 0x12) {
        if ((*(unsigned char *)(puVar4 + 1) & 1) == 0) {
          if (puVar4[2] == 0) {
            fn_82F71CD0(10);
            if ((puVar4[2] == 0) && (iVar3 = fn_82F71A70(puVar4 + 3,4000), iVar3 != 0)) {
              puVar4[2] = puVar4[2] + 1;
            }
            fn_82F8619C();
          }
          RtlEnterCriticalSection(puVar4 + 3);
          if ((*(unsigned char *)(puVar4 + 1) & 1) == 0) {
            *(unsigned char *)(puVar4 + 1) = 1;
            *puVar4 = 0xffffffff;
            uStack_60 = ((int)puVar4 - (&lbl_8329F620)[iVar2]) / 0x48 + iVar2 * 0x20;
            break;
          }
          RtlLeaveCriticalSection(puVar4 + 3);
        }
      }
      if (uStack_60 != 0xffffffff) break;
    }
    fn_82F86178();
    uVar1 = (unsigned __int64)uStack_60;
  }
  return uVar1;
}

