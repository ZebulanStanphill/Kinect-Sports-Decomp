typedef struct Itf_826C2778 Itf_826C2778;
typedef struct { char pad[0x2c]; unsigned char (*f2c)(Itf_826C2778 *, unsigned *, unsigned, void *); } ItfVT_826C2778;
struct Itf_826C2778 { ItfVT_826C2778 *vt; };
typedef struct Ref_826C2778 { char pad[8]; unsigned rc; } Ref_826C2778;
typedef struct Arr_826C2778 { Ref_826C2778 **v; } Arr_826C2778;
typedef struct Obj_826C2778 { char pad[0x1c]; Arr_826C2778 *w1c; } Obj_826C2778;
typedef struct Arg4_826C2778 { char pad[0x10]; Itf_826C2778 itf; } Arg4_826C2778;
extern void *fn_8267B890(unsigned, int, int);
extern int fn_826824B0();
extern void fn_82696330(void *);
extern Ref_826C2778 *fn_82696958(void *, int);
extern int fn_826B0AD8(void *, int);

void fn_826C2778(Obj_826C2778 *o, unsigned *p2, int idx, Arg4_826C2778 *p4)
{
  Arr_826C2778 *a;
  Ref_826C2778 *r;
  Ref_826C2778 **v;
  char buf[8];
  int off;

  if (o->w1c == 0 && p4 == 0) {
    a = (Arr_826C2778 *)fn_8267B890(*(unsigned *)(*p2 + 0x288), 0xc, 0);
    if (a != 0) {
      ((int *)a)[0] = 0;
      ((int *)a)[1] = 0;
      ((int *)a)[2] = 0;
      fn_826B0AD8(a, idx);
    } else {
      a = 0;
    }
    o->w1c = a;
  } else {
    buf[0] = 0;
    if (p4->itf.vt->f2c(&p4->itf, p2, *p2 + 0x130, buf) != 0) {
      r = fn_82696958(buf, 0);
      if (r != 0) r->rc = (r->rc + 1) & 0x8fffffff;
      v = o->w1c->v;
      off = idx * 4;
      if (r != 0) r->rc = (r->rc + 1) & 0x8fffffff;
      if (*(Ref_826C2778 **)((char *)v + off) != 0) fn_826824B0(*(Ref_826C2778 **)((char *)v + off));
      *(Ref_826C2778 **)((char *)v + off) = r;
      if (r != 0) fn_826824B0(r);
    }
    fn_82696330(buf);
  }
}
