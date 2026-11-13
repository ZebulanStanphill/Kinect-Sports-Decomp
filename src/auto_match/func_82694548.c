extern int fn_8268AF70();
extern int fn_82693E40();
extern int fn_82693FE8();
extern int fn_82694448();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


unsigned int * fn_82694548(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int uVar1;
  char cVar3;
  unsigned int *puVar2;
  unsigned int *apuStack_50 [2];
  struct { unsigned int first; unsigned int second; } stack_pair_48;

  unsigned int uStack_40;
  
  stack_pair_48.first = (int)param_2;
  uVar1 = fn_8268AF70(param_2,param_3,0x1505);
  stack_pair_48.second = uVar1 & 0xffffff;
  uStack_40 = (int)param_3;
  cVar3 = fn_82694448(param_1,&stack_pair_48.first,apuStack_50);
  if (cVar3 == '\0') {
    puVar2 = (unsigned int *)fn_82693E40(param_1);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = *(unsigned int **)(param_1 + 0x18);
    }
    else {
      puVar2[2] = 0;
      puVar2[4] = (int)param_3;
      *puVar2 = (int)param_2;
      puVar2[3] = uVar1 & 0xffffff | param_4 | 0x40000000;
      puVar2[1] = 0;
      apuStack_50[0] = puVar2;
      fn_82693FE8(param_1,param_1,apuStack_50,puVar2[3]);
    }
  }
  else {
    apuStack_50[0][3] = apuStack_50[0][3] | param_4;
    puVar2 = apuStack_50[0];
  }
  return puVar2;
}

