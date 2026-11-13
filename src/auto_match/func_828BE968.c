extern unsigned int *auStack_10;
extern int fn_828C4360();
extern int fn_828C4368();
extern int fn_828C4620();


extern char lbl_8321434C[];
unsigned int  fn_828BE968(unsigned __int64 param_1)

{
  unsigned char cVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_10 [1];
  
  fn_828C4620(auStack_10,lbl_8321434C,param_1);
  cVar2 = fn_828C4368(auStack_10);
  if (cVar2 != '\0') {
    return 0x19;
  }
  uVar1 = fn_828C4360(auStack_10);
  return uVar1;
}

