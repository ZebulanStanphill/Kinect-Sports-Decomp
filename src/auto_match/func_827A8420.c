extern int fn_8267BED0();


void fn_827A8420(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)fn_8267BED0(param_1,param_2,0);
  uVar1 = (unsigned int)param_2 & 0xfffffff;
  *puVar2 = *puVar2 & 0xf0000000 | uVar1;
  if (param_3 == 0) {
    *puVar2 = uVar1 | 0xc0000000;
    *(unsigned char *)(puVar2 + 7) = 0;
    *(unsigned short *)((int)puVar2 + 0x1a) = 0;
    *(unsigned char *)((int)puVar2 + 0x1d) = 0;
    *(unsigned short *)((int)puVar2 + 0x16) = 0;
    *(unsigned short *)(puVar2 + 5) = 0;
  }
  else {
    *puVar2 = uVar1 | 0x40000000;
    puVar2[1] = 0;
    *(unsigned short *)((int)puVar2 + 0x26) = 0;
    *(unsigned short *)(puVar2 + 10) = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[8] = 0;
  }
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  return;
}

