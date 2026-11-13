extern int fn_8268AF70();
extern int fn_82693D88();
extern int fn_82693E40();
extern int fn_82693E90();
extern int fn_82693FE8();
extern int fn_82694448();
extern int memcpy();
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


unsigned int * fn_82694610(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  char cVar4;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int * apuStack_60;
  struct { unsigned int first; unsigned int second; } stack_pair_58;

  unsigned int uStack_50;
  
  stack_pair_58.first = (unsigned int)param_2;
  uVar1 = fn_8268AF70(param_2,param_3,0x1505);
  stack_pair_58.second = uVar1 & 0xffffff;
  uStack_50 = param_3;
  cVar4 = fn_82694448(param_1,&stack_pair_58.first,&apuStack_60);
  if (cVar4 == '\0') {
    puVar2 = (unsigned int *)fn_82693E40(param_1);
    if (puVar2 != (unsigned int *)0x0) {
      apuStack_60 = puVar2;
      uVar3 = fn_82693D88(param_1,param_3);
      if (uVar3 != 0) {
        memcpy(uVar3,param_2,param_3);
        *(unsigned char *)(uVar3 + param_3) = 0;
      }
      *puVar2 = uVar3;
      if (uVar3 != 0) {
        puVar2[2] = 0;
        puVar2[4] = param_3;
        puVar2[3] = uVar1 & 0xffffff;
        puVar2[1] = 0;
        fn_82693FE8(param_1,param_1,&apuStack_60,puVar2[3]);
        return puVar2;
      }
      fn_82693E90(param_1,puVar2);
    }
    apuStack_60 = *(unsigned int **)(param_1 + 0x18);
  }
  return apuStack_60;
}

