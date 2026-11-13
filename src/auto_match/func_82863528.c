typedef unsigned char bool;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_e0;
extern unsigned int fStack_dc;
extern int fn_827EAAF0();
extern int fn_827EB678();
extern int fn_8285A808();
extern int fn_82861F50();
extern int fn_82863400();
extern int fn_82863790();


bool fn_82863528(void)

{
  int iVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  unsigned char auStack_e0 [4];
  float fStack_dc;
  unsigned int auStack_d8 [2];
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [176];
  
  iVar2 = fn_8285A808();
  fn_82863790(auStack_d8);
  fn_82861F50(auStack_d8[0],auStack_c0);
  auStack_e0[0] = 0;
  uVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x90);
  if (*(int *)(iVar2 + 0x94) == 0) {
    lVar1 = fn_827EB678(auStack_c0,uVar3 + 4,uVar3 + 0x10,auStack_e0);
  }
  else {
    fn_82863400(uVar3 + 4,uVar3 + 0x10,*(int *)(iVar2 + 0x94),auStack_d0,&fStack_dc);
    lVar1 = fn_827EAAF0((double)fStack_dc,auStack_c0,auStack_d0);
  }
  return lVar1 != 0;
}

