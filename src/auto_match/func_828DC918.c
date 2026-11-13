extern int fn_8236D498(void *);
extern int fn_8240D930(void *);
extern int fn_828C3A00();


typedef struct { char b[0x34]; } Elem_828DC918;
typedef struct { char pad[0x6c]; int f6c; char pad2[0x10]; int f80; int f84; Elem_828DC918 *b; Elem_828DC918 *e; } Obj_828DC918;
int fn_828DC918(Obj_828DC918 *o)
{
  Elem_828DC918 *p = o->b;
  if (p != o->e) do {
      int a = o->f6c;
      int c = fn_8236D498(p);
      int d = o->f84;
      fn_828C3A00(a,o->f80,fn_8240D930(p),d,c,1);
      p++;
  } while (p != o->e);
  return 1;
}
