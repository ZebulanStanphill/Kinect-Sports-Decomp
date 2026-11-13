#define TBLr 0
extern int fn_82DAE9A0();
extern int fn_82DB8258();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;


unsigned __int64 fn_82DB94A8(int *param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  uVar3 = fn_82DB8258();
  if ((float)param_1[8] <= (float)param_1[5]) {
    if ((param_1[0x10] & 0x7fffffffU) != 0) {
      (**(int (***)())(*param_1 + 0x40))(param_1,*(unsigned int *)(param_1[3] + 0x78),param_1 + 0xf);
    }
    if (lbl_8323B520 == 1) {
      uVar3 = 3;
    }
    else if (*(int *)(param_1[3] + 0x16c) != 0) {
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(unsigned int **)(iVar4 + 4);
      if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
        *puVar1 = "TtPostSimCb";
        uVar2 = TBLr;
        puVar1[1] = (int)uVar2;
        *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
      }
      fn_82DAE9A0(param_1[3]);
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(unsigned int **)(iVar4 + 4);
      if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
        *puVar1 = &lbl_82132BC4;
        uVar2 = TBLr;
        puVar1[1] = (int)uVar2;
        *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
      }
    }
  }
  return uVar3;
}

