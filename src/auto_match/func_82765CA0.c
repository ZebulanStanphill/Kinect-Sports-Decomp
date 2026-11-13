extern int fn_82762AE0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_820149E0;
extern unsigned int lbl_821AAD20;


void fn_82765CA0(void)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)fn_82762AE0();
  *puVar3 = &lbl_820149E0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  *(unsigned short *)(puVar3 + 0x13) = 0;
  *(unsigned short *)((int)puVar3 + 0x4e) = 0x1ff8;
  puVar3[0x14] = 0;
  uVar2 = lbl_821AAD20;
  puVar3[0x15] = 0;
  uVar1 = lbl_82005748;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1b] = uVar2;
  puVar3[0x1c] = uVar2;
  puVar3[0x1d] = uVar2;
  puVar3[0x1e] = uVar2;
  puVar3[0x1a] = uVar1;
  *(unsigned char *)(puVar3 + 9) = *(unsigned char *)(puVar3 + 9) | 0xc0;
  puVar3[0x1b] = uVar2;
  puVar3[0x1c] = uVar2;
  puVar3[0x1d] = uVar2;
  puVar3[0x1e] = uVar2;
  return;
}

