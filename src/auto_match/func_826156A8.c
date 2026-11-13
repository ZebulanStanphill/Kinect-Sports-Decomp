extern int fn_825D6278();
extern int fn_825D6BD8();
extern int fn_825F1300();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_8219570C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CACBC;
extern unsigned int ltcg_pool_0_0f;


void fn_826156A8(unsigned __int64 param_1,unsigned int param_2,int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  puVar2 = (unsigned int *)fn_82F6A53C();
  puVar2[8] = (float)extraout_f1;
  puVar2[7] = (float)extraout_f1;
  puVar2[6] = (float)extraout_f1;
  puVar2[5] = (float)extraout_f1;
  puVar2[1] = param_2;
  *puVar2 = &lbl_821CACBC;
  puVar2[4] = (float)extraout_f1;
  puVar2[2] = param_3;
  dVar7 = (double)ltcg_pool_0_0f;
  puVar2[3] = (float)extraout_f1;
  dVar9 = (double)lbl_821CA460;
  dVar4 = dVar9;
  if (dVar7 < (double)*(float *)(param_3 + 4)) {
    dVar4 = (double)(float)(dVar9 / (double)*(float *)(param_3 + 4));
  }
  puVar2[9] = (float)dVar4;
  dVar4 = dVar9;
  if (dVar7 < (double)*(float *)(param_3 + 0x34)) {
    dVar4 = (double)(float)(dVar9 / (double)*(float *)(param_3 + 0x34));
  }
  puVar2[10] = (float)dVar4;
  dVar4 = dVar9;
  if (dVar7 < (double)*(float *)(param_3 + 0x60)) {
    dVar4 = (double)(float)(dVar9 / (double)*(float *)(param_3 + 0x60));
  }
  puVar2[0xb] = (float)dVar4;
  dVar4 = dVar9;
  if (dVar7 < (double)*(float *)(param_3 + 0x84)) {
    dVar4 = (double)(float)(dVar9 / (double)*(float *)(param_3 + 0x84));
  }
  puVar2[0xc] = (float)dVar4;
  dVar8 = (double)lbl_82191FC8;
  dVar4 = (double)lbl_821916FC;
  dVar6 = (double)lbl_8219570C;
  dVar5 = (double)lbl_821917B4;
  uVar3 = fn_825D6278(dVar6,dVar9,dVar7,dVar7,dVar9,dVar9,dVar7,dVar5,dVar4,dVar8,dVar8,dVar8,
                            dVar7,param_5,1,1,1,0,0,2000,200);
  puVar2[0xd] = uVar3;
  uVar3 = fn_825D6278(dVar6,dVar9,dVar7,dVar7,dVar9,dVar9,dVar7,dVar5,dVar9,dVar8,dVar8,dVar8,
                            dVar7,param_5,2,0,1,0,0,2000,200);
  puVar2[0xe] = uVar3;
  uVar3 = fn_825D6278(dVar6,dVar9,dVar7,dVar7,dVar9,dVar9,dVar7,dVar5,dVar4,dVar8,dVar8,dVar8,
                            dVar7,param_5,0,1,1,0,0,2000,200);
  puVar2[0xf] = uVar3;
  uVar3 = fn_825F1300((unsigned __int64)(unsigned int)puVar2[2] + 0xb0,(unsigned __int64)(unsigned int)puVar2[2] + 0xb4);
  puVar2[0x10] = uVar3;
  if (puVar2[0xd] != 0) {
    fn_825D6BD8(puVar2[0xd],(unsigned __int64)(unsigned int)puVar2[2] + 0x2c,
                      (unsigned __int64)(unsigned int)puVar2[2] + 0x30);
    *(unsigned int *)(puVar2[0xd] + 0x94) = 0;
    *(float *)(puVar2[0xd] + 0x98) = (float)dVar7;
    iVar1 = puVar2[2];
    *(unsigned int *)(puVar2[0xd] + 0x90) =
         ((unsigned int)*(unsigned char *)(iVar1 + 0x28) << 8 | 0xffff0000 | (unsigned int)*(unsigned char *)(iVar1 + 0x29)) << 8 |
         (unsigned int)*(unsigned char *)(iVar1 + 0x2a);
  }
  if (puVar2[0xe] != 0) {
    fn_825D6BD8(puVar2[0xe],(unsigned __int64)(unsigned int)puVar2[2] + 0x5c,0);
    *(unsigned int *)(puVar2[0xe] + 0x94) = 0;
    *(float *)(puVar2[0xe] + 0x98) = (float)dVar9;
  }
  if (puVar2[0xf] != 0) {
    fn_825D6BD8(puVar2[0xf],(unsigned __int64)(unsigned int)puVar2[2] + 0x80,0);
    *(unsigned int *)(puVar2[0xf] + 0x94) = 0;
    *(float *)(puVar2[0xf] + 0x98) = (float)dVar9;
  }
  fn_82F6A588(puVar2);
  return;
}

