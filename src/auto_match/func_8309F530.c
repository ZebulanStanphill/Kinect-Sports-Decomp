extern unsigned int *auStack_80;
extern int fn_830A2398();
extern int fn_830A4670();
extern int fn_830A4688();
extern unsigned int uStack_88;


void fn_8309F530(unsigned short *param_1,int param_2,int *param_3)

{
  unsigned short uVar1;
  short *psVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 *puVar4;
  unsigned short *puVar5;
  __int64 lVar6;
  unsigned __int64 uStack_88;
  unsigned char auStack_80 [80];
  
  puVar3 = &uStack_88;
  *param_3 = *param_3 + -0x10;
  lVar6 = 0xc;
  puVar4 = (unsigned __int64 *)(param_2 + -8);
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar1 = param_1[9];
  puVar5 = param_1;
  do {
    puVar5 = *(unsigned short **)(puVar5 + 10);
  } while (0x16 < *puVar5);
  fn_830A4670(puVar5 + 8);
  psVar2 = *(short **)(param_1 + 10);
  if (*psVar2 == 0x16) {
    fn_830A4688(psVar2,auStack_80,1);
  }
  else {
    fn_830A2398(psVar2,uVar1,auStack_80,param_3);
  }
  return;
}

