extern int fn_828624E8();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8285A2A0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x50) + param_2;
  iVar1 = *(int *)(param_1 + 0x50) + param_3;
  memcpy((void *)(iVar1 + 0x10),(void *)(iVar2 + 0x10),0x40);
  *(unsigned int *)(iVar1 + 0x50) = *(unsigned int *)(iVar2 + 0x50);
  if (*(unsigned int *)(param_1 + 0x44) != 0) {
    fn_828624E8(*(int *)(param_1 + 0x44),param_2,param_3);
  }
  return;
}

