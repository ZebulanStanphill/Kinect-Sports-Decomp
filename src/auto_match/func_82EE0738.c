extern int fn_82E57888();
extern int fn_82EE0570();
extern unsigned int stack0x00000024;


unsigned __int64 fn_82EE0738(unsigned __int64 param_1,int param_2,unsigned short *param_3,int *param_4)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned short *puStack00000024;
  int aiStack_30 [12];
  
  if (((param_2 == 0) || (param_3 == (unsigned short *)0x0)) || (param_4 == (int *)0x0)) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    puStack00000024 = param_3 + 1;
    *param_4 = 0;
    *param_3 = *(unsigned short *)(param_2 + 8) << 8 | *(unsigned short *)(param_2 + 8) >> 8;
    fn_82E57888(&stack0x00000024,*(unsigned int *)(param_2 + 0xc),*(unsigned short *)(param_2 + 8));
    uVar2 = (unsigned __int64)*(unsigned int *)(param_2 + 4) & 0xffff;
    uVar1 = *(unsigned short *)(param_2 + 8);
    aiStack_30[0] = 0;
    *puStack00000024 = (unsigned short)(uVar2 << 8) | (unsigned short)(uVar2 >> 8);
    puStack00000024[1] =
         (unsigned short)(((unsigned __int64)*(unsigned int *)(param_2 + 0x10) & 0xff) << 8) |
         (unsigned short)(*(unsigned int *)(param_2 + 0x10) >> 8) & 0xff;
    uVar3 = fn_82EE0570(puStack00000024 + 2,param_2,aiStack_30);
    if (-1 < (int)uVar3) {
      *param_4 = aiStack_30[0] + uVar1 + 6;
    }
  }
  return uVar3;
}

