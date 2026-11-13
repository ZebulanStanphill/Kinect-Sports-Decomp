extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BA7370();


int * fn_82BA7868(int *param_1,int param_2,int param_3)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  
  param_1[6] = param_2;
  *param_1 = param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[5] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar2 = *(unsigned int *)(param_3 + 0x5b0);
  puVar3 = (unsigned int *)fn_82B7BD28(uVar2,0x14);
  puVar4 = puVar3 + 1;
  *puVar3 = uVar2;
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar4,*(unsigned int *)(*param_1 + 0x5b0));
  }
  param_1[0xf] = (int)puVar4;
  uVar2 = *(unsigned int *)(*param_1 + 0x5b0);
  puVar3 = (unsigned int *)fn_82B7BD28(uVar2,0x14);
  puVar4 = puVar3 + 1;
  *puVar3 = uVar2;
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar4,*(unsigned int *)(*param_1 + 0x5b0));
  }
  param_1[0x10] = (int)puVar4;
  uVar2 = *(unsigned int *)(*param_1 + 0x5b0);
  puVar3 = (unsigned int *)fn_82B7BD28(uVar2,0x14);
  puVar4 = puVar3 + 1;
  *puVar3 = uVar2;
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar4,*(unsigned int *)(*param_1 + 0x5b0));
  }
  param_1[0x11] = (int)puVar4;
  param_1[0xe] = 0;
  puVar3 = (unsigned int *)fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),0xc);
  param_1[3] = (int)puVar3;
  *puVar3 = 0xffffffff;
  *(unsigned char *)(param_1[3] + 4) = 0;
  *(unsigned int *)(param_1[3] + 8) = 0;
  iVar5 = param_1[3];
  param_1[4] = iVar5;
  *(int *)(iVar5 + 8) = iVar5;
  iVar5 = param_1[5];
  param_1[1] = iVar5;
  if (iVar5 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820defa8,0x84);
  }
  else {
    param_1[5] = iVar5 + 4;
  }
  cVar1 = *(char *)(param_1[5] + 1);
  if ((cVar1 == '\0') || (iVar5 = 0, cVar1 == '\x01')) {
    iVar5 = param_1[5];
  }
  param_1[2] = iVar5;
  if (iVar5 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820defa8,0x90);
  }
  else {
    if ((*(char *)(iVar5 + 3) != '\0') || (*(char *)(iVar5 + 2) != '\x01')) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df010,0xffffffff820defa8,0x8b);
    }
    fn_82BA7370(param_1[5],*param_1);
    param_1[5] = param_1[5] + 4;
  }
  param_1[7] = param_1[5];
  return param_1;
}

