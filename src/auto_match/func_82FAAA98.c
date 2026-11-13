extern int fn_82FA9208();
extern int fn_82FAB920();
extern int fn_82FAE150();
extern int fn_82FAE168();


unsigned int *
fn_82FAAA98(__int64 param_1,unsigned int *param_2,int param_3,int param_4,char param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  
  puVar2 = (unsigned int *)fn_82FAB920(param_1 + 0x2c);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[3] * 0x30;
    if (param_3 == 0) {
      uVar5 = puVar2[5] | 0x80000000;
      puVar2[3] = 0xffffffff;
    }
    else {
      uVar1 = *(unsigned int *)(param_3 + 0x60);
      iVar3 = fn_82FAE150(uVar1);
      iVar4 = fn_82FAE168(uVar1);
      uVar5 = puVar2[5] & 0x7fffffff;
      puVar2[3] = iVar3 + iVar4 + param_4;
    }
    puVar2[5] = uVar5;
    if (param_3 != 0) {
      *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + 1;
    }
    iVar3 = puVar2[4];
    puVar2[4] = param_3;
    if (iVar3 != 0) {
      fn_82FA9208();
    }
    if ((param_5 == '\0') || (iVar3 = 1, param_2[4] == 0)) {
      iVar3 = 0;
    }
    puVar2[5] = iVar3 << 0x1e | puVar2[5] & 0xbfffffff;
  }
  return puVar2;
}

