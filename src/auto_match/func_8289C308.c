typedef struct If_8289C308 If_8289C308;
typedef struct Res_8289C308 { int pad; unsigned int f4; } Res_8289C308;
typedef struct VT_8289C308 {
  int pad0;
  Res_8289C308 *(*s4)(If_8289C308 *);
  Res_8289C308 *(*s8)(If_8289C308 *);
  Res_8289C308 *(*sc)(If_8289C308 *);
  Res_8289C308 *(*s10)(If_8289C308 *);
  Res_8289C308 *(*s14)(If_8289C308 *);
  Res_8289C308 *(*s18)(If_8289C308 *);
} VT_8289C308;
struct If_8289C308 { VT_8289C308 *vt; };
typedef struct Obj_8289C308 {
  char pad[0x20];
  If_8289C308 *c;
} Obj_8289C308;
extern void fn_8289C078(Obj_8289C308 *, unsigned int);
extern void fn_8289C128(Obj_8289C308 *);
extern void fn_8289C1A0(Obj_8289C308 *);
#define CALL(c, s) ((c) != 0 ? (c)->vt->s(c) : 0)
void fn_8289C308(Obj_8289C308 *o, unsigned int key)
{
  Res_8289C308 *v;
  if (CALL(o->c, s4) != 0) {
L_c3dc:
    fn_8289C078(o, key);
    return;
  }
  if (CALL(o->c, sc) != 0) {
    v = CALL(o->c, sc);
    if (key != v->f4) return;
    fn_8289C128(o);
    fn_8289C1A0(o);
    return;
  }
  if (CALL(o->c, s14) != 0) goto L_c3dc;
  if (CALL(o->c, s8) != 0) {
    v = CALL(o->c, s8);
  } else {
    if (CALL(o->c, s10) != 0) return;
    if (CALL(o->c, s18) == 0) return;
    v = CALL(o->c, s18);
  }
  if (key != v->f4) return;
  fn_8289C1A0(o);
}
