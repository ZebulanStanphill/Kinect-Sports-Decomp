extern unsigned int *auStack_20;
extern int fn_82F728D0();
extern int fn_82F73928();
extern int fn_82F73A48();
extern signed char *lbl_832635C0;


int fn_82F746F0(int param_1)

{
  int uVar1;
  unsigned char auStack_20 [16];
  
  if (*lbl_832635C0 == '\0') {
    fn_82F728D0(param_1,1);
  }
  else if (*lbl_832635C0 == '?') {
    lbl_832635C0 = lbl_832635C0 + 1;
    uVar1 = fn_82F73A48(auStack_20,0);
    fn_82F73928(param_1,0x2d,uVar1);
  }
  else {
    fn_82F73A48(param_1,0);
  }
  return param_1;
}

