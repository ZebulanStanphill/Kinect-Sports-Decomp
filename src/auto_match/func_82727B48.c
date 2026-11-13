extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_827451A8();
extern int fn_82746C20();
extern int fn_827A1930();
extern unsigned int lbl_82005720;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_5c;


void fn_82727B48(int param_1)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  int iVar5;
  unsigned __int64 uVar3;
  char cVar6;
  unsigned __int64 uVar4;
  double dVar7;
  unsigned int uStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar5 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
    if (iVar5 == 4) {
      iVar5 = *(int *)(param_1 + 8) + -0x68;
      if (*(int *)(param_1 + 8) == 0) {
        iVar5 = 0;
      }
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        dVar7 = (double)fn_826972E0(uVar3,uVar1);
        uStack_5c = (unsigned int)(__int64)dVar7;
        fStack_50 = lbl_821AAD20;
        fStack_4c = lbl_821AAD20;
        fStack_48 = lbl_821AAD20;
        fStack_44 = lbl_821AAD20;
        cVar6 = fn_827A1930(*(unsigned int *)(iVar5 + 0xa0),&fStack_50,uStack_5c);
        if (cVar6 == '\0') {
          puVar2 = *(unsigned char **)(param_1 + 4);
          fn_826959C8(puVar2);
          *puVar2 = 1;
        }
        else {
          uVar4 = fn_8267B890(*(unsigned int *)
                                     (*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x30,0);
          if ((uVar4 & 0xffffffff) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = fn_82746C20(uVar4,*(unsigned int *)(param_1 + 0x18));
          }
          dStack_40 = (double)fStack_50 * lbl_82005720;
          dStack_38 = (double)fStack_4c * lbl_82005720;
          dStack_30 = (double)fStack_48 * lbl_82005720;
          dStack_28 = (double)fStack_44 * lbl_82005720;
          fn_827451A8(uVar4,*(unsigned int *)(param_1 + 0x18),&dStack_40);
          fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar4);
          if ((uVar4 & 0xffffffff) != 0) {
            fn_826824B0(uVar4);
          }
        }
      }
    }
  }
  return;
}

