extern void *memcpy(void *, const void *, unsigned);
extern void fn_82811400(void *, int);
typedef struct D_827D88A0 { int id; unsigned char data[0x18]; } D_827D88A0;
typedef struct O_827D88A0 { char pad[8]; D_827D88A0 a; D_827D88A0 b; } O_827D88A0;
O_827D88A0 *fn_827D88A0(O_827D88A0 *o, D_827D88A0 *s) {
  D_827D88A0 *a = &o->a; D_827D88A0 *b;
  a->id = s->id;
  memcpy(a->data, s->data, 0x18);
  b = &o->b;
  fn_82811400(b->data, 0x10);
  b->id = s->id;
  memcpy(b->data, s->data, 0x18);
  return o;
}
