extern int fn_825200A8();
extern int fn_8255F8D0();
extern int fn_827F2D60();
extern int fn_827F6418();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_824FDB18(int param_1,int param_2,int param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  if (*(int *)(param_1 + 0xb94) == 0) {
    iVar3 = *(int *)(*(int *)(param_2 + 0xd0) + 0x14) + param_3 * 0x44;
    uStack_20 = *(unsigned int *)(iVar3 + 0x18);
    iVar2 = fn_825200A8(&uStack_20,param_1 + 0xc);
    if (iVar2 != 0) {
      uStack_1c = *(unsigned int *)(iVar3 + 0x38);
      uStack_20 = 0;
      uVar1 = fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,&uStack_20);
      *(int *)(param_1 + 0xb80) = (int)uVar1;
      fn_827F6418(uVar1,0);
      fn_827F2D60((double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xb74),
                        *(unsigned int *)(param_1 + 0xb80));
      *(unsigned int *)(param_1 + 0xb94) = 1;
    }
  }
  return;
}

