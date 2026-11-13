extern int fn_82522838();
extern int fn_82522A48();
extern int fn_82522B10();
extern unsigned int lbl_832767CC;


void fn_82522E60(unsigned __int64 param_1,unsigned int param_2)

{
  if (lbl_832767CC == 0) {
    fn_82522838();
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
  }
  if ((param_2 & 0xffffffff) == 0) {
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
    fn_82522A48(lbl_832767CC,param_1);
  }
  else {
    fn_82522B10(lbl_832767CC,param_1,param_2);
  }
  return;
}

