extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_82721D00();
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_82722298(int param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char **ppuStack_50;
  unsigned char *puStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned char uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  fn_82695750(auStack_70,param_4);
  uVar1 = fn_82721D00(param_2,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),auStack_70
                        ,*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x10),
                        *(unsigned int *)(param_1 + 0x14),*(unsigned char *)(param_1 + 0x18));
  fn_82696330(auStack_70);
  iStack_34 = (int)uVar1;
  if (-1 < iStack_34) {
    auStack_60[0] = 0;
    ppuStack_50 = &lbl_8200579C;
    puStack_4c = auStack_60;
    uStack_3c = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    iStack_30 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 0xc) >> 4) +
                *(int *)(param_2 + 0x1c) * 0x20 + -0x20;
    uStack_48 = param_3;
    iStack_38 = param_2;
    (**(int (***)())(*(int *)*param_4 + 0x28))((int *)*param_4,&ppuStack_50,param_4[1],0);
    fn_826828D8(&ppuStack_50);
    fn_82683270(param_2 + 8,uVar1);
    fn_82696330(auStack_60);
  }
  return;
}

