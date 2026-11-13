extern int *piRam8326c3a4;
extern int fn_82522DF8();
extern int fn_825269D0();
extern int fn_82599308();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern int fn_82CE6B70();
extern int fn_82CE7300();
extern int fn_82CE7D10();
extern unsigned int *lbl_8326C3A0;
extern unsigned int lbl_83296E1C;
extern unsigned int lbl_83296E24;


void fn_825989D8(void)

{
  unsigned int *puVar2;
  unsigned int uVar3;
  __int64 lVar1;
  int *piVar4;

  if (lbl_8326C3A0 != (unsigned int *)0x0) {
    (**(int (***)())*lbl_8326C3A0)(lbl_8326C3A0,1);
    lbl_8326C3A0 = (unsigned int *)0x0;
  }
  puVar2 = (unsigned int *)fn_82599308();
  *puVar2 = 4;
  puVar2 = (unsigned int *)fn_82522DF8(0x40);
  *puVar2 = 7;
  fn_82A1BB18();
  uVar3 = fn_8259A230();
  puVar2[1] = uVar3;
  puVar2[2] = 1;
  sync(1);
  fn_82BFE128(lbl_83296E1C,puVar2);
  puVar2 = (unsigned int *)fn_82522DF8(0x40);
  *puVar2 = 7;
  fn_82A1BB18();
  uVar3 = fn_8259A230();
  puVar2[1] = uVar3;
  puVar2[2] = 3;
  sync(1);
  fn_82BFE128(lbl_83296E24,puVar2);
  while (piVar4 = (int *)fn_82599308(), *piVar4 != 0) {
    fn_82A1BB18();
    lVar1 = fn_8259A230();
    fn_825269D0(lVar1 + 0x23,0);
  }
  fn_82CE7D10();
  (**(int (***)())(*piRam8326c3a4 + 8))(piRam8326c3a4,3);
  fn_82CE7300(0);
  fn_82CE6B70(piRam8326c3a4,0);
  return;
}
