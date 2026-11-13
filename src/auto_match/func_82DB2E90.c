#define TBLr 0
extern int fn_82DB2650();
extern int fn_82DB2BA8();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DB2E90(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = "TtTreeBuild";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  *(unsigned char *)(param_1 + 0x68) = 1;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    fn_82DB2BA8();
    *(unsigned char *)(param_1 + 0x2c) = 1;
  }
  else {
    fn_82DB2650(param_1,param_2,param_3);
  }
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

