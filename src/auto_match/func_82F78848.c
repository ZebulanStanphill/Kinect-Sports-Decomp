extern char lbl_832635A0[];
extern void *fn_82F72318(char *, int, int);
extern void fn_82F72738(unsigned __int64 *);
extern void fn_82F735D8(unsigned __int64 *, int);
extern void fn_82F73228(unsigned __int64 *, void *);
extern void fn_82F78748(void *, void *);

typedef struct { int a; char b; char c; } Obj_82F78848;

void *fn_82F78848(void *param_1, void *param_2)
{
  Obj_82F78848 *mem;
  Obj_82F78848 *o;
  unsigned __int64 a, b, c;

  mem = (Obj_82F78848 *)fn_82F72318(lbl_832635A0, 8, 0);
  if (mem != 0) {
    mem->a = 0;
    mem->b = 0;
    mem->c = 0;
    o = mem;
  } else {
    o = 0;
  }
  fn_82F78748(param_1, o);
  fn_82F72738(&c);
  b = c;
  fn_82F735D8(&b, 0x20);
  a = b;
  fn_82F73228(&a, param_2);
  *(unsigned __int64 *)o = a;
  return param_1;
}
