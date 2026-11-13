extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *fStack_50;
extern int fn_830A2398();
extern int fn_830A4688();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


void fn_82D98BC0(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned __int64 *puVar1;
  unsigned __int64 *puVar2;
  __int64 lVar3;
  unsigned char auStack_90 [16];
  short *psStack_80;
  unsigned int uStack_7c;
  unsigned __int64 uStack_78;
  unsigned char auStack_70 [32];
  float fStack_50;
  
  puVar1 = &uStack_78;
  puVar2 = (unsigned __int64 *)(param_2 + -8);
  lVar3 = 0xc;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fStack_50 = *(float *)(param_1 + 0x1c) * fStack_50;
  (**(int (***)())(**(int **)(param_1 + 0xc) + 0x3c))(*(int **)(param_1 + 0xc),auStack_90);
  if (*psStack_80 == 0x16) {
    fn_830A4688(psStack_80,auStack_70,1);
    return;
  }
  fn_830A2398(psStack_80,uStack_7c,auStack_70,param_3);
  return;
}

