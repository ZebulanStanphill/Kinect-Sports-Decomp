extern unsigned int *auStack_80;
extern int fn_829333E0();
extern int fn_82AC6560();
extern int fn_82B467D8();
extern unsigned int stack0x00000000;


unsigned int fn_82B46830(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int aiStack_90 [4];
  unsigned int auStack_80 [20];
  
  piVar3 = (int *)(&stack0x00000000 + -0x90);
  if ((param_3 & 0xffffffff) != 0) {
    pfVar4 = (float *)(param_2 + -4);
    do {
      puVar1 = (unsigned int *)fn_82AC6560(param_1,0x40,0x13);
      fn_829333E0(&stack0x00000000 + -0x80);
      puVar1[1] = 0xf;
      puVar1[4] = 3;
      *puVar1 = auStack_80[0];
      pfVar4 = pfVar4 + 1;
      *(double *)(puVar1 + 6) = (double)*pfVar4;
      iVar2 = fn_82B467D8(param_1,puVar1,0,0xffffffff8204e254);
      *piVar3 = iVar2;
      param_3 = param_3 - 1;
      piVar3 = (int *)(iVar2 + 0xc);
    } while (param_3 != 0);
  }
  return 0;
}

