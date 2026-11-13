#define true 1
extern unsigned int *auStack_30;
extern int fn_82F68CC0();
extern unsigned int uStack_28;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82642670(int param_1,int param_2,unsigned short *param_3)

{
  unsigned char *puVar1;
  unsigned int *puVar2;
  unsigned char auStack_30 [8];
  unsigned int uStack_28;
  
  puVar2 = (unsigned int *)(((*(unsigned int *)(param_1 + 0x14) >> 5 & 0x1f) + (*param_3 & 0xfff) +
                     *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) + 9) * 4 + param_1);
  uStack_28 = 0x2000000;
  while( true ) {
    puVar1 = (unsigned char *)((*puVar2 & 0xfff) * 0xc + param_2);
    if (puVar1 != auStack_30) {
      fn_82F68CC0(puVar1,auStack_30,0xc);
    }
    if ((*puVar2 & 0x1000) != 0) break;
    puVar2 = puVar2 + 1;
  }
  return;
}

