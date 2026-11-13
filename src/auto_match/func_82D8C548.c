extern int fn_82D93128();
extern unsigned int lbl_82131F88;


void fn_82D8C548(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  double dVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  *(unsigned char *)((int)param_2 + 0xbb) = *(unsigned char *)(param_1 + 0x21) & 1;
  *(unsigned char *)(param_2 + 0x2e) = *(unsigned char *)(param_1 + 0xd0);
  *(unsigned char *)((int)param_2 + 0xba) = *(unsigned char *)(param_1 + 0xd1);
  *(unsigned short *)((int)param_2 + 0xe) = *(unsigned short *)(param_1 + 0xaa);
  lVar3 = (unsigned __int64)*(unsigned char *)(param_1 + 0xe9) - 0xff;
  *(unsigned char *)((int)param_2 + 0xb5) = (char)lVar3 - (*(unsigned char *)(param_1 + 0xe9) + (lVar3 == 0));
  param_2[2] = *(unsigned int *)(param_1 + 0x210);
  param_2[0x28] = *(unsigned int *)(param_1 + 0x90);
  *(unsigned char *)(param_2 + 3) = *(unsigned char *)(param_1 + 0x8c);
  param_2[0x29] = *(unsigned int *)(param_1 + 0x94);
  param_2[0x25] = *(unsigned int *)(param_1 + 0x194);
  param_2[0x26] = *(unsigned int *)(param_1 + 0x198);
  puVar1 = (unsigned int *)(param_1 + 0x1b0U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_2 + 0xc) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (unsigned int *)(param_1 + 0x1c0U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_2 + 0x10) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  dVar4 = (double)fn_82D93128(param_1 + 0xe0);
  param_2[0x24] = (float)dVar4;
  (**(int (***)())(*(int *)(param_1 + 0xe0) + 0x14))(param_1 + 0xe0,param_2 + 0x14);
  *(unsigned char *)(param_2 + 0x2d) = *(unsigned char *)(param_1 + 0xe8);
  *(unsigned char *)((int)param_2 + 0xb6) = *(unsigned char *)(param_1 + 0x19e);
  param_2[0x2a] = *(unsigned int *)(&lbl_82131F88 + (unsigned int)*(unsigned char *)(param_1 + 0x19c) * 4);
  param_2[0x2b] = *(unsigned int *)(&lbl_82131F88 + (unsigned int)*(unsigned char *)(param_1 + 0x19d) * 4);
  puVar1 = (unsigned int *)(param_1 + 0x120U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_2 + 4) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (unsigned int *)(param_1 + 0x160U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_2 + 8) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (unsigned int *)(param_1 + 0x170U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_2 + 0x20) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  param_2[1] = *(unsigned int *)(param_1 + 0x10);
  *param_2 = *(unsigned int *)(param_1 + 0x2c);
  param_2[0x2c] = *(unsigned int *)(param_1 + 0x5c);
  *(unsigned char *)((int)param_2 + 0xb7) = *(unsigned char *)(param_1 + 0x2a);
  param_2[0x27] = (unsigned int)*(unsigned short *)(param_1 + 0x1fe) << 0x10;
  return;
}

