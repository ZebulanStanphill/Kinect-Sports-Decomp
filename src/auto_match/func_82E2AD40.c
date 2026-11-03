typedef struct Vt_82E2AD40 {
  char pad[0x48];
  int (*f48)(void *, int, int);
  int (*f4c)(void *);
  int (*f50)(void *);
} Vt_82E2AD40;
typedef struct Obj_82E2AD40 { Vt_82E2AD40 *vt; } Obj_82E2AD40;
typedef struct Self_82E2AD40 {
  int pad0, pad1;
  int cs[7];
  int base;
  unsigned count;
} Self_82E2AD40;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

int fn_82E2AD40(int param_1, Obj_82E2AD40 *param_2)
{
  Self_82E2AD40 *self = (Self_82E2AD40 *)param_1;
  int hr;
  unsigned i;
  int off;

  RtlEnterCriticalSection(&self->cs);
  hr = param_2->vt->f50(param_2);
  if (hr >= 0) {
    i = 0;
    if (*(unsigned *)(param_1 + 0x2c) > 0) {
      off = 0;
      do {
        int a = *(int *)(param_1 + 0x24) + off;
        hr = param_2->vt->f48(param_2, a, a + 0x10);
        if (hr < 0) break;
        i++;
        off += 0x20;
      } while (i < *(unsigned *)(param_1 + 0x2c));
    }
  }
  RtlLeaveCriticalSection(&self->cs);
  return hr;
}
