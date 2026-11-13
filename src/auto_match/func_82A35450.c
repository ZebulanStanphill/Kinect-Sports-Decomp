extern int fn_82A1BC70(unsigned);
extern int fn_82A34580(int);
extern int fn_82A374A0(int);
extern int fn_82A37990(int, unsigned);
extern int fn_82A37CB8(int);
extern int fn_82A382C8(int);
extern int NtClose(unsigned);
extern void *memset(void *, int, unsigned);
extern void fn_8265C990(void *p, unsigned int flags);

void fn_82A35450(int param_1)
{
  fn_82A37990(param_1 + 0xc4, *(unsigned *)(param_1 + 0x178));
  if (*(unsigned *)(param_1 + 0x178) != 0) {
    NtClose(*(unsigned *)(param_1 + 0x178));
    *(unsigned *)(param_1 + 0x178) = 0;
  }
  if (*(unsigned *)(param_1 + 0x168) != 0) {
    fn_82A1BC70(*(unsigned *)(param_1 + 0x168));
    *(unsigned *)(param_1 + 0x168) = 0;
  }
  fn_82A374A0(param_1 + 0x10c);
  fn_82A37CB8(param_1 + 0x8c);
  fn_82A382C8(param_1 + 0x50);
  fn_82A34580(param_1);
  memset((void *)(param_1 + 0x34), 0, 0x18);
  *(int *)(param_1 + 0x1b0) = 0;
  if (*(int *)(param_1 + 0x1b4) != 0) {
    fn_8265C990(*(void **)(param_1 + 0x1ac), 0x24830000);
    *(int *)(param_1 + 0x1ac) = 0;
    *(int *)(param_1 + 0x1b4) = 0;
  }
}
