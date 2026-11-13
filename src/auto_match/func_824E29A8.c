extern char *pcRam8326b7cc;
extern unsigned int *puRam8328113c;
extern unsigned int *auStack_60;
extern int fn_822933E8();
extern int fn_8248F530();
extern int fn_8248F790();
extern int fn_824E3650();
extern int fn_82508828();
extern int fn_8251F720();
extern int fn_82520158();
extern int fn_82586BD0();
extern int fn_82586CB0();
extern int fn_82586D90();
extern int fn_82586E58();
extern int fn_82587910();
extern int fn_8258F340();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_8266C788();
extern int fn_8266CD18();
extern int fn_8266EC60();
extern unsigned int iStack_50;
extern unsigned int lbl_8248F510;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B8D8;
extern unsigned int lbl_8326B8DC;
extern unsigned int lbl_8326B8E0;
extern unsigned int lbl_8326B8E4;
extern unsigned int lbl_8326B9FC;
extern unsigned int lbl_8326C018;
extern unsigned int uRam83281138;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_824E29A8(void)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned char auStack_60 [16];
  struct { int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;

  uVar1 = lbl_8320A898;
  uVar2 = fn_8266EC60();
  fn_8266CD18(uVar2,uVar1,0x500,0x2d0);
  fn_82520158(0xffffffff821c1378,0xffffffff8329e424,0);
  fn_82520158(0xffffffff821c1394,0xffffffff8329e428,0);
  fn_82520158(0xffffffff821c1378,0xffffffff8329e41c,0);
  fn_82520158(0xffffffff821c1394,0xffffffff8329e420,0);
  fn_82520158(0xffffffff821c1378,0xffffffff8329e414,0);
  fn_82520158(0xffffffff821c1394,0xffffffff8329e418,0);
  fn_82520158(0xffffffff821c1378,0xffffffff8329e40c,0);
  fn_82520158(0xffffffff821c1394,0xffffffff8329e410,0);
  lbl_8326B8D8 = 0x8329e424;
  lbl_8326B8DC = 0x8329e41c;
  lbl_8326B8E0 = 0x8329e414;
  lbl_8326B8E4 = 0x8329e40c;
  fn_8266EC60();
  fn_8266C788();
  pcRam8326b7cc = fn_824E3650;
  iVar3 = lbl_8326B9FC + 1;
  iVar4 = lbl_8326B9FC + 2;
  (&lbl_8326C018)[lbl_8326B9FC] = fn_8248F790;
  lbl_8326B9FC = lbl_8326B9FC + 3;
  (&lbl_8326C018)[iVar3] = &lbl_8248F510;
  (&lbl_8326C018)[iVar4] = fn_8248F530;
  fn_82587910();
  uVar6 = 0x2a;
  puVar5 = (unsigned int *)0x831c4eb0;
  do {
    puVar5 = puVar5 + 1;
    uVar1 = *puVar5;
    uVar2 = fn_82586BD0();
    fn_82586D90(uVar2,uVar6,uVar1);
    uVar2 = fn_82586CB0();
    fn_82586E58(uVar2,uVar6,uVar1);
    uVar6 = uVar6 + 1;
  } while ((uVar6 & 0xffffffff) < 0x35);
  stack_pair_50.first = 0;
  stack_pair_50.second = 0;
  uStack_48 = 0;
  fn_82508828(auStack_60,&stack_pair_50.first);
  uRam83281138 = fn_8251F720(auStack_60,0);
  puRam8328113c = (unsigned int *)fn_8265C9E0(0x10);
  if (puRam8328113c == (unsigned int *)0x0) {
    puRam8328113c = (unsigned int *)0x0;
  }
  else {
    *puRam8328113c = 0;
    puRam8328113c[1] = 0;
    puRam8328113c[2] = 0;
  }
  fn_8258F340(puRam8328113c,&stack_pair_50.first);
  iVar3 = stack_pair_50.first;
  if (stack_pair_50.first != 0) {
    fn_822933E8(stack_pair_50.first,stack_pair_50.second);
    fn_8265CA20(iVar3);
  }
  return;
}
