#define TBLr 0
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82D88440();
extern int fn_82DAEB78();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;


int fn_82DA32A8(int *param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  struct { float first; float second; } stack_pair_30;

  float fStack_28;
  float fStack_24;
  
  fn_82D88440(param_1[3],0,1);
  if (param_1[10] == 3) {
    stack_pair_30.first = (float)param_1[5];
    stack_pair_30.second = (float)param_1[6];
    fStack_28 = stack_pair_30.second - stack_pair_30.first;
  }
  else {
    stack_pair_30.first = (float)param_1[6];
    stack_pair_30.second = (float)param_1[7] + stack_pair_30.first;
    fStack_28 = stack_pair_30.second - stack_pair_30.first;
  }
  fStack_24 = lbl_821AAD20;
  if (fStack_28 != lbl_821AAD20) {
    fStack_24 = lbl_82002AE0 / fStack_28;
  }
  (**(int (***)())(*param_1 + 0x34))(param_1,&stack_pair_30.first);
  if (lbl_8323B520 == 1) {
    iVar3 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(unsigned int **)(iVar3 + 4);
    if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
      *puVar1 = &lbl_82132BC4;
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
    }
    iVar3 = param_1[10];
  }
  else {
    if (param_1[10] == 2) {
      param_1[6] = (int)((float)param_1[7] + (float)param_1[6]);
      if (*(int *)(param_1[3] + 0x184) != 0) {
        iVar3 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar3 + 4);
        if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
          *puVar1 = "TtPostCollideCB";
          uVar2 = TBLr;
          puVar1[1] = (int)uVar2;
          *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
        }
        fn_82DAEB78(param_1[3],&stack_pair_30.first);
        iVar3 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar3 + 4);
        if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar2 = TBLr;
          puVar1[1] = (int)uVar2;
          *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
        }
      }
      *(unsigned char *)(param_1 + 4) = 1;
    }
    iVar3 = 0;
    param_1[10] = 0;
  }
  return iVar3;
}

