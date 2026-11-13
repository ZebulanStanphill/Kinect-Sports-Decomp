extern unsigned int fStack_2c;
extern int fn_825B6EE0();
extern int fn_8260BA88();
extern unsigned int lbl_821954CC;
extern float lbl_821954D0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_825B6D50(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  float fStack_2c;
  
  uVar1 = ltcg_pool_0_0f;
  puVar2 = &uStack_48;
  lVar3 = 2;
  uStack_48 = *(unsigned int *)(*(int *)(param_1 + 0x34) * 0x28 + param_1 + 0x34 + 0x10);
  do {
    puVar2[3] = uVar1;
    puVar2 = puVar2 + 2;
    *puVar2 = uVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uStack_44 = (unsigned int)*(unsigned short *)(param_2 + 4);
  fStack_2c = 0.0;
  if (lbl_821954CC < (float)*(unsigned char *)(param_2 + 6)) {
    uStack_44 = uStack_44 | 0x10000;
  }
  if (lbl_821954CC < (float)*(unsigned char *)(param_2 + 7)) {
    uStack_44 = uStack_44 | 0x20000;
  }
  lVar3 = (__int64)*(short *)(param_2 + 8);
  uStack_4c = uStack_48 & ~uStack_44;
  uStack_50 = uStack_44 & ~uStack_48;
  uStack_48 = uStack_44 & uStack_48;
  fn_825B6EE0((double)lVar3,(double)(__int64)*(short *)(param_2 + 10),param_1,&uStack_50,
                    param_3,(__int64)*(short *)(param_2 + 10),0,uStack_50,lVar3,lVar3);
  fn_825B6EE0((double)(__int64)*(short *)(param_2 + 0xc),
                    (double)(__int64)*(short *)(param_2 + 0xe),param_1,&uStack_50);
  fStack_2c = (float)*(unsigned char *)(param_2 + 7) * lbl_821954D0;
  fn_8260BA88(param_1 + 0x34,&uStack_50);
  return;
}

