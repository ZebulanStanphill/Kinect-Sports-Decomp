typedef struct { char pad[0x14]; void *f14; void *f18; void *f1c; void *f20; } In_830044F0;
typedef struct { char pad[0x20]; In_830044F0 *in; } Self_830044F0;
extern void fn_82FF53D0(void *, void *);
extern void fn_82FF53E8(void *, void *);
extern void *lbl_832642F4;

void fn_830044F0(Self_830044F0 *s, unsigned char on)
{
  void *v;
  if (s->in != 0) {
    v = s->in->f18;
    if (on != 0) {
      if (v != 0)
        fn_82FF53D0(lbl_832642F4, v);
      v = s->in->f20;
      if (v != 0)
        fn_82FF53D0(lbl_832642F4, v);
      v = s->in->f14;
      if (v != 0)
        fn_82FF53D0(lbl_832642F4, v);
      v = s->in->f1c;
      if (v != 0)
        fn_82FF53D0(lbl_832642F4, v);
    } else {
      if (v != 0)
        fn_82FF53E8(lbl_832642F4, v);
      v = s->in->f20;
      if (v != 0)
        fn_82FF53E8(lbl_832642F4, v);
      v = s->in->f14;
      if (v != 0)
        fn_82FF53E8(lbl_832642F4, v);
      v = s->in->f1c;
      if (v != 0)
        fn_82FF53E8(lbl_832642F4, v);
    }
  }
}
