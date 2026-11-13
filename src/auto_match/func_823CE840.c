#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_148;
extern unsigned int *auStack_188;
extern unsigned int *auStack_1f8;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D78();
extern int fn_8227CB30();
extern int fn_822EFBF0();
extern int fn_82359C18();
extern int fn_823CE9E0();
extern int fn_823D1ED0();
extern int fn_823E4820();
extern int fn_823EAC80();
extern int fn_82F68CC0();
extern unsigned int iStack_178;
extern unsigned int iStack_184;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_150;
extern unsigned int uStack_158;
extern unsigned int uStack_160;
extern unsigned int uStack_168;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_180;
extern unsigned int uStack_18c;


void fn_823CE840(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned char auStack_1f8 [104];
  int (**pcStack_190)();
  unsigned int uStack_18c;
  unsigned char auStack_188 [4];
  int iStack_184;
  unsigned __int64 uStack_180;
  int iStack_178;
  unsigned int uStack_174;
  unsigned __int64 uStack_170;
  unsigned __int64 uStack_168;
  unsigned __int64 uStack_160;
  unsigned __int64 uStack_158;
  unsigned __int64 uStack_150;
  unsigned char auStack_148 [104];
  unsigned char auStack_e0 [32];
  unsigned char auStack_c0 [192];
  
  fn_82250D78(auStack_c0);
  fn_823E4820(param_1,param_2,auStack_c0);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  iStack_178 = param_1;
  if (*(char *)(iVar2 + 4) == '\0') {
    uStack_18c = 0;
    pcStack_190 = fn_823CE9E0;
    uStack_180 = 0x823ce9e000000000;
    fn_82F68CC0(&uStack_170,auStack_c0,0x90);
    fn_82F68CC0(auStack_1f8,auStack_148,0x68);
    uVar1 = fn_823D1ED0(auStack_e0,uStack_180,CONCAT44(iStack_178,uStack_174),uStack_170,
                              uStack_168,uStack_160,uStack_158,uStack_150);
    fn_8227CB30(param_1 + 0xba8,uVar1);
    fn_82359C18(uVar1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
    if (iVar2 != 0) {
      uStack_18c = 0;
      pcStack_190 = fn_823CE9E0;
      uStack_180 = 0x823ce9e000000000;
      fn_82F68CC0(&uStack_170,auStack_c0,0x90);
      fn_82F68CC0(auStack_1f8,auStack_148,0x68);
      uVar1 = fn_823D1ED0(auStack_e0,uStack_180,CONCAT44(iStack_178,uStack_174),uStack_170,
                                uStack_168,uStack_160,uStack_158,uStack_150);
      fn_8227CB30(param_1 + 0xba8,uVar1);
      fn_82359C18(uVar1);
      puVar3 = (unsigned int *)fn_822EFBF0(auStack_188,iVar2);
      fn_823EAC80(*puVar3,auStack_c0);
      if (iStack_184 != 0) {
        fn_822315A0();
      }
    }
  }
  return;
}

