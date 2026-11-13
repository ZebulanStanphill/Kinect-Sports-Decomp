extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83029C80();
extern unsigned int lbl_831BC768;


unsigned int * fn_8301B7F0(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  
  if (*(unsigned int *)(param_1 + 0x10) <= (unsigned int)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2)) {
    return (unsigned int *)0x0;
  }
  uVar3 = fn_82FA5060(lbl_831BC768,0x6c);
  if ((uVar3 & 0xffffffff) != 0) {
    puVar4 = (unsigned int *)fn_83029C80(uVar3,param_2);
    if (puVar4 == (unsigned int *)0x0) {
      return (unsigned int *)0x0;
    }
    puVar1 = *(unsigned int **)(param_1 + 8);
    if (((unsigned int)((int)puVar1 - *(int *)(param_1 + 4) >> 2) < *(unsigned int *)(param_1 + 0xc)) &&
       (*(unsigned int **)(param_1 + 8) = puVar1 + 1, puVar1 != (unsigned int *)0x0)) {
      *puVar1 = puVar4;
      return puVar4;
    }
    uVar2 = lbl_831BC768;
    (**(int (***)())*puVar4)(puVar4,0);
    fn_82FA5190(uVar2,puVar4);
  }
  return (unsigned int *)0x0;
}

