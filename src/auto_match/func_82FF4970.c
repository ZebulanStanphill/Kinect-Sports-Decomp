extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern int fn_82FF52D8();
extern int fn_830140E8();
extern unsigned int lbl_83264308;
extern void RtlLeaveCriticalSection(void *);
typedef struct Ev { int a; int b; int c; int d; } Ev;
typedef struct Msg { int f0; int f4; int f8; int fc; int f10; int f14; int f18; int f1c; void (*f20)(int, Ev *); int f24; unsigned int f28; } Msg;
typedef struct Host { char pad[4]; char pad4[0x80]; char cs[0x1c]; int f_a4; } Host;

void fn_82FF4970(char *param_1, int param_2, Msg *param_3)
{
  void (*cb)(int, Ev *);
  unsigned int flags;
  Ev ev;
  if (param_3->f0 == 0 && param_3->f4 == 0) {
    if ((param_3->f28 & 0x10000) != 0) {
      fn_830140E8(lbl_83264308);
    }
    ev.a = param_3->f24;
    ev.b = param_3->fc;
    ev.d = param_3->f8;
    ev.c = param_2;
    cb = param_3->f20;
    flags = param_3->f28;
    fn_82FF52D8(param_1 + 4, param_2);
    if ((flags & 1) != 0) {
      fn_82A1E7D8(*(unsigned int *)(param_1 + 0xa4));
      RtlLeaveCriticalSection(param_1 + 0x88);
      cb(1, &ev);
      fn_82A1E810(*(unsigned int *)(param_1 + 0xa4));
      return;
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x88);
}
