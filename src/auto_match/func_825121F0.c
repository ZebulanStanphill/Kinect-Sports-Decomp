#define true 1
extern int fn_825269D0();
extern int fn_825935B0();
extern int fn_828EC080();
extern int iRam8327f78c;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int lbl_832659D4;
extern unsigned int uRam832659d0;


void fn_825121F0(char param_1)

{
  int iVar1;
  int iStack_20;
  int iStack_1c;
  
  while( true ) {
    iVar1 = XNotifyGetNext(uRam832659d0,0,&iStack_1c,&iStack_20);
    if (iVar1 == 0) break;
    if (iStack_1c == 9) {
      lbl_832659D4 = '\x01' - (iStack_20 == 0);
    }
  }
  fn_828EC080();
  if (param_1 == '\0') {
    fn_825269D0(0x42,0);
  }
  if (iRam8327f78c == 0) {
    fn_825935B0();
  }
  else {
    fn_825269D0(0x43,0);
  }
  return;
}

