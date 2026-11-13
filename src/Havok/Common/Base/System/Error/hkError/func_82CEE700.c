extern unsigned int *auStack_210;
extern unsigned int *auStack_220;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;


void fn_82CEE700(unsigned param_1)

{
  unsigned __int64 in_r0;
  int iVar1;
  unsigned char auStack_220 [16];
  unsigned char auStack_210 [512];
  
  fn_82CEE578(auStack_220,auStack_210,0x200);
  fn_82CEDB38(auStack_220,param_1);
  iVar1 = (*(int (**)())(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,3,0x2636fe25,auStack_210,".\\System\\Error\\hkError.cpp",0x28);
  if (iVar1 != 0) {
    __debugbreak();
  }
  fn_82CED958(auStack_220);
  return;
}

