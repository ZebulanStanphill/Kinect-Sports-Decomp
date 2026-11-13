extern int fn_82318848();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_823188C0(__int64 param_1,int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  float fVar1;
  unsigned int uVar2;
  float fVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  
  fVar3 = ltcg_pool_0_0f;
  puVar5 = (unsigned int *)(param_2 * 0x50 + (int)param_1);
  if (puVar5[0xc] != (int)param_3) {
    puVar5[5] = ltcg_pool_0_0f;
  }
  fVar1 = (float)puVar5[0xe];
  puVar5[0xc] = (int)param_3;
  puVar5[0xd] = param_4;
  puVar4 = (unsigned int *)((unsigned int)(puVar5 + 8) & 0xfffffff0);
  *puVar4 = in_register_00010010;
  puVar4[1] = in_register_00010014;
  puVar4[2] = in_register_00010018;
  puVar4[3] = in_vr1;
  if (fVar1 <= fVar3) {
    puVar4 = (unsigned int *)fn_82318848(param_1 + 0x234,param_3);
    *puVar5 = *puVar4;
    puVar5[3] = puVar4[3];
    puVar5[1] = puVar4[1];
    puVar5[2] = puVar4[2];
    uVar2 = lbl_821CA460;
    puVar5[4] = puVar4[4];
    puVar5[5] = uVar2;
  }
  puVar5[0xf] = *(unsigned int *)((int)param_1 + 0x230);
  if (*(int *)((int)param_1 + 0x230) == 0) {
    puVar5[0xf] = 1;
  }
  return;
}

