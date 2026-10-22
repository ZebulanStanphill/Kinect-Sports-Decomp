typedef struct {
  unsigned char state;
  char pad1[3];
  unsigned char flag;
} Status;

typedef struct {
  char pad0[4];
  Status *status;
  int a8;
  char padc[0xc];
  int a18;
  int count;
} Obj;

extern int fn_826957D0(Obj *o, int n);
extern void fn_826959C8(Status *s);
extern int fn_82696AD0(int a, int b);
extern void fn_8271FDB0(int a, int b, int c);

void fn_827204A8(Obj *o)
{
  int a18;
  int v;
  Status *s;

  if (o->count >= 1) {
    a18 = o->a18;
    v = fn_826957D0(o, 0);
    v = fn_82696AD0(v, a18);
    fn_8271FDB0(o->a18, o->a8, v);
    s = o->status;
    fn_826959C8(s);
    s->state = 2;
    s->flag = 1;
  }
}
