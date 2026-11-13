extern int *piRam8326c3a4;
#define true 1
extern int fn_82522DF8();
extern int fn_825269D0();
extern int fn_82599308();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern int fn_82CE6B70();
extern int fn_82CE72E8();
extern int fn_82CE7300();
extern int fn_82CE7B00();
extern unsigned int lbl_8326C3A0;
extern unsigned int lbl_83296E1C;
extern unsigned int lbl_83296E24;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82598898(void)

{
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int uVar4;
  __int64 lVar2;
  int *piVar5;
  unsigned int uStack_40;
  unsigned int uStack_38;
  unsigned int uStack_34;

  fn_82CE6B70(piRam8326c3a4,0xffffffff831d453c);
  fn_82CE7300(piRam8326c3a4);
  fn_82CE72E8(&uStack_38);
  uStack_38 = 0x80000;
  uStack_34 = 0x100000;
  uVar1 = (**(int (***)())(*piRam8326c3a4 + 4))(piRam8326c3a4,&uStack_38,uStack_40);
  fn_82CE7B00(uVar1,0xffffffff82ba02a8,0);
  puVar3 = (unsigned int *)fn_82599308();
  *puVar3 = 4;
  puVar3 = (unsigned int *)fn_82522DF8(0x40);
  *puVar3 = 6;
  fn_82A1BB18();
  uVar4 = fn_8259A230();
  puVar3[1] = uVar4;
  puVar3[2] = 1;
  sync(1);
  fn_82BFE128(lbl_83296E1C,puVar3);
  puVar3 = (unsigned int *)fn_82522DF8(0x40);
  *puVar3 = 6;
  fn_82A1BB18();
  uVar4 = fn_8259A230();
  puVar3[1] = uVar4;
  puVar3[2] = 3;
  sync(1);
  fn_82BFE128(lbl_83296E24,puVar3);
  while( true ) {
    piVar5 = (int *)fn_82599308();
    if (*piVar5 == 0) break;
    fn_82A1BB18();
    lVar2 = fn_8259A230();
    fn_825269D0(lVar2 + 0x23,0);
  }
  lbl_8326C3A0 = *piVar5;
  return;
}
