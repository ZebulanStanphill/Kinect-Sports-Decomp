extern unsigned int *auStack_40;
extern unsigned int fStack_1c;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern int fn_826EBD10();
extern int fn_8275E678();
extern int fn_8275EB90();
extern int fn_8275FE18();
extern int fn_8275FFC0();
extern int fn_82784708();
extern int fn_82784920();
extern unsigned int iStack_20;
extern unsigned int iStack_24;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82762BE0(int param_1,int param_2)

{
  unsigned int uStack_80;
  unsigned int uStack_7c;
  float fStack_78;
  float fStack_74;
  __int64 lStack_70;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  char cStack_50;
  unsigned char auStack_40 [4];
  unsigned int uStack_3c;
  unsigned int uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  
  fn_8275FE18(auStack_40,param_1);
  fn_8275FFC0(param_1,&fStack_78,&uStack_7c,&uStack_80);
  lStack_70 = (__int64)iStack_30;
  fn_82784708((double)((float)(__int64)iStack_34 * fStack_1c),
                    (double)((float)lStack_70 * fStack_1c),param_2,(unsigned __int64)(unsigned int)fStack_78 - 1,
                    (unsigned __int64)uStack_7c - 1,(unsigned __int64)uStack_80 - 1);
  while (uStack_3c < uStack_38) {
    fn_8275E678(auStack_40,&fStack_60,0);
    if (cStack_50 == '\0') {
      fStack_78 = fStack_58;
      fStack_74 = fStack_54;
      fn_826EBD10(param_2 + 8,&fStack_78);
      *(int *)(*(int *)(param_2 + 0x28) + 4) = *(int *)(*(int *)(param_2 + 0x28) + 4) + 1;
    }
    else {
      fn_82784920((double)fStack_60,(double)fStack_5c,(double)fStack_58,(double)fStack_54,
                        param_2);
    }
  }
  if (iStack_24 == 0) {
    iStack_24 = iStack_20;
  }
  *(int *)(param_1 + 4) = iStack_24;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  fn_8275EB90(param_1);
  return;
}

