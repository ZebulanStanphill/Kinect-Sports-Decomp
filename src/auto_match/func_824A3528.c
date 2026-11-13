extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int fStack_2c;
extern unsigned int iStack_3c;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_40;


void fn_824A3528(int param_1,int *param_2)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int in_r0;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_40;
  int iStack_3c;
  unsigned char auStack_38 [8];
  unsigned char auStack_30 [4];
  float fStack_2c;
  
  (**(int (***)())*param_2)(param_2,auStack_38,&uStack_40);
  (**(int (***)())(*param_2 + 4))(param_2,uStack_40,&iStack_3c);
  uVar4 = ltcg_pool_0_0f;
  fVar1 = *(float *)(param_1 + 0x3c);
  puVar2 = (unsigned int *)(*(int *)(iStack_3c + 0x40) + 0xd0U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  *(unsigned int *)(param_1 + 0x30) = uVar4;
  puVar2 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  if (fStack_2c <= fVar1) {
    *(unsigned int *)(param_1 + 0x60) = 0;
  }
  else {
    lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x60) + 1;
    *(int *)(param_1 + 0x60) = (int)lVar5;
    if (lVar5 != 0) {
      *(unsigned int *)(param_1 + 0x30) = lbl_821CA460;
    }
  }
  return;
}

