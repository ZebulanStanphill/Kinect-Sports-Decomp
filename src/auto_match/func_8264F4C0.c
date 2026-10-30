extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern unsigned int fn_82A1E0C0(int a, int b, void *fn, void *arg, int c, void *out);
extern void fn_8264EF18(void);
extern void fn_8264ED80(void);
extern void KeInitializeDpc(void *dpc, void *fn, void *ctx);
extern int ObReferenceObjectByHandle(void *h, void *type, void **obj);
extern int KeSetBasePriorityThread(void *thr, int pri);
extern void ObDereferenceObject(void *obj);
extern void *__imp_ExThreadObjectType;

void *fn_8264F4C0(char *p)
{
  int count;
  int n;
  int i;
  int first;
  unsigned int pri;
  char *e;
  char *t;
  unsigned int mask;
  unsigned int h;
  void *thr;
  int r;

  mask = *(unsigned int *)(p + 0x5e88);
  if ((mask & 0x100) == 0) {
    *(void **)(p + 0x2ec8) = fn_8265C940(200, 0xb5800000);
    if (*(void **)(p + 0x2ec8) == 0) {
      return 0;
    }
    count = 0;
    *(int *)(p + 0x2b08) = 0;
    for (n = 0; n < 6; n++) {
      if ((0x1000000 << n & *(unsigned int *)(p + 0x5e88)) != 0) {
        count = count + 1;
      }
    }
    *(int *)(p + 0x2b18) = 0xc0000000;
    first = -1;
    *(int *)(p + 0x2aec) = count;
    *(int *)(p + 0x2af0) = 0;
    *(int *)(p + 0x2ac8) = *(int *)(p + 0x3b04);
    *(int *)(p + 0x2ad0) = *(int *)(p + 0x3b08);
    if ((*(unsigned int *)(p + 0x5e88) & 0x4000000) != 0) {
      first = 2;
      *(int *)(p + 0x2c3c) = 2;
    }
    i = 0;
    pri = 0x7f000000;
    e = p + 0x2c84;
    do {
      if ((0x1000000 << i & *(unsigned int *)(p + 0x5e88)) != 0) {
        if (first < 0) {
          first = i;
          *(int *)(p + 0x2c3c) = i;
        }
        t = e - 0x44;
        *(int *)(e - 0x40) = i;
        *(unsigned int *)(e - 0x28) = pri;
        *(char **)(e - 0x44) = p + 0x2ac4;
        *(unsigned int *)(t + 0x18) = (pri + 0x41000000) | 2;
        *(unsigned char *)(e - 8) = 0;
        *(int *)(e - 4) = 0;
        *(char **)e = e;
        *(char **)(e + 4) = e;
        KeInitializeDpc(e - 0x24, (void *)fn_8264EF18, e - 0x44);
        *(char *)(e - 0x21) = (char)i + 1;
        h = fn_82A1E0C0(0, 0x10000, (void *)fn_8264ED80, e - 0x44, 0, e + 0xc);
        *(unsigned int *)(e + 8) = h;
        if (h == 0) {
          return 0;
        }
        r = ObReferenceObjectByHandle((void *)h, __imp_ExThreadObjectType, &thr);
        if (r >= 0) {
          KeSetBasePriorityThread(thr, 0x11);
          ObDereferenceObject(thr);
        }
      }
      pri = pri + 0x80;
      i = i + 1;
      e = e + 0x6c;
    } while (pri < 0x7f000300);
  }
  return (void *)1;
}
