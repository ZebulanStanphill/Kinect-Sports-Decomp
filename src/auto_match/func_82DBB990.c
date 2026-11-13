#define TBLr 0
extern unsigned int *auStack_30;
extern int fn_82DBBBA0();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_2c;


void fn_82DBB990(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned char auStack_30 [4];
  unsigned int uStack_2c;
  
  (**(int (***)())(*param_2 + 0x18))(param_2);
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(unsigned int **)(iVar3 + 4);
  if (puVar5 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar5 = "TtEnblConstr";
    uVar1 = TBLr;
    puVar5[1] = (int)uVar1;
    *(unsigned int **)(iVar3 + 4) = puVar5 + 3;
  }
  fn_82DBBBA0(param_1,param_2,0x1b);
  iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0x1c);
  if (iVar3 != 0) {
    (**(int (***)())(**(int **)(param_1 + 0xc) + 0x24))(*(int **)(param_1 + 0xc),1,auStack_30);
    uVar2 = lbl_821AAD20;
    uVar4 = (unsigned __int64)uStack_2c;
    if (0 < (int)uStack_2c) {
      puVar5 = (unsigned int *)(iVar3 + -4);
      do {
        puVar5[1] = uVar2;
        puVar5 = puVar5 + 2;
        *puVar5 = uVar2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(unsigned int **)(iVar3 + 4);
  if (puVar5 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar5 = &lbl_82132BC4;
    uVar1 = TBLr;
    puVar5[1] = (int)uVar1;
    *(unsigned int **)(iVar3 + 4) = puVar5 + 3;
  }
  return;
}

