extern int fn_8264D808();


void fn_8264DA70(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned short *puVar2;
  short *psVar3;
  __int64 lVar4;
  
  iVar1 = fn_8264D808(param_3);
  puVar2 = (unsigned short *)(param_2 + 0x3fe);
  psVar3 = (short *)(param_1 + 0x200);
  lVar4 = 0x100;
  do {
    psVar3[-0x100] = *(short *)((puVar2[-0x1ff] >> 5 & 0x7fffffe) + iVar1) << 6;
    *psVar3 = *(short *)((*(unsigned short *)((param_2 - param_1) + (int)psVar3) >> 5 & 0x7fffffe) + iVar1)
              << 6;
    puVar2 = puVar2 + 1;
    psVar3[0x100] = *(short *)((*puVar2 >> 5 & 0x7fffffe) + iVar1) << 6;
    psVar3 = psVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

