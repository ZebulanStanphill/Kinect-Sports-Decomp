extern int fn_826EBD10();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;

typedef struct {float first,second;} Pair;
static void assign(Pair *p,float a,float b) { p->first=a; p->second=b; }

void fn_82784770(int param_1)

{
  int *piVar1;
  float *puVar2;
  Pair stack_pair_20;

  
  piVar1 = *(int **)(param_1 + 0x28);
  if ((piVar1 != (int *)0x0) && (1 < (unsigned int)piVar1[1])) {
    puVar2 = (float *)
             (*(int *)(((unsigned int)piVar1[2] >> 6 & 0x3fffffc) + *(int *)(*piVar1 + 0x14)) +
             (piVar1[2] & 0xffU) * 8);
    { float tmp[2]; tmp[0]=puVar2[0]; tmp[1]=puVar2[1];
    stack_pair_20.first=tmp[0]; stack_pair_20.second=tmp[1]; }
    fn_826EBD10(param_1 + 8,&stack_pair_20.first);
    *(int *)(*(int *)(param_1 + 0x28) + 4) = *(int *)(*(int *)(param_1 + 0x28) + 4) + 1;
  }
  return;
}

