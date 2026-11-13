#define TBLr 0
extern unsigned int iStack_34;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82138628;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_82D444D0(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int *piStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  int iStack_34;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82138628;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  piStack_40 = *(int **)(param_1 + 0x18);
  uStack_38 = *(unsigned int *)(param_3 + 8);
  uStack_3c = 0;
  iStack_34 = param_3;
  (**(int (***)())(*piStack_40 + 0x24))(piStack_40,param_2,&piStack_40,param_4);
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

