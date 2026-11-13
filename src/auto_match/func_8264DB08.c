extern int fn_8264D808();


void fn_8264DB08(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned short *puVar4;
  short *psVar5;
  __int64 lVar6;
  
  iVar2 = fn_8264D808(param_3);
  puVar4 = (unsigned short *)(param_2 + 2);
  psVar5 = (short *)(param_1 + 0x202);
  lVar6 = 0x80;
  do {
    uVar3 = (unsigned int)(*puVar4 >> 6) + (unsigned int)(puVar4[-1] >> 6);
    if (0x3ff < uVar3) {
      uVar3 = 0x3ff;
    }
    iVar1 = (unsigned int)(puVar4[-1] >> 6) * 2;
    psVar5[-0x101] = *(short *)(iVar1 + iVar2) << 6;
    psVar5[-0x100] = (*(short *)(uVar3 * 2 + iVar2) - *(short *)(iVar1 + iVar2)) * 0x40;
    uVar3 = (unsigned int)(*(unsigned short *)((param_2 - param_1) + (int)psVar5) >> 6) + (unsigned int)(puVar4[0xff] >> 6);
    if (0x3ff < uVar3) {
      uVar3 = 0x3ff;
    }
    iVar1 = (unsigned int)(puVar4[0xff] >> 6) * 2;
    psVar5[-1] = *(short *)(iVar1 + iVar2) << 6;
    *psVar5 = (*(short *)(uVar3 * 2 + iVar2) - *(short *)(iVar1 + iVar2)) * 0x40;
    uVar3 = (unsigned int)(puVar4[0x200] >> 6) + (unsigned int)(puVar4[0x1ff] >> 6);
    if (0x3ff < uVar3) {
      uVar3 = 0x3ff;
    }
    iVar1 = (unsigned int)(puVar4[0x1ff] >> 6) * 2;
    puVar4 = puVar4 + 2;
    psVar5[0xff] = *(short *)(iVar1 + iVar2) << 6;
    psVar5[0x100] = (*(short *)(uVar3 * 2 + iVar2) - *(short *)(iVar1 + iVar2)) * 0x40;
    psVar5 = psVar5 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

