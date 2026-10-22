extern void fn_82554DA8(void *);
extern void fn_8266DB08(void *, void *);
extern void *fn_8266EC60(void);
extern void fn_82BFEDD8(void *, int);

struct G { char pad[0x128]; int count; };
extern struct G lbl_832960A0;

struct Inner { char pad[0x18]; void *p; };
struct S { char pad[0x1c]; struct Inner *inner; char pad2[0x8c - 0x20]; int registered; void *res; };

void fn_8228F078(struct S *s)
{
  void *res;
  if (s->inner != 0) {
    if (s->registered != 0) {
      lbl_832960A0.count--;
      s->registered = 0;
    }
    res = s->res;
    if (res != 0) {
      fn_8266DB08(fn_8266EC60(), res);
      s->res = 0;
    }
    if (s->inner->p != 0) {
      fn_82BFEDD8(s->inner->p, 0);
    }
    fn_82554DA8(s->inner);
    s->inner = 0;
  }
}
