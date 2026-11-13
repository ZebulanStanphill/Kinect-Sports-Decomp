#define true 1
extern unsigned int *auStack_40;
extern int memcpy();


void fn_82642740(int param_1,int param_2,unsigned short *param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int auStack_40 [4];
  
  puVar1 = (unsigned int *)(((*(unsigned int *)(param_1 + 0x14) >> 5 & 0x1f) + (*param_3 & 0xfff) +
                     *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) + 9) * 4 + param_1);
  while( true ) {
    puVar2 = (unsigned int *)((*puVar1 & 0xfff) * 0xc + param_2);
    if (auStack_40 != puVar2) {
      memcpy(auStack_40,puVar2,0xc);
    }
    auStack_40[0] = *param_4 >> 8 & 0xf | auStack_40[0] & 0xfffffff0;
    if (puVar2 != auStack_40) {
      memcpy(puVar2,auStack_40,0xc);
    }
    if ((*puVar1 & 0x1000) != 0) break;
    puVar1 = puVar1 + 1;
  }
  return;
}

