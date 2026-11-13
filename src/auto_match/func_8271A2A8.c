typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_82697610();
extern int fn_826A7398();
extern int fn_826A98D8();
extern int fn_826F6FA8();
extern int fn_827035B0();


void fn_8271A2A8(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  bool bVar3;
  char *pcVar6;
  unsigned __int64 uVar4;
  int iVar7;
  unsigned __int64 uVar5;
  __int64 lVar8;
  int aiStack_30 [12];
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  puVar1[4] = 0;
  *puVar1 = 2;
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  pcVar6 = (char *)fn_826957D0(param_1,0);
  if (*pcVar6 == '\a') {
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    iVar7 = fn_82695370(uVar4,uVar2);
  }
  else {
    pcVar6 = (char *)fn_826957D0(param_1,0);
    if ((*pcVar6 == '\x03') || (bVar3 = false, *pcVar6 == '\x04')) {
      bVar3 = true;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    if (!bVar3) {
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(aiStack_30,uVar4,uVar2,0xffffffffffffffff,0);
      iVar7 = fn_826A98D8(*(unsigned int *)(param_1 + 0x18),aiStack_30,0);
      if (iVar7 != 0) {
        *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
      }
      lVar8 = (unsigned __int64)*(unsigned int *)(aiStack_30[0] + 8) - 1;
      *(int *)(aiStack_30[0] + 8) = (int)lVar8;
      if (lVar8 == 0) {
        fn_826944C8(aiStack_30[0]);
      }
      goto LAB_8271a3e4;
    }
    uVar4 = fn_826957D0(param_1,0);
    uVar4 = fn_82697610(uVar4,uVar2);
    uVar5 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
    iVar7 = fn_826F6FA8(uVar5,uVar4);
  }
  if (iVar7 != 0) {
    *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
  }
LAB_8271a3e4:
  if (iVar7 != 0) {
    uVar4 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
    fn_827035B0(uVar4,iVar7,0xffffffff82196582,0,0);
    puVar1 = *(unsigned char **)(param_1 + 4);
    fn_826959C8(puVar1);
    *puVar1 = 2;
    puVar1[4] = 1;
    fn_8267C498(iVar7);
  }
  return;
}

