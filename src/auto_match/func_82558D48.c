extern int fn_825121F0();
extern int fn_8251C7F0();
extern int fn_82522838();
extern int fn_82526778();
extern int fn_825269D0();
extern int fn_82528D90();
extern int fn_8252DC18();
extern int fn_825306A0();
extern int fn_82540108();
extern int fn_825522C0();
extern int fn_82557FA8();
extern int fn_82558ED0();
extern int fn_8259C110();
extern int fn_8262FEC8();
extern int fn_8265CA20();
extern int fn_82864E90();
extern int iRam8326b900;
extern int iRam8326b904;
extern unsigned int lbl_8326B908;
extern unsigned int lbl_832767CC;
extern unsigned int lbl_8327F880;
extern unsigned int *lbl_83281124;


unsigned __int64 fn_82558D48(void)

{
  int *piVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  
  fn_82540108();
  puVar7 = (unsigned int *)0x8326b90c;
  lbl_8326B908 = lbl_8327F880 + lbl_8326B908;
  iRam8326b904 = iRam8326b904 + 1;
  iRam8326b900 = iRam8326b900 + 1;
  do {
    if (((unsigned __int64)*puVar7 != 0) &&
       (lVar6 = (unsigned __int64)*puVar7 - 1, *puVar7 = (unsigned int)lVar6, lVar6 == 0)) {
      (*(int (**)())puVar7[2])(puVar7[1]);
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    puVar7 = puVar7 + 3;
  } while ((int)puVar7 < -0x7cd94604);
  fn_825306A0(0);
  fn_82557FA8();
  puVar5 = (unsigned int *)fn_82864E90();
  (**(int (***)())*puVar5)();
  fn_8259C110();
  if (lbl_832767CC == 0) {
    fn_82522838();
  }
  fn_82528D90();
  fn_825269D0(0x15,0);
  fn_82558ED0();
  fn_82526778();
  fn_8252DC18(0);
  fn_8251C7F0();
  fn_825121F0(0);
  puVar5 = lbl_83281124;
  if (lbl_83281124 != (unsigned int *)0x0) {
    piVar1 = (int *)*lbl_83281124;
    piVar4 = (int *)*piVar1;
    while (piVar4 != piVar1) {
      uVar2 = piVar4[3];
      piVar4[3] = (int)((unsigned __int64)uVar2 - 1);
      if ((__int64)((unsigned __int64)uVar2 - 1) < 0) {
        fn_8262FEC8(piVar4[2]);
        piVar4[2] = 0;
        piVar3 = (int *)*piVar4;
        if (piVar4 != (int *)*puVar5) {
          *(int **)piVar4[1] = piVar3;
          *(int *)(*piVar4 + 4) = piVar4[1];
          fn_8265CA20(piVar4);
          puVar5[1] = puVar5[1] + -1;
        }
      }
      else {
        piVar3 = (int *)*piVar4;
      }
      piVar4 = piVar3;
      piVar1 = (int *)*puVar5;
    }
  }
  fn_825522C0();
  return 1;
}

