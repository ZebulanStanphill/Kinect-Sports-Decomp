extern unsigned int fn_82D5D898;
extern unsigned int fn_82D5D920;
extern unsigned int fn_82D5D980;
extern unsigned int fn_82D5D990;
extern unsigned int fn_82D5E360;
extern unsigned int fn_82D741B8;
extern unsigned int fn_82D743F0;
extern unsigned int lbl_8323C851;

/* WARNING: Inlined function: __savegprlr_29 */

void fn_82D5F030(int param_1)

{
  int (**pcStack_60)();
  int (**pcStack_5c)();
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int (**pcStack_48)();
  int (**pcStack_44)();
  int (**pcStack_40)();
  int (**pcStack_3c)();
  unsigned int uStack_38;
  int (**pcStack_34)();
  unsigned char uStack_30;
  unsigned char uStack_2f;
  unsigned char uStack_2e;
  
  pcStack_60 = fn_82D743F0;
  pcStack_34 = fn_82D5E360;
  pcStack_48 = fn_82D5D898;
  pcStack_44 = fn_82D5D920;
  uStack_2f = 0;
  uStack_2e = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  pcStack_40 = fn_82D5D980;
  pcStack_3c = fn_82D5D990;
  pcStack_5c = fn_82D741B8;
  uStack_30 = 1;
  fn_82D59328(param_1,&pcStack_60,8,8);
  uStack_2f = 1;
  uStack_2e = 1;
  fn_82D59328(param_1,&pcStack_60,7,8);
  fn_82D59328(param_1,&pcStack_60,8,7);
  fn_82D59328(param_1,&pcStack_60,7,7);
  *(unsigned char *)(param_1 + 0x1e22) = 1;
  lbl_8323C851 = 1;
  return;
}
