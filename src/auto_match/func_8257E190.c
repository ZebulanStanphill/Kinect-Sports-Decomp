typedef unsigned char bool;
extern int fn_825D4FE8();
extern unsigned int lbl_821C5560;
extern unsigned int ltcg_pool_0_0f;


void fn_8257E190(unsigned __int64 param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned char param_7)

{
  float fVar1;
  unsigned int *puVar2;
  double dVar3;
  double extraout_f1;
  
  puVar2 = (unsigned int *)fn_825D4FE8(param_3,param_4,0x1f);
  puVar2[0x16] = (float)extraout_f1;
  puVar2[0x17] = (float)param_2;
  *(unsigned char *)((int)puVar2 + 0x65) = param_7;
  *(unsigned char *)(puVar2 + 0x19) = 0;
  fVar1 = ltcg_pool_0_0f;
  dVar3 = (double)ltcg_pool_0_0f;
  *puVar2 = &lbl_821C5560;
  puVar2[0x14] = fVar1;
  puVar2[0x15] = fVar1;
  *(unsigned char *)((int)puVar2 + 0x67) = 0;
  puVar2[0x18] = fVar1;
  *(bool *)((int)puVar2 + 0x66) = extraout_f1 < dVar3;
  puVar2[0x10] = puVar2[0x10] | 3;
  return;
}

