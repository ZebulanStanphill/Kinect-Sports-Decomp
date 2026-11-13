#define TBLr 0
extern unsigned int *auStack_40;
extern int fn_83084210();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


unsigned __int64
fn_830963A8(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,__int64 param_4,int param_5)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned char auStack_40 [64];
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = "TtKdTreeCastRayIter";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  param_2[1] = (int)param_4;
  param_2[4] = param_5;
  fn_83084210(auStack_40,param_3,param_4,param_4 + 0x10,param_2);
  (**(int (***)())(*param_2 + 8))(param_1,param_2);
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  return param_1;
}

