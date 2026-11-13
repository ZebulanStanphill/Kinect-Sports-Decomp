typedef struct Obj_826C6178 Obj_826C6178;
struct Obj_826C6178 { struct { int pad[2]; int (*f8)(Obj_826C6178 *); } *vt; };
typedef struct { int pad; char *a; Obj_826C6178 *obj; } S_826C6178;
extern void fn_826959C8(char *);
extern void fn_82696BC8(char *, char *);

void fn_826C6178(S_826C6178 *p)
{
  char *a;
  if (p->obj == 0 || p->obj->vt->f8(p->obj) != 0xb) {
    a = p->a;
    fn_826959C8(a);
    *a = 0;
  } else {
    fn_82696BC8(p->a, p->obj != 0 ? (char *)p->obj - 0x10 : 0);
  }
}
