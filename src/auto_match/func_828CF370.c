typedef struct Obj_828CF370 Obj_828CF370;
struct Obj_828CF370 { struct { void (*f0)(Obj_828CF370 *, int); void (*f4)(Obj_828CF370 *, void *); } *vt; int a; int b; };
typedef struct S_828CF370 S_828CF370;
struct S_828CF370 { struct { char pad[0x50]; void (*f50)(S_828CF370 *); } *vt; char pad[0x2b8 - 4]; Obj_828CF370 *m2b8; Obj_828CF370 *m2bc; };
extern void *fn_8265C9E0(int);
extern void fn_8288DE90(void);
extern void fn_8288FB88(void);
extern void fn_828A12E8(S_828CF370 *);
extern void fn_828E02B0(void *, int);
extern char lbl_820266A0[];
extern char lbl_820266CC[];

void fn_828CF370(S_828CF370 *s)
{
  Obj_828CF370 *o;
  Obj_828CF370 *old;
  void *m;
  fn_828A12E8(s);
  fn_8288FB88();
  s->vt->f50(s);
  fn_828A12E8(s);
  fn_8288DE90();
  m = fn_8265C9E0(0xc);
  if (m != 0) {
    fn_828E02B0(m, 0);
    *(void **)m = lbl_820266CC;
    o = (Obj_828CF370 *)m;
  } else {
    o = 0;
  }
  old = s->m2b8;
  s->m2b8 = o;
  if (old != 0) {
    old->vt->f0(old, 1);
  }
  m = fn_8265C9E0(0xc);
  if (m != 0) {
    fn_828E02B0(m, 1);
    *(void **)m = lbl_820266A0;
    o = (Obj_828CF370 *)m;
  } else {
    o = 0;
  }
  old = s->m2bc;
  s->m2bc = o;
  if (old != 0) {
    old->vt->f0(old, 1);
  }
  s->m2b8->vt->f4(s->m2b8, s);
  s->m2bc->vt->f4(s->m2bc, s);
}
