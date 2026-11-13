extern int fn_8268AF70();
extern int fn_826D7B50();

static unsigned int size_of(unsigned int *s) { return *(unsigned int *)(*s & ~3U) & 0x7fffffff; }
static char *data_of(unsigned int *s) { return (char *)(*s & ~3U) + 8; }


int fn_826D89A8(int *param_1,unsigned int *param_2)

{
  int uVar1;
  unsigned int uVar2;
  
  if ((void *)*param_1 == 0) {
    uVar1 = -1;
  }
  else {
    uVar2 = fn_8268AF70(data_of((unsigned int *)*param_2), size_of((unsigned int *)*param_2),0x1505);
    uVar1 = fn_826D7B50(param_1,param_2,*(unsigned int *)(*param_1 + 4) & uVar2);
  }
  return uVar1;
}

