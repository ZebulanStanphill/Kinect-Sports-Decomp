typedef struct Obj_82875500 {
  unsigned int data[0x1b];
} Obj_82875500;

typedef struct Elem_82875500 {
  unsigned char flag;
  Obj_82875500 obj;
} Elem_82875500;

extern int fn_82875170(Obj_82875500 *dst, Obj_82875500 *src);
extern int fn_8287B5C0(Obj_82875500 *o);
extern int fn_8287B658(Obj_82875500 *o);

void fn_82875500(Elem_82875500 *p, unsigned int n)
{
  Elem_82875500 tmp;

  while (n != 0) {
    tmp.flag = 0;
    fn_8287B5C0(&tmp.obj);
    if (p != 0) {
      p->flag = tmp.flag;
      fn_82875170(&p->obj, &tmp.obj);
    }
    fn_8287B658(&tmp.obj);
    p = p + 1;
    n = n - 1;
  }
}
