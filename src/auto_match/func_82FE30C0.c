extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_82015618;


unsigned __int64 fn_82FE30C0(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 == (unsigned int *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    *(unsigned int *)(param_1 + 4) = *param_2;
    *(unsigned int *)(param_1 + 8) = param_2[1];
    *(unsigned int *)(param_1 + 0xc) = param_2[2];
    *(unsigned int *)(param_1 + 0x10) = param_2[3];
    *(unsigned int *)(param_1 + 0x14) = param_2[4];
    *(unsigned int *)(param_1 + 0x18) = param_2[5];
    *(unsigned int *)(param_1 + 0x1c) = param_2[6];
    *(unsigned int *)(param_1 + 0x20) = param_2[7];
    *(unsigned int *)(param_1 + 0x24) = param_2[8];
    *(unsigned int *)(param_1 + 0x28) = param_2[9];
    *(unsigned int *)(param_1 + 0x2c) = param_2[10];
    *(unsigned int *)(param_1 + 0x30) = param_2[0xb];
    *(unsigned int *)(param_1 + 0x34) = param_2[0xc];
    dVar3 = (double)lbl_82005718;
    uVar1 = lbl_82015618;
    dVar2 = (double)fn_82F655D8(lbl_82015618,
                                      (double)(float)((double)(float)param_2[0xd] * dVar3));
    *(float *)(param_1 + 0x38) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)(float)param_2[0xe] * dVar3));
    *(float *)(param_1 + 0x3c) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)(float)param_2[0xf] * dVar3));
    *(float *)(param_1 + 0x40) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)(float)param_2[0x10] * dVar3));
    *(float *)(param_1 + 0x44) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)(float)param_2[0x11] * dVar3));
    *(float *)(param_1 + 0x48) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)(float)param_2[0x12] * dVar3));
    *(float *)(param_1 + 0x4c) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)((float)param_2[0x13] -
                                                                    lbl_8200BF40) * dVar3));
    *(float *)(param_1 + 0x50) = (float)dVar2;
    *(char *)(param_1 + 0x91) = '\x01' - (*(char *)(param_2 + 0x14) == '\0');
    *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)((int)param_2 + 0x51);
    *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)((int)param_2 + 0x55);
    *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)((int)param_2 + 0x59);
    *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)((int)param_2 + 0x5d);
    *(unsigned int *)(param_1 + 100) = *(unsigned int *)((int)param_2 + 0x61);
    *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)((int)param_2 + 0x65);
    *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)((int)param_2 + 0x69);
    *(char *)(param_1 + 0x90) = '\x01' - (*(char *)((int)param_2 + 0x6d) == '\0');
    *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)((int)param_2 + 0x6e);
    *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)((int)param_2 + 0x72);
    *(unsigned int *)(param_1 + 0x80) = *(unsigned int *)((int)param_2 + 0x76);
    *(unsigned int *)(param_1 + 0x84) = *(unsigned int *)((int)param_2 + 0x7a);
    *(unsigned int *)(param_1 + 0x88) = *(unsigned int *)((int)param_2 + 0x7e);
    *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)((int)param_2 + 0x82);
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)*(float *)((int)param_2 + 0x86)
                                                           * dVar3));
    *(float *)(param_1 + 0x70) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)*(float *)((int)param_2 + 0x8a)
                                                           * dVar3));
    *(float *)(param_1 + 0x74) = (float)dVar2;
    uVar1 = 1;
    *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)((int)param_2 + 0x8e);
    *(unsigned int *)(param_1 + 0x98) = *(unsigned int *)((int)param_2 + 0x92);
    *(unsigned int *)(param_1 + 0x9c) = *(unsigned int *)((int)param_2 + 0x96);
    *(unsigned int *)(param_1 + 0xa0) = *(unsigned int *)((int)param_2 + 0x9a);
    *(unsigned int *)(param_1 + 0xa4) = *(unsigned int *)((int)param_2 + 0x9e);
    *(unsigned int *)(param_1 + 0xa8) = *(unsigned int *)((int)param_2 + 0xa2);
    *(unsigned int *)(param_1 + 0xac) = *(unsigned int *)((int)param_2 + 0xa6);
    *(unsigned int *)(param_1 + 0xb0) = *(unsigned int *)((int)param_2 + 0xaa);
    *(unsigned int *)(param_1 + 0xb4) = *(unsigned int *)((int)param_2 + 0xae);
    *(unsigned int *)(param_1 + 0xb8) = *(unsigned int *)((int)param_2 + 0xb2);
    *(unsigned int *)(param_1 + 0xbc) = *(unsigned int *)((int)param_2 + 0xb6);
  }
  return uVar1;
}

