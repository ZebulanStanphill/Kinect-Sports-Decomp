extern unsigned int *auStack_30;
extern int fn_82CEE9F8();
extern int fn_82CEF548();
extern unsigned int lbl_8323AB38;


void fn_82CE3DC8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned char *param_3)

{
  char *pcVar1;
  unsigned char auStack_30 [16];
  
  if ((param_3 != (unsigned char *)0x0) && (param_3 != &lbl_8323AB38)) {
    pcVar1 = (char *)fn_82CEE9F8(auStack_30,param_3);
    if (*pcVar1 != '\0') {
      fn_82CEF548(param_1,param_3,param_2);
    }
  }
  return;
}

