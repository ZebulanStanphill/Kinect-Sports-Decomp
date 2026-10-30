typedef unsigned int uint;
typedef struct { int p0; int f4; short f8; } R;
extern R *fn_82791FD0(void *it);
extern uint fn_8278FDC8(int);
extern int fn_82793650(int, int);
extern int fn_8278D3F0(void *buf, int a, int b);
extern int fn_8278E7B0(int a, int b);
extern void fn_826FDF58(void *);
extern void fn_8267C4F0(uint);
extern void fn_8267C4C8(int);
typedef struct { char pad[0x10]; int f10; char p14[0x1c]; uint f30; } Cont;
int fn_8279B6A8(int param_1)
{
  char buf[0x30];
  int *self = (int *)param_1;
  void *it = (void *)(param_1 + 0x4c);
  R *r;
  int n, res, h; uint *pp; int idx;
  int iVar10 = param_1 + 0x4c;
  r = fn_82791FD0((void *)iVar10);
  *(int *)(param_1 + 0x70) = r->f4;
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (fn_8278FDC8(*(int *)(param_1 + 0x1c) + 0x14) != 0) {
      uint u4 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x30);
      uint u8 = *(int *)(*(int *)(param_1 + 0x30) + 0x1c) + *(int *)(param_1 + 0x70);
      if (u4 <= u8) {
        if (u8 == u4 && *(uint *)(param_1 + 0x28) < fn_8278FDC8(*(int *)(param_1 + 0x1c) + 0x14)) {
          r = fn_82791FD0((void *)iVar10);
          idx = *(int *)(param_1 + 0x28);
          *(int *)(param_1 + 0x70) = r->f4 + idx;
          *(unsigned short *)(param_1 + 0x74) = *(unsigned short *)(idx * 2 + *(int *)(*(int *)(param_1 + 0x1c) + 0x14));
          n = fn_82793650(*(int *)(param_1 + 0x1c) + 0x14, idx);
          r = fn_82791FD0((void *)iVar10);
          h = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
          res = fn_8278E7B0(h, fn_8278D3F0(buf, r->p0, n));
          if (*(uint *)(param_1 + 0x6c) != 0) fn_8267C4F0(*(uint *)(param_1 + 0x6c));
          *(int *)(param_1 + 0x6c) = res;
          fn_826FDF58(buf);
          return param_1 + 0x6c;
        }
        r = fn_82791FD0((void *)iVar10);
        n = fn_8278FDC8(*(int *)(param_1 + 0x1c) + 0x14);
        *(int *)(param_1 + 0x70) = r->f4 + n;
      }
    }
  }
  r = fn_82791FD0((void *)iVar10);
  pp = (uint *)(param_1 + 0x6c);
  if (r->p0 != 0) fn_8267C4C8(r->p0);
  if (*pp != 0) fn_8267C4F0(*pp);
  *pp = r->p0;
  if ((*(unsigned char *)(*(int *)(param_1 + 0x2c) + 0x13d) & 0x10) == 0 || fn_82791FD0((void *)iVar10)->f8 == 0)
    *(short *)(param_1 + 0x74) = fn_82791FD0((void *)iVar10)->f8;
  else
    *(short *)(param_1 + 0x74) = 0x2a;
  return (int)pp;
}
