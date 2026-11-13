extern int *piRam83213fe0;
extern int fn_82880608();
extern int fn_82882DD8();
extern int fn_82883A38();
extern int fn_82883AB8();
extern int fn_82883B00();
extern int fn_828EA790();
extern int iRam83213fe8;
extern int iRam83213fec;
extern int iRam83213ff0;
extern int iRam83213ff4;
extern int iRam83213ff8;
extern unsigned int iStack_70;
extern unsigned int uRam83213fe4;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;


void fn_828A5518(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *apiStack_80 [4];
  int iStack_70;
  int *piStack_6c;
  unsigned int ***pppuStack_68;
  unsigned int ***pppuStack_64;
  unsigned char uStack_60;
  unsigned char uStack_5f;

  iVar3 = fn_82880608();
  piVar1 = *(int **)(iVar3 + 4);
  apiStack_80[0] = (int *)*piVar1;
  while (apiStack_80[0] != piVar1) {
    iRam83213ff8 = apiStack_80[0][3];
    pppuStack_68 = &pppuStack_68;
    pppuStack_64 = &pppuStack_68;
    piStack_6c = (int *)0x0;
    uStack_60 = 0;
    iRam83213ff4 = 0;
    iRam83213ff0 = 0;
    uStack_5f = 0;
    iStack_70 = iRam83213ff8;
    fn_82883A38(&iStack_70);
    while (piVar2 = piStack_6c, piStack_6c != (int *)0x0) {
      piRam83213fe0 = piStack_6c;
      uRam83213fe4 = (**(int (***)())(*piStack_6c + 4))();
      iVar3 = (**(int (***)())(*piVar2 + 0x24))(piVar2);
      iRam83213fe8 = iRam83213fec;
      if ((iRam83213ff0 != 0) || (iRam83213ff0 = 0, iVar3 != 0)) {
        iRam83213ff0 = 1;
      }
      iRam83213fec = iVar3;
      if (iVar3 == 0) {
        fn_82883AB8(&iStack_70);
      }
      else {
        fn_82883B00();
        (**(int (***)())*piVar2)(piVar2,1);
      }
      iRam83213ff4 = iRam83213ff4 + 1;
    }
    fn_82882DD8(&iStack_70);
    fn_828EA790(apiStack_80);
  }
  return;
}
