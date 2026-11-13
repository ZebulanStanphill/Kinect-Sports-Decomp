extern int fn_822315A0();
extern int fn_822334D0();
extern int fn_82251180();
extern int fn_822511E0();
extern int fn_82251250();
extern int fn_82251300();
extern int fn_82251390();
extern int fn_82359C18();
extern int fn_828E3228();
extern int fn_828E32A0();

static __forceinline void DtorA_82250EC8(char *t)
{
  if (*(unsigned int *)(t + 0x6c) != 0) fn_822315A0(*(unsigned int *)(t + 0x6c));
  fn_82359C18(t + 0x50);
  fn_82359C18(t + 0x38);
  fn_828E32A0(t);
}
static __forceinline void DtorB_82250EC8(char *t)
{
  if (*(unsigned int *)(t + 0x74) != 0) fn_822315A0(*(unsigned int *)(t + 0x74));
  if (*(unsigned int *)(t + 0x6c) != 0) fn_822315A0(*(unsigned int *)(t + 0x6c));
  fn_82359C18(t + 0x50);
  fn_82359C18(t + 0x38);
  fn_828E32A0(t);
}
static __forceinline void DtorC_82250EC8(char *t)
{
  fn_82359C18(t + 0x50);
  fn_82359C18(t + 0x38);
  fn_828E32A0(t);
}

void fn_82250EC8(char *p)
{
  fn_82251390(p + 0xdb0);
  DtorA_82250EC8(p + 0xd40);
  DtorA_82250EC8(p + 0xcd0);
  fn_822334D0(p + 0xc38);
  fn_82251250(p + 0xb98);
  fn_82251250(p + 0xaf8);
  fn_82251250(p + 0xa58);
  fn_822334D0(p + 0x9c0);
  fn_82251300(p + 0x930);
  fn_82251250(p + 0x890);
  fn_82251250(p + 0x7f0);
  DtorB_82250EC8(p + 0x778);
  DtorC_82250EC8(p + 0x710);
  fn_822511E0(p + 0x690);
  DtorB_82250EC8(p + 0x618);
  DtorC_82250EC8(p + 0x5b0);
  DtorA_82250EC8(p + 0x540);
  fn_82251180(p + 0x4c8);
  DtorB_82250EC8(p + 0x450);
  fn_82251180(p + 0x3d8);
  fn_82251180(p + 0x360);
  fn_82251180(p + 0x2e8);
  fn_82251180(p + 0x270);
  DtorA_82250EC8(p + 0x200);
  DtorA_82250EC8(p + 0x190);
  DtorA_82250EC8(p + 0x120);
  fn_82251180(p + 0xa8);
  fn_822511E0(p + 0x28);
  fn_828E3228(p);
}

