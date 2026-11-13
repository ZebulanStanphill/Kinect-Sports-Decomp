extern unsigned int *auStack_30;
extern int fn_82F728D0();
extern int fn_82F72F40();
extern int fn_82F73228();
extern int fn_82F735D8();
extern int fn_82F73680();
extern int fn_82F74AF8();
extern int fn_82F771C8();
extern int fn_82F775F0();
extern unsigned int *lbl_832635C0;


unsigned __int64 * fn_82F77EC0(unsigned __int64 *param_1,int *param_2,int *param_3,char *param_4)

{
  char cVar1;
  unsigned __int64 auStack_30 [6];
  
  cVar1 = *lbl_832635C0;
  if (cVar1 == '\0') {
    fn_82F728D0(auStack_30,1);
    fn_82F73680(auStack_30,param_4);
    if (*param_2 != 0) {
      fn_82F73228(auStack_30,param_2);
    }
    if (*param_3 != 0) {
      if (*param_2 != 0) {
        fn_82F735D8(auStack_30,0x20);
      }
      fn_82F73228(auStack_30,param_3);
    }
    *param_1 = auStack_30[0];
  }
  else if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    fn_82F775F0(auStack_30,param_3,param_4,param_2,0);
    fn_82F74AF8(param_1,auStack_30,*param_4 == '*');
  }
  else {
    fn_82F72F40(auStack_30,param_4);
    if ((*param_2 != 0) && ((*param_3 == 0 || ((param_3[1] & 0x800000U) == 0)))) {
      fn_82F73228(auStack_30,param_2);
    }
    if (*param_3 != 0) {
      fn_82F73228(auStack_30,param_3);
    }
    fn_82F771C8(param_1,auStack_30);
  }
  return param_1;
}

