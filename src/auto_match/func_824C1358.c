extern int fn_8224F398();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82192F70;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_824C1358(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  iVar1 = fn_8265C9E0(0x40);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8224F398();
  }
  *param_1 = uVar2;
  puVar3 = (unsigned int *)fn_8265C9E0(100);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    fn_8224F398(puVar3 + 3);
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    *puVar3 = 0;
    *(unsigned char *)(puVar3 + 1) = 0;
    puVar3[2] = 1;
    *(unsigned char *)(puVar3 + 0x13) = 0;
    *(unsigned char *)((int)puVar3 + 0x4d) = 0;
    puVar3[0x14] = 0;
    *(unsigned char *)(puVar3 + 0x15) = 0;
    puVar3[0x18] = 0;
  }
  param_1[1] = puVar3;
  param_1[2] = *param_2;
  param_1[8] = lbl_8218E8FC;
  uVar2 = lbl_82192F70;
  param_1[4] = 1;
  param_1[9] = uVar2;
  param_1[3] = 2;
  param_1[5] = 2;
  uVar2 = ltcg_pool_0_0f;
  param_1[6] = 0;
  param_1[10] = uVar2;
  param_1[7] = 0;
  param_1[0xb] = uVar2;
  return param_1;
}

