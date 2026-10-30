typedef struct {
  void *a7c;
  void *a80;
  char pad[0x1c];
  void *aa0;
  void *aa4;
  void *aa8;
  void *aac;
} Sub_82C44C58;
typedef struct {
  char pad[0x7c];
  Sub_82C44C58 s;
  char pad2[0x2c8 - 0x7c - sizeof(Sub_82C44C58)];
  int f2c8;
} Obj_82C44C58;
extern void fn_82C54F48(void *);
extern void fn_82C550F0(void *);
extern void fn_82C55220(void *);

void fn_82C44C58(Obj_82C44C58 *o)
{
  Sub_82C44C58 *s = &o->s;
  if (o->f2c8 != 0) {
    if (s->a7c != 0) { fn_82C54F48(s->a7c); s->a7c = 0; }
    if (s->a80 != 0) { fn_82C550F0(s->a80); s->a80 = 0; }
    if (s->aa0 != 0) { fn_82C55220(s->aa0); s->aa0 = 0; }
    if (s->aa4 != 0) { fn_82C550F0(s->aa4); s->aa4 = 0; }
    if (s->aa8 != 0) { fn_82C550F0(s->aa8); s->aa8 = 0; }
    if (s->aac != 0) { fn_82C55220(s->aac); s->aac = 0; }
  }
}
