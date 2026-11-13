extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern int fn_822315A0();
extern int fn_82321370();
extern int fn_82359C18();
extern int fn_82458220();
extern int fn_82566018();
extern unsigned int iStack_8c;
extern unsigned int iStack_94;
extern unsigned int iStack_9c;
extern unsigned int lbl_821BAA3C;
extern unsigned int lbl_821BAA54;
extern unsigned int lbl_824583F0;
extern unsigned int lbl_82458428;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_78;
extern unsigned int uStack_88;


void fn_824580F0(__int64 param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned char auStack_a0 [4];
  int iStack_9c;
  unsigned char auStack_98 [4];
  int iStack_94;
  unsigned char auStack_90 [4];
  int iStack_8c;
  unsigned int uStack_88;
  unsigned char **ppuStack_80;
  int (**pcStack_7c)();
  unsigned int uStack_78;
  unsigned char ***pppuStack_70;
  unsigned char **ppuStack_60;
  unsigned char *puStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned char ***pppuStack_50;
  unsigned char **ppuStack_40;
  unsigned char *puStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned char ***pppuStack_30;
  
  uVar1 = (unsigned int)param_1;
  pppuStack_70 = &ppuStack_80;
  pcStack_7c = fn_82458220;
  ppuStack_80 = &lbl_821BAA3C;
  uStack_78 = uVar1;
  fn_82321370(auStack_90,param_2,&ppuStack_80);
  fn_82359C18(&ppuStack_80);
  fn_82566018(param_1 + 0xe0,auStack_90);
  pppuStack_50 = &ppuStack_60;
  ppuStack_60 = &lbl_821BAA54;
  puStack_5c = &lbl_824583F0;
  uStack_54 = uStack_88;
  uStack_58 = uVar1;
  fn_82321370(auStack_98,param_2 + 0x80,&ppuStack_60);
  fn_82359C18(&ppuStack_60);
  fn_82566018(param_1 + 0xf0,auStack_98);
  ppuStack_40 = &lbl_821BAA54;
  pppuStack_30 = &ppuStack_40;
  uStack_34 = uStack_88;
  puStack_3c = &lbl_82458428;
  uStack_38 = uVar1;
  fn_82321370(auStack_a0,param_2 + 0x20,&ppuStack_40);
  fn_82359C18(&ppuStack_40);
  fn_82566018(param_1 + 0x100,auStack_a0);
  if (iStack_9c != 0) {
    fn_822315A0();
  }
  if (iStack_94 != 0) {
    fn_822315A0();
  }
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  return;
}

