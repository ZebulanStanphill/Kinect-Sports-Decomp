extern int fn_82BC33B0();
extern unsigned int lbl_820E3B04;
extern unsigned int lbl_820E45A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BC3DC8(void)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int in_r6;
  unsigned int in_r7;
  
  puVar2 = (unsigned int *)fn_82BC33B0();
  puVar2[0x2a] = in_r7;
  puVar2[0x2b] = in_r6;
  *(unsigned char *)(puVar2 + 0x2c) = 0;
  uVar1 = lbl_820E3B04;
  puVar2[5] = 1;
  puVar2[4] = 1;
  *puVar2 = &lbl_820E45A8;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0x1e;
  puVar2[0xf] = 0;
  puVar2[0x20] = uVar1;
  return;
}

