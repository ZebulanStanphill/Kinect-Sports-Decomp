extern unsigned int *auStack_610;
extern unsigned int *auStack_710;
extern unsigned int uStack_708;
extern unsigned int uStack_70c;


unsigned __int64 fn_82A59C80(int param_1,unsigned int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  __int64 *plVar3;
  __int64 alStack_720 [2];
  unsigned char auStack_710 [4];
  unsigned int uStack_70c;
  unsigned int uStack_708;
  unsigned char auStack_610 [1536];
  
  uStack_70c = *(unsigned int *)(param_1 + 0x1c);
  uStack_708 = *(unsigned int *)(param_1 + 0x20);
  if (param_2 == 0xffffffff) goto LAB_82a59ce8;
  plVar3 = alStack_720;
  alStack_720[0] = (unsigned __int64)param_2 * -10000;
  while (iVar2 = KeWaitForMultipleObjects(3,auStack_710,1,3,1,0,plVar3,auStack_610), iVar2 == 1) {
    uStack_70c = *(unsigned int *)(param_1 + 0x1c);
    uStack_708 = *(unsigned int *)(param_1 + 0x20);
LAB_82a59ce8:
    plVar3 = (__int64 *)0x0;
  }
  if ((iVar2 == 0x102) || (uVar1 = 0, iVar2 == 2)) {
    uVar1 = 1;
  }
  return uVar1;
}

