extern int fn_83023170();
extern int fn_83023178();
extern unsigned int lbl_82002AE0;


void fn_830242F0(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  float fVar4;
  float fVar5;
  unsigned __int64 in_r0;
  int iVar6;
  __int64 lVar7;
  unsigned char *pbVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned int in_register_000103d0;
  unsigned int in_register_000103f0;
  float afStack_30;
  
  iVar6 = (int)in_r0;
  if (*(int *)(param_1 + 0x70) == 1) {
    pbVar8 = (unsigned char *)(param_1 + 0x2c);
    lVar7 = 4;
    do {
      piVar1 = *(int **)(pbVar8 + -8);
      if (piVar1 != (int *)0x0) {
        bVar2 = *(unsigned char *)(param_1 + 0x6c) | *pbVar8;
        if ((bVar2 & 0x80) == 0) {
          (**(int (***)())(*piVar1 + 0x10))(piVar1,param_1 + 0x100);
        }
        else if ((bVar2 & 0x40) == 0) {
          (**(int (***)())(*piVar1 + 8))();
        }
        *pbVar8 = *pbVar8 >> 1 & 0x40 | *pbVar8 & 0xbf;
      }
      iVar6 = (int)in_r0;
      lVar7 = lVar7 + -1;
      pbVar8 = pbVar8 + 0x14;
    } while (lVar7 != 0);
    *(unsigned char *)(param_1 + 0x6c) =
         *(unsigned char *)(param_1 + 0x6c) >> 1 & 0x40 | *(unsigned char *)(param_1 + 0x6c) & 0xbf;
    *(unsigned short *)(param_2 + 0xe) = *(unsigned short *)(param_1 + 0x10c);
  }
  fVar5 = lbl_82002AE0;
  altv300_21(in_vs32,in_vs40);
  puVar3 = (unsigned int *)(param_1 + 0x120U & 0xfffffff0);
  *puVar3 = in_register_000103f0;
  puVar3[1] = in_register_000103f0;
  puVar3[2] = in_register_000103f0;
  puVar3[3] = in_register_000103f0;
  puVar3 = (unsigned int *)(iVar6 + param_1 + 0x110 & 0xfffffff0);
  *puVar3 = in_register_000103f0;
  puVar3[1] = in_register_000103f0;
  puVar3[2] = in_register_000103f0;
  puVar3[3] = in_register_000103f0;
  afStack_30 = fVar5;
  if (*(float *)(param_1 + 8) - fVar5 < 0.0) {
    afStack_30 = *(float *)(param_1 + 8);
  }
  altv300_21(in_vs32,in_vs39);
  puVar3 = (unsigned int *)(param_1 + 0x140U & 0xfffffff0);
  *puVar3 = in_register_000103d0;
  puVar3[1] = in_register_000103d0;
  puVar3[2] = in_register_000103d0;
  puVar3[3] = in_register_000103d0;
  puVar3 = (unsigned int *)(iVar6 + param_1 + 0x130 & 0xfffffff0);
  *puVar3 = in_register_000103d0;
  puVar3[1] = in_register_000103d0;
  puVar3[2] = in_register_000103d0;
  puVar3[3] = in_register_000103d0;
  fVar4 = fVar5;
  if (*(float *)(param_1 + 0x10) - fVar5 < 0.0) {
    fVar4 = *(float *)(param_1 + 0x10);
  }
  *(float *)(param_1 + 0x124) = fVar4;
  if (*(float *)(param_1 + 0xc) - fVar5 < 0.0) {
    fVar5 = *(float *)(param_1 + 0xc);
  }
  *(float *)(param_1 + 0x144) = fVar5;
  if (*(int *)(param_1 + 0x104) == 3) {
    fn_83023170(param_1 + 0x80,param_1 + 0x100,param_2,param_4,&afStack_30,&afStack_30);
  }
  else if (*(int *)(param_1 + 0x104) == 0x3f) {
    fn_83023178(param_1 + 0x80,param_1 + 0x100,param_2);
  }
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0x10);
  return;
}

