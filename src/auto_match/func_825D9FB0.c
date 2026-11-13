extern int fn_82526C70();
extern int fn_82529508();
extern int fn_82558210();
extern int fn_82587B68();


void fn_825D9FB0(double param_1,unsigned short *param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  fn_82529508();
  *param_2 = 0x5e0;
  fn_82558210(param_2,7);
  puVar2 = (unsigned int *)fn_82587B68(10);
  fn_82526C70(param_2 + 0x21,0x40,0xffffffff821c4dd0,*puVar2);
  *(unsigned int *)(param_2 + 0x5a) = *(unsigned int *)(param_3 + 0x8bc);
  *(unsigned int *)(param_2 + 0x42) = *(unsigned int *)(param_3 + 0x4c);
  *(float *)(param_2 + 0x2ea) = (float)param_1;
  *(int *)(param_2 + 0x2e8) = param_3;
  *(unsigned char *)(param_2 + 0x2ec) = 0x80;
  *(unsigned int *)(param_2 + 0x2ee) = 0;
  puVar2 = (unsigned int *)(param_3 + 0xa0U & 0xfffffff0);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  puVar1 = (unsigned int *)((unsigned int)(param_2 + 0x2e0) & 0xfffffff0);
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  return;
}

