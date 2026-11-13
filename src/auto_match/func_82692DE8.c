extern unsigned int *auStack_30;
extern int fn_8270B108();
extern unsigned int uStack_20;
extern unsigned int uStack_28;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82692DE8(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned char auStack_30 [8];
  unsigned __int64 uStack_28;
  unsigned __int64 uStack_20;
  
  if (param_1 + 0x1c == 0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1 = (unsigned int *)fn_8270B108(param_1 + 0x1c,param_2,0x1000,0x1000,0x1000);
  }
  *(unsigned int **)(param_1 + 4) = puVar1;
  uStack_28 = 0;
  uStack_20 = 0;
  (*(int (**)())**(unsigned int **)*puVar1)((unsigned int *)*puVar1,auStack_30);
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0xc) = (((unsigned __int64)(uStack_20) >> 0) & 0xFFFFFFFF);
  *(unsigned int *)(param_1 + 8) = (((unsigned __int64)(uStack_28) >> 32) & 0xFFFFFFFF);
  *(unsigned int *)(param_1 + 0x10) = 1;
  *(unsigned int *)(param_1 + 0x14) = 0x80000000;
  return;
}

