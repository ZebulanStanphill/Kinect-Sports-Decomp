#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_138;
extern unsigned int *auStack_178;
extern unsigned int *auStack_1e8;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D78();
extern int fn_8227CB30();
extern int fn_822EFBF0();
extern int fn_82359C18();
extern int fn_823CFA50();
extern int fn_823D20A8();
extern int fn_823E51E8();
extern int fn_823EAD78();
extern int fn_82F68CC0();
extern unsigned int iStack_168;
extern unsigned int iStack_174;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_140;
extern unsigned int uStack_148;
extern unsigned int uStack_150;
extern unsigned int uStack_158;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_170;
extern unsigned int uStack_17c;


void fn_823CF8B0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned char auStack_1e8 [104];
  int (**pcStack_180)();
  unsigned int uStack_17c;
  unsigned char auStack_178 [4];
  int iStack_174;
  unsigned __int64 uStack_170;
  int iStack_168;
  unsigned int uStack_164;
  unsigned __int64 uStack_160;
  unsigned __int64 uStack_158;
  unsigned __int64 uStack_150;
  unsigned __int64 uStack_148;
  unsigned __int64 uStack_140;
  unsigned char auStack_138 [104];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [176];
  
  fn_82250D78(auStack_b0);
  fn_823E51E8(param_1,param_2,param_3,auStack_b0);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  iStack_168 = param_1;
  if (*(char *)(iVar2 + 4) == '\0') {
    uStack_17c = 0;
    pcStack_180 = fn_823CFA50;
    uStack_170 = 0x823cfa5000000000;
    fn_82F68CC0(&uStack_160,auStack_b0,0x90);
    fn_82F68CC0(auStack_1e8,auStack_138,0x68);
    uVar1 = fn_823D20A8(auStack_d0,uStack_170,CONCAT44(iStack_168,uStack_164),uStack_160,
                            uStack_158,uStack_150,uStack_148,uStack_140);
    fn_8227CB30(param_1 + 0xbd8,uVar1);
    fn_82359C18(uVar1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
    if ((iVar2 != 0) && ((int)param_2 == *(int *)(param_1 + 0xcc))) {
      uStack_17c = 0;
      pcStack_180 = fn_823CFA50;
      uStack_170 = 0x823cfa5000000000;
      fn_82F68CC0(&uStack_160,auStack_b0,0x90);
      fn_82F68CC0(auStack_1e8,auStack_138,0x68);
      uVar1 = fn_823D20A8(auStack_d0,uStack_170,CONCAT44(iStack_168,uStack_164),uStack_160,
                              uStack_158,uStack_150,uStack_148,uStack_140);
      fn_8227CB30(param_1 + 0xbd8,uVar1);
      fn_82359C18(uVar1);
      puVar3 = (unsigned int *)fn_822EFBF0(auStack_178,iVar2);
      fn_823EAD78(*puVar3,auStack_b0);
      if (iStack_174 != 0) {
        fn_822315A0();
      }
    }
  }
  return;
}

