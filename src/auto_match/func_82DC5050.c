extern unsigned __int64 __mftb();
extern int fn_82CE8E78();
extern int fn_830A94E8();
typedef struct { const char *name; unsigned time; unsigned unused; } TimerEntry_82DC5050;
typedef struct { const char *name; unsigned time; unsigned unused; const char *name2; } TimerEntry2_82DC5050;
typedef struct { void *pad; char *current; void *pad2; char *end; } TimerStream_82DC5050;
extern TimerStream_82DC5050 *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;
typedef struct { char pad[0x20]; unsigned a20; unsigned a24; unsigned a28; unsigned char a2c; } Arg_82DC5050;

void fn_82DC5050(unsigned *p1, int p2, Arg_82DC5050 *p3)
{
  TimerStream_82DC5050 *s;
  TimerEntry2_82DC5050 *e2;
  TimerEntry_82DC5050 *e;
  unsigned char flag;
  s = KeTlsGetValue(lbl_8323B4A0);
  if ((char *)s->current < s->end) {
    e2 = (TimerEntry2_82DC5050 *)s->current;
    e2->name = "LtIntegrate";
    e2->name2 = "StIntVel";
    e2->time = (unsigned)__mftb();
    s->current = (char *)(e2 + 1);
  }
  flag = 0;
  fn_830A94E8(*p1 + 0x1e0, p3->a28, p3->a20, p3->a24, &flag);
  p3->a2c = flag;
  s = KeTlsGetValue(lbl_8323B4A0);
  if ((char *)s->current < s->end) {
    e = (TimerEntry_82DC5050 *)s->current;
    e->name = "lt";
    e->time = (unsigned)__mftb();
    s->current = (char *)(e + 1);
  }
  fn_82CE8E78(p2, p3, p3, 0);
}
