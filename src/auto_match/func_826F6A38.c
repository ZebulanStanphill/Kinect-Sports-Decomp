extern int fn_826F6968();
extern unsigned int lbl_8200DBB4;


void fn_826F6A38(int param_1,unsigned int param_2,float *param_3,unsigned char param_4)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned char uVar3;
  
  uVar3 = (unsigned char)param_2;
  if (*param_3 != lbl_8200DBB4) {
    *(unsigned int *)(param_1 + 0x7f8) = *(unsigned int *)(param_1 + 0x7f8) & ~(1 << (param_2 & 0x3f));
  }
  puVar2 = (unsigned int *)fn_826F6968();
  *puVar2 = 0;
  *(unsigned char *)(puVar2 + 4) = uVar3;
  puVar2[1] = *param_3;
  fVar1 = param_3[1];
  *(unsigned char *)((int)puVar2 + 0xe) = param_4;
  puVar2[2] = fVar1;
  *(unsigned short *)(puVar2 + 3) = 0;
  *(unsigned char *)((int)puVar2 + 0xf) = 0x20;
  return;
}

