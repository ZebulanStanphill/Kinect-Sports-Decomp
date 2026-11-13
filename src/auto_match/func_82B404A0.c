extern int fn_82AA6868();
extern int fn_82AD84B0();
extern int fn_82AD8EB8();
extern int fn_82AD8FB8();
extern int fn_82B1F4A8();
extern int fn_82B23228();
extern int fn_82B23720();
extern int fn_82B23950();
extern int fn_82B29610();
extern int fn_82B330F8();
extern int fn_82B34480();
extern int fn_82B35218();
extern int fn_82B356B8();
extern int fn_82B37600();
extern int fn_82B37E70();
extern int fn_82B380B0();
extern int fn_82B38378();
extern int fn_82B38918();
extern int fn_82B397C0();


/* tagged list link: low bit set marks the end */
#define FIRST(x) (((x) & 1) ? 0 : (x))

void fn_82B404A0(int param_1)

{
  unsigned int uVar2;
  int iVar3;
  unsigned int n;
  int iVar4;
  
  if ((*(unsigned int *)(param_1 + 0x28) & 0x2000) != 0) {
    fn_82B1F4A8(param_1,0);
  }
  fn_82AD84B0(param_1);
  fn_82B23720(param_1);
  if ((*(unsigned int *)(param_1 + 0x28) & 0x8000) != 0) {
    fn_82B38918(param_1);
    fn_82AA6868(param_1 + 0x3cc);
  }
  if ((*(unsigned int *)(param_1 + 0x28) & 0x400) != 0) {
    fn_82B29610(param_1);
    fn_82B23950(param_1);
    fn_82B330F8(param_1,1);
    fn_82B35218(param_1);
    fn_82AA6868(param_1 + 0x3cc);
  }
  if ((*(unsigned int *)(param_1 + 0x28) & 0x2000) != 0) {
    fn_82B1F4A8(param_1,1);
  }
  fn_82B23950(param_1);
  iVar3 = param_1 + 0x3cc;
  fn_82AA6868(iVar3);
  fn_82B330F8(param_1,1);
  fn_82AA6868(iVar3);
  fn_82B356B8(param_1);
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 0x20000;
  fn_82B356B8(param_1);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -0x20000;
  fn_82AA6868(iVar3);
  uVar2 = *(unsigned int *)((FIRST(*(unsigned int *)(param_1 + 4)) & 0xfffffffe) + 4);
  if ((uVar2 & 1) == 0 && uVar2 != 0) {
    n = FIRST(*(unsigned int *)(param_1 + 4));
    if (n != 0) {
      do {
        if ((*(unsigned int *)(n + 0x24) & 1) == 0) {
          iVar4 = (*(unsigned int *)(n + 0x20) & 0xfffffffe) - 0x28;
          if (iVar4 != 0 && (*(unsigned int *)(iVar4 + 8) & 0x3f80) == 0x2d00) {
            *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 0x400000;
          }
        }
        n = *(unsigned int *)((n & 0xfffffffe) + 4);
      } while ((n & 1) == 0 && n != 0);
    }
  }
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) & 0xfffffdff;
  fn_82B397C0(param_1);
  if ((*(unsigned int *)(param_1 + 0x28) & 0x2000) != 0) {
    fn_82B1F4A8(param_1,2);
  }
  if ((*(unsigned int *)(param_1 + 0x2c) & 0x800000) != 0) {
    fn_82B37E70(param_1);
    fn_82B380B0(param_1,1);
  }
  fn_82B34480(param_1);
  fn_82AD8EB8(param_1);
  fn_82B37600(param_1);
  fn_82AD8FB8(param_1);
  fn_82AA6868(iVar3);
  if ((*(unsigned int *)(param_1 + 0x2c) & 0x800000) != 0) {
    fn_82B380B0(param_1,0);
    fn_82AA6868(iVar3);
    if ((*(unsigned int **)(param_1 + 0x38) != (unsigned int *)0x0) && ((**(unsigned int **)(param_1 + 0x38) & 0x500) != 0))
    {
      fn_82B38378(param_1);
      fn_82AA6868(iVar3);
    }
  }
  fn_82B23228(param_1);
  fn_82AA6868(iVar3);
  return;
}

