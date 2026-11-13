extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int iStack_3c;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8228D9E8(double param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  double dStack_28;
  
  puVar1 = *(unsigned int **)(param_2 + 0x178);
  if ((puVar1 != (unsigned int *)0x0) && (puVar1[0x106] == 1)) {
    if ((double)lbl_821CA460 < param_1) {
      param_1 = (double)lbl_821CA460;
    }
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82273CD8(&uStack_30,3);
    dStack_28 = param_1;
    puVar1 = (unsigned int *)fn_82279C58(auStack_40,*puVar1);
    fn_82672C20(*puVar1,0xffffffff821ab508,&uStack_30,1);
    if (iStack_3c != 0) {
      fn_822315A0();
    }
    fn_82273C88(&uStack_30);
  }
  return;
}

