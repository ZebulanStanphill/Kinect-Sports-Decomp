#define NAN(x) ((x) != (x))
extern int fn_822315A0();
extern int fn_822B83D0();
extern int fn_822C6880();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_825113E0();
extern int fn_82522ED8();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_8255FD70();
extern int fn_825613E0();
extern int fn_8265CA20();
extern int fn_827F6328();
extern int fn_827F6370();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_822DDA78(int param_1)

{
  float fVar1;
  int in_r0;
  unsigned int *puVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  int *apiStack_50 [20];
  
  puVar2 = (unsigned int *)(param_1 + 0x5c);
  if (0xf < *(unsigned int *)(param_1 + 0x70)) {
    puVar2 = (unsigned int *)*puVar2;
  }
  fn_8255FD70(apiStack_50,*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x54) + 0x118) + 0x24),
                    puVar2);
  iVar3 = *apiStack_50[0];
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x204) == 0) {
    fn_822B83D0(*(unsigned int *)(*(int *)(param_1 + 0x54) + 0x118),iVar3);
  }
  else {
    fn_8255F880(apiStack_50,iVar3 + 0x40);
    puVar2 = (unsigned int *)fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,apiStack_50);
    dVar6 = (double)*(float *)(iVar3 + 0x48);
    dVar5 = (double)fn_827F6328();
    dVar4 = (double)(*(float *)(*(int *)(param_1 + 0x54) + 0x2fc) - lbl_821917D4);
    fVar1 = (float)(dVar4 - (double)(float)(dVar5 / dVar6));
    dVar5 = (double)(float)(dVar5 / dVar6);
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      dVar5 = dVar4;
    }
    fn_822B83D0(*(unsigned int *)(*(int *)(param_1 + 0x54) + 0x118),iVar3);
    fVar1 = (float)(dVar5 - (double)lbl_82193AF0);
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      dVar5 = (double)lbl_82193AF0;
    }
    fn_827F6370(dVar5);
    (**(int (***)())*puVar2)(puVar2,0);
    fn_82522ED8(puVar2);
  }
  iVar3 = fn_82365BD8(apiStack_50,param_1 + 0x78);
  fn_82376640(param_1 + 0x30,iVar3);
  if (*(int *)(iVar3 + 4) != 0) {
    fn_822315A0();
  }
  fn_825113E0((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x54) + 0x118) + 0x14,0x14,
                    param_1 + 0x80);
  fn_822C6880(*(unsigned int *)(param_1 + 0x24));
  iVar3 = *(int *)(param_1 + 0x24);
  dVar5 = (double)*(float *)(iVar3 + 0x40);
  fn_825613E0(-dVar5,dVar5);
  puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  *(unsigned int *)(*(int *)(param_1 + 0x54) + 0x300) = 1;
  fn_8265CA20(apiStack_50[0]);
  return;
}

