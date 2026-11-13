extern int fn_82AB15D0();
extern int fn_82AB68E0();
extern int fn_82AB9358();
extern int fn_82B6B128();
extern int fn_82F68CC0();


unsigned int * fn_82AB9918(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74d0,0xffffffff820d74e0,0x71);
  }
  puVar2 = (unsigned int *)fn_82B6B128(*param_1);
  if (puVar2 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7594,0xffffffff820d74e0,0x79);
  }
  else {
    *puVar2 = param_1[4];
    param_1[4] = param_1[4] + 1;
    puVar2[4] = 1;
    puVar2[2] = (int)((param_3 & 0xffffffff) >> 2);
    uVar1 = (*(int (**)())param_1[2])(param_1[1],param_3);
    puVar2[1] = (int)uVar1;
    if ((uVar1 & 0xffffffff) == 0) {
      uVar5 = 0x8a;
      uVar4 = 0xffffffff820d7580;
    }
    else {
      fn_82F68CC0(uVar1,param_2,param_3);
      iVar3 = fn_82AB68E0(param_1[1],param_1[2],param_1[3],3);
      puVar2[3] = iVar3;
      if (iVar3 != 0) {
        return puVar2;
      }
      uVar5 = 0x9b;
      uVar4 = 0xffffffff820d756c;
    }
    fn_82AB15D0(0,0xffffffff820d2ea4,uVar4,0xffffffff820d74e0,uVar5);
    fn_82AB9358(param_1,puVar2);
  }
  return (unsigned int *)0x0;
}

