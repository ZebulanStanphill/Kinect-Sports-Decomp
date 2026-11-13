extern unsigned int *auStack_230;
extern unsigned int *auStack_270;
extern int fn_822A3E40();
extern int fn_822A3EC0();
extern int fn_822A4830();
extern int fn_822A4C18();
extern int fn_82358FD8();
extern int fn_82528EE0();


void fn_82437558(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned char auStack_270 [64];
  unsigned char auStack_230 [560];
  
  piVar1 = *(int **)(param_1 + 0x40);
  lVar7 = (unsigned __int64)*(unsigned int *)(*piVar1 + 0xd4) + 0x48;
  if (piVar1[0x52] + 1U < (unsigned int)piVar1[0x55]) {
    fn_82358FD8(**(unsigned int **)(param_1 + 0x40),auStack_270,0x20,0xffffffff821b92dc);
    fn_82528EE0(auStack_270,0x20,0xffffffff821b92f0,auStack_270,
                      (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x148) + 1);
  }
  else {
    fn_82358FD8(**(unsigned int **)(param_1 + 0x40),auStack_270,0x20,0xffffffff821b9300);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if ((*(int *)(iVar2 + 0x13c) - *(int *)(iVar2 + 0x138)) / 0x18 != 0) {
    uVar3 = *(unsigned int *)(iVar2 + 0x138);
    if (((unsigned int)((int)(*(int *)(iVar2 + 0x13c) - uVar3) / 0x18) < 2) ||
       (*(int *)(iVar2 + 0x148) + 1U < 2)) {
      lVar6 = 0;
    }
    else {
      lVar6 = (unsigned __int64)uVar3 + 0x18;
    }
    uVar3 = *(unsigned int *)(iVar2 + 0x138);
    if (((unsigned int)((int)(*(int *)(iVar2 + 0x13c) - uVar3) / 0x18) < 3) ||
       (*(int *)(iVar2 + 0x148) + 1U < 3)) {
      lVar8 = 0;
    }
    else {
      lVar8 = (unsigned __int64)uVar3 + 0x30;
    }
    uVar5 = 2;
    if (*(int *)(iVar2 + 0xf8) == 0) {
      uVar5 = 1;
    }
    fn_822A4830(lVar7,uVar5,*(unsigned int *)(iVar2 + 0x114));
    fn_82528EE0(auStack_230,0x100,0xffffffff821b9314,(unsigned __int64)*(unsigned int *)(param_1 + 0x40) + 10
                      ,auStack_270);
    fn_822A4C18(lVar7,1);
    fn_822A3E40(lVar7,auStack_230);
    puVar4 = *(unsigned int **)(param_1 + 0x40);
    fn_822A3EC0(lVar7,*puVar4,puVar4 + 0x48,puVar4[0x4e],lVar6,lVar8,puVar4[0x3e] == 0);
  }
  return;
}

