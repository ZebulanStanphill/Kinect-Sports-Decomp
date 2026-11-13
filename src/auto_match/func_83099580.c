#define TBLr 0
extern unsigned int *auStack_50;
extern int fn_82CE8E78();
extern int fn_82D38828();
extern int fn_82D38850();
extern int fn_830B6200();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_83099580(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar4;
  __int64 lVar3;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int auStack_50;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = "TtCpuAabbTreeAabb";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  uVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30);
  iVar4 = *(int *)(param_2 + 0x2c);
  if (0 < (int)*(unsigned int *)(param_2 + 0x30)) {
    do {
      auStack_50 = *(unsigned int *)(iVar4 + 0x24);
      *(unsigned int *)(iVar4 + 0x28) = 0;
      uVar7 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x20);
      if (*(int *)(param_2 + 0x20) != 0) {
        lVar3 = fn_82D38828(*(int *)(param_2 + 0x20),iVar4,&auStack_50,uVar7);
        uVar7 = uVar7 - lVar3;
        *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + (int)lVar3;
      }
      if (*(int *)(param_2 + 0x24) != 0) {
        lVar3 = fn_82D38850(*(int *)(param_2 + 0x24),iVar4,&auStack_50,uVar7);
        uVar7 = uVar7 - lVar3;
        *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + (int)lVar3;
      }
      if (*(int *)(param_2 + 0x28) != 0) {
        iVar5 = fn_830B6200(*(int *)(param_2 + 0x28),iVar4,&auStack_50,uVar7);
        *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + iVar5;
      }
      uVar6 = uVar6 - 1;
      iVar4 = iVar4 + 0x30;
    } while (uVar6 != 0);
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  fn_82CE8E78(param_1,param_2,param_2,0);
  return;
}

