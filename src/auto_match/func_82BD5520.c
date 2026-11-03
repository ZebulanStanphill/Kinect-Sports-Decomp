typedef struct Dev_82BD5520 { char pad[0xd0]; unsigned flags; } Dev_82BD5520;
typedef struct Self_82BD5520 {
  int pad0;
  unsigned count;
  char pad1[0x40];
  Dev_82BD5520 *devs[4];
  void *slots[1];
} Self_82BD5520;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int XNotifyGetNext(int, int, unsigned *, unsigned *);
extern int fn_82BD4DA8();
extern int fn_82BD62B0();
extern int fn_82BD6D20();
extern int fn_82BD9FD8();

unsigned char fn_82BD5520(int param_1)
{
  int flag;
  int r;
  unsigned id;
  unsigned arg;
  int *p;
  unsigned i;
  int t;

  r = 0;
  flag = 0;
  RtlEnterCriticalSection((void *)(param_1 + 0xf0));
  if (*(unsigned *)(param_1 + 0x10c) != 3) {
    if (XNotifyGetNext(*(int *)(param_1 + 0x118), 0, &id, &arg) != 0) {
      switch (id) {
      case 0xe:
        flag = 1;
      case 10:
      case 0x4000002:
      case 0x4000003:
        *(int *)(param_1 + 0x11c) = 1;
      }
    }
    r = fn_82BD4DA8(param_1);
    p = (int *)(param_1 + 0x4c);
    t = 4;
    do {
      if (flag && fn_82BD62B0(p[1]) != 0) {
        *(unsigned *)(p[1] + 0xd0) = *(unsigned *)(p[1] + 0xd0) | 8;
      }
      p++;
      fn_82BD6D20(*p);
      t--;
    } while (t != 0);
    i = 0;
    if (*(unsigned *)(param_1 + 8) > 0) {
      p = (int *)(param_1 + 0x60);
      do {
        if ((unsigned long long *)*p != 0 && *(unsigned long long *)*p != 0) {
          fn_82BD9FD8(*p);
        }
        i++;
        p++;
      } while (i < *(unsigned *)(param_1 + 8));
    }
    *(int *)(param_1 + 0x11c) = 0;
  }
  RtlLeaveCriticalSection((void *)(param_1 + 0xf0));
  return r == 0;
}
