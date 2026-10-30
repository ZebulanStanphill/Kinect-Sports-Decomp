struct Obj_828AB150;
typedef struct VT_828AB150 {
  void *s0;
  unsigned int (*m4)(struct Obj_828AB150 *);
  void *s8;
  unsigned int (*mc)(struct Obj_828AB150 *);
  unsigned char *(*m10)(struct Obj_828AB150 *);
} VT_828AB150;
typedef struct Obj_828AB150 { VT_828AB150 *vt; } Obj_828AB150;
typedef struct { char pad[0x58]; unsigned char lo; unsigned char hi; } Cfg_828AB150;
typedef struct { char pad[0xc]; unsigned char f0c; char pad1[0xb]; Cfg_828AB150 *cfg; char pad2[4]; Obj_828AB150 *obj; char pad3[4]; void *f28; } Self_828AB150;
extern int fn_8240D928();
extern unsigned char fn_82897BA8(Cfg_828AB150 *);
extern void fn_828996C8(Self_828AB150 *, int);
extern void fn_8289AC08(Self_828AB150 *, int, int, int, int);
extern void fn_8289D8D0(void *);
extern void fn_828A1318(void *, Self_828AB150 *);
extern void fn_82BA02A8(Self_828AB150 *);

void fn_828AB150(Self_828AB150 *s, unsigned char v)
{
  unsigned char *p;
  int off;
  if (v < s->cfg->lo)
    return;
  if (v > s->cfg->hi)
    return;
  if (s->obj == 0 || s->obj->vt->m4(s->obj) == 0) {
    if (s->obj == 0 || s->obj->vt->mc(s->obj) == 0) {
      if (s->obj == 0)
        return;
      if (s->obj->vt->m10(s->obj) == 0)
        return;
      if (s->obj != 0)
        p = s->obj->vt->m10(s->obj);
      else
        p = 0;
      fn_8289D8D0(s->f28);
      off = (fn_8240D928() + 4) * 4;
      if (v == p[off])
        return;
      fn_8289AC08(s, 1, 0, 1, 0);
      fn_82BA02A8(s);
      p[off] = v;
    } else {
      if (v == s->f0c)
        return;
      fn_8289AC08(s, 1, 0, 1, 0);
      fn_82BA02A8(s);
      s->f0c = v;
    }
    fn_8289AC08(s, 1, 1, 1, 0);
    if (fn_82897BA8(s->cfg) != 0)
      return;
  } else {
    if (v == s->f0c)
      return;
    fn_8289AC08(s, 1, 0, 1, 0);
    fn_82BA02A8(s);
    s->f0c = v;
    fn_8289AC08(s, 1, 1, 1, 0);
    if (fn_82897BA8(s->cfg) != 0) {
      fn_828996C8(s, -1);
      return;
    }
  }
  fn_828A1318(s->f28, s);
}
