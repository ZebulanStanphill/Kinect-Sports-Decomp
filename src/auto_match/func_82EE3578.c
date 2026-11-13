extern int fn_82E50BE8();
extern unsigned int lbl_8215FC70;


unsigned __int64 fn_82EE3578(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  puVar1 = (unsigned int *)fn_82E50BE8(0xbc,0,0,0,0);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    *puVar1 = &lbl_8215FC70;
    puVar2 = puVar1 + 5;
    *(unsigned short *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    lVar3 = 0x14;
    do {
      *(unsigned short *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(unsigned short *)(puVar1 + 5) = 0;
    *(unsigned char *)((int)puVar1 + 0x16) = 0;
    puVar1[0x2e] = 0;
  }
  *param_2 = puVar1;
  return -(unsigned __int64)(puVar1 == (unsigned int *)0x0) & 0xffffffff8007000e;
}

