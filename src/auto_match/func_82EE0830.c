extern int fn_82E57888();
extern int fn_82EE0570();
extern unsigned int stack0x00000024;


__int64 fn_82EE0830(int param_1,unsigned short *param_2,unsigned short *param_3,int *param_4)

{
  unsigned short uVar1;
  __int64 lVar2;
  unsigned short *puStack00000024;
  int aiStack_50;
  
  if (((param_2 == (unsigned short *)0x0) || (param_3 == (unsigned short *)0x0)) || (param_4 == (int *)0x0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    *param_4 = 0;
    lVar2 = 0;
    *param_3 = *param_2 << 8 | *param_2 >> 8;
    param_3[1] = param_2[1] << 8 | param_2[1] >> 8;
    param_3[2] = param_2[4] << 8 | param_2[4] >> 8;
    param_3[3] = (unsigned short)(((unsigned __int64)*(unsigned int *)(param_2 + 2) & 0xffff) << 8) |
                 (unsigned short)(((unsigned __int64)*(unsigned int *)(param_2 + 2) & 0xffff) >> 8);
    puStack00000024 = param_3 + 6;
    *(unsigned int *)(param_3 + 4) =
         (unsigned int)*(unsigned char *)((int)param_2 + 0x13) << 0x18 | (unsigned int)*(unsigned char *)(param_2 + 9) << 0x10 |
         (unsigned int)*(unsigned char *)((int)param_2 + 0x11) << 8 | (unsigned int)*(unsigned char *)(param_2 + 8);
    fn_82E57888(&stack0x00000024,*(unsigned int *)(param_2 + 6),param_2[4]);
    uVar1 = param_2[4];
    aiStack_50 = 0;
    if (((*(unsigned int *)(param_2 + 2) & 0x8000) == 0) || (*(int *)(param_1 + 600) != 0)) {
      lVar2 = fn_82EE0570(puStack00000024,param_2,&aiStack_50);
      if (lVar2 < 0) {
        return lVar2;
      }
    }
    else {
      *(unsigned char *)(param_3 + 4) = 0;
      *(unsigned char *)((int)param_3 + 9) = 0;
      aiStack_50 = 0;
    }
    if (-1 < (int)lVar2) {
      *param_4 = aiStack_50 + uVar1 + 0xc;
    }
  }
  return lVar2;
}

