extern int fn_82C038C8();


unsigned char fn_82C12F10(__int64 *param_1,int *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned char * apbStack_30;
  
  apbStack_30 = (unsigned char *)0x0;
  if (param_1 == (__int64 *)0x0) {
    bVar2 = 2;
  }
  else {
    iVar1 = fn_82C038C8(param_1,*param_1,0x18,&apbStack_30);
    if (iVar1 == 0x18) {
      *param_1 = *param_1 + 0x18;
      *param_2 = (((unsigned int)apbStack_30[3] * 0x100 + (unsigned int)apbStack_30[2]) * 0x100 +
                 (unsigned int)apbStack_30[1]) * 0x100 + (unsigned int)*apbStack_30;
      *(unsigned short *)(param_2 + 1) = (unsigned short)apbStack_30[5] * 0x100 + (unsigned short)apbStack_30[4];
      *(unsigned short *)((int)param_2 + 6) = (unsigned short)apbStack_30[7] * 0x100 + (unsigned short)apbStack_30[6];
      *(unsigned char *)(param_2 + 2) = apbStack_30[8];
      *(unsigned char *)((int)param_2 + 9) = apbStack_30[9];
      *(unsigned char *)((int)param_2 + 10) = apbStack_30[10];
      *(unsigned char *)((int)param_2 + 0xb) = apbStack_30[0xb];
      *(unsigned char *)(param_2 + 3) = apbStack_30[0xc];
      *(unsigned char *)((int)param_2 + 0xd) = apbStack_30[0xd];
      *(unsigned char *)((int)param_2 + 0xe) = apbStack_30[0xe];
      *(unsigned char *)((int)param_2 + 0xf) = apbStack_30[0xf];
      uVar3 = (((unsigned int)apbStack_30[0x13] * 0x100 + (unsigned int)apbStack_30[0x12]) * 0x100 +
              (unsigned int)apbStack_30[0x11]) * 0x100 + (unsigned int)apbStack_30[0x10];
      *param_3 = uVar3;
      bVar2 = -(uVar3 < 0x18) & 4;
      param_3[1] = (((unsigned int)apbStack_30[0x17] * 0x100 + (unsigned int)apbStack_30[0x16]) * 0x100 +
                   (unsigned int)apbStack_30[0x15]) * 0x100 + (unsigned int)apbStack_30[0x14];
    }
    else {
      bVar2 = 3;
    }
  }
  return bVar2;
}

