typedef struct Obj_828ADBE0 {
  char pad0[0x60];
  char sub60[0x1c];
  int f7c;
  int f80;
  char pad84[8];
  int f8c;
  char pad90[0x14];
  unsigned char fa4;
  char pada5[3];
  int fa8;
  char padac[8];
  int fb4;
  char padb8[0x140];
  int f1f8;
  char pad1fc[0x7c];
  char sub278[1];
} Obj_828ADBE0;

extern int fn_828A12E8(Obj_828ADBE0 *);
extern void fn_82896AD8(int);
extern void fn_828EC6B8(int, unsigned char);
extern void fn_828EC6C0(int, unsigned char);
extern int fn_82A1BFA8(int);
extern void fn_828C2BD8(Obj_828ADBE0 *, int, char *, char *);
extern void fn_828AFFB0(void *, unsigned char);
extern void fn_828AC4E8(void *);
extern int fn_82610EF0(int);
extern int fn_823AA2A8(int);
extern void fn_828AC670(void *, int, int);
extern char lbl_83159E7C[];
extern char lbl_83159E98[];
extern char lbl_83159EB4[];

void fn_828ADBE0(Obj_828ADBE0 *o, unsigned char a, unsigned char b, unsigned char c,
                 int d, int e, int obj, unsigned char g)
{
  unsigned int i;
  char *s;
  o->f7c = d;
  o->f80 = e;
  fn_82896AD8(fn_828A12E8(o));
  fn_828EC6B8(o->f8c, a);
  fn_828EC6C0(o->f8c, b);
  i = 0;
  do {
    if (fn_82A1BFA8(i) != 0) {
      s = a ? lbl_83159E98 : lbl_83159EB4;
      fn_828C2BD8(o, i, lbl_83159E7C, s);
    }
    i++;
  } while (i < 4);
  o->f1f8 = 1;
  fn_828AFFB0(o->sub278, c);
  o->fa4 = 0;
  o->fa8 = 0;
  o->fb4 = 1;
  fn_828AC4E8(o->sub60);
  fn_828AC670(o->sub60, fn_823AA2A8(obj), fn_82610EF0(obj));
  *((unsigned char *)o + 0x78) = g;
}
