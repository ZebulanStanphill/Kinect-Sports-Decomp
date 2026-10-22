typedef unsigned int uint;
extern int fn_826947E8();
extern int fn_826BD398();

int * fn_82694928(int *param_1,uint *param_2)
{
  unsigned int *puVar1;
  int iVar2;
  unsigned int auStack_30;
  unsigned int auStack_28[2];
  
  auStack_30 = 0;
  fn_826BD398(auStack_28,&auStack_30);
  puVar1 = (unsigned int *)*param_2;
  iVar2 = fn_826947E8(*(unsigned int *)((uint)puVar1 & 0xfffffc00),*puVar1,puVar1[4],auStack_28,
                        auStack_30);
  *param_1 = iVar2;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  return param_1;
}
