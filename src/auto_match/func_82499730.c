extern int fn_82496080();


int fn_82499730(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 4);
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x10 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_2 + 0x20);
  *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_2 + 0x24);
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_2 + 0x28);
  *(unsigned char *)(param_1 + 0x2c) = *(unsigned char *)(param_2 + 0x2c);
  *(unsigned char *)(param_1 + 0x2d) = *(unsigned char *)(param_2 + 0x2d);
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x30 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_1 + 0x30 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *(unsigned int *)(param_1 + 0x40) = *(unsigned int *)(param_2 + 0x40);
  *(unsigned int *)(param_1 + 0x44) = *(unsigned int *)(param_2 + 0x44);
  *(unsigned int *)(param_1 + 0x48) = *(unsigned int *)(param_2 + 0x48);
  *(unsigned char *)(param_1 + 0x4c) = *(unsigned char *)(param_2 + 0x4c);
  *(unsigned char *)(param_1 + 0x4d) = *(unsigned char *)(param_2 + 0x4d);
  fn_82496080(param_1 + 0x50,param_2 + 0x50);
  *(unsigned char *)(param_1 + 0x60) = *(unsigned char *)(param_2 + 0x60);
  *(unsigned char *)(param_1 + 0x61) = *(unsigned char *)(param_2 + 0x61);
  *(unsigned char *)(param_1 + 0x62) = *(unsigned char *)(param_2 + 0x62);
  *(unsigned int *)(param_1 + 100) = *(unsigned int *)(param_2 + 100);
  *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_2 + 0x68);
  *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_2 + 0x6c);
  *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_2 + 0x70);
  *(unsigned int *)(param_1 + 0x74) = *(unsigned int *)(param_2 + 0x74);
  return param_1;
}

