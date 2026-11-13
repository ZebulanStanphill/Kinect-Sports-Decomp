extern unsigned int *auStack_18;
extern int fn_826EF830();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_826EF898(int param_1)

{
  unsigned int *puVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned char auStack_18 [8];
  
  if (*(char *)(param_1 + 8) == '\0') {
    stack_pair_20.first = 0;
    stack_pair_20.second = 0;
    puVar1 = (unsigned int *)fn_826EF830(auStack_18,param_1,&stack_pair_20.first);
    *(unsigned int *)(param_1 + 0x1c) = *puVar1;
    *(unsigned int *)(param_1 + 0x20) = puVar1[1];
    *(unsigned char *)(param_1 + 8) = 1;
  }
  return;
}

