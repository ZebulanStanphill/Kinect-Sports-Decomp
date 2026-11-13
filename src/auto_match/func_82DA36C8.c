#define TBLr 0
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82DA32A8();
extern int fn_82DAEB78();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;


unsigned __int64 fn_82DA36C8(int *param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = "TtPhysics";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  if (param_1[10] == 0) {
    fStack_30 = (float)param_1[6];
    fStack_2c = fStack_30 + (float)param_1[7];
    fStack_28 = fStack_2c - fStack_30;
    fStack_24 = lbl_821AAD20;
    if (fStack_28 != lbl_821AAD20) {
      fStack_24 = lbl_82002AE0 / fStack_28;
    }
    (**(int (***)())(*param_1 + 0x34))(param_1,&fStack_30);
    if (lbl_8323B520 == 1) {
      param_1[10] = 2;
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(unsigned int **)(iVar4 + 4);
      if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
        *puVar1 = &lbl_82132BC4;
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
      }
      uVar3 = 2;
    }
    else {
      param_1[6] = (int)((float)param_1[6] + (float)param_1[7]);
      if (*(int *)(param_1[3] + 0x184) != 0) {
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar4 + 4);
        if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
          *puVar1 = "TtPostCollideCB";
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
        }
        fn_82DAEB78(param_1[3],&fStack_30);
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar4 + 4);
        if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
        }
      }
      *(unsigned char *)(param_1 + 4) = 1;
      param_1[10] = 0;
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(unsigned int **)(iVar4 + 4);
      if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
        *puVar1 = &lbl_82132BC4;
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = fn_82DA32A8(param_1);
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(unsigned int **)(iVar4 + 4);
    if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
      *puVar1 = &lbl_82132BC4;
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
    }
  }
  return uVar3;
}

