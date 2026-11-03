typedef struct SP_824C2278 { int px; int *rep; } SP_824C2278;
typedef struct Obj_824C2278 {
  char pad0[0x48];
  int px;
  int *rep;
  char pad50[4];
  int w54;
  char pad58[4];
  void *w5c;
} Obj_824C2278;
extern void fn_822315A0(int *);
extern unsigned char fn_8223AAC0(int *);
extern int fn_824C04E0(Obj_824C2278 *, int);
extern void *fn_8265C9E0(int);
extern void fn_8265CA20(void *);
extern void *memcpy(void *, const void *, unsigned);

void fn_824C2278(Obj_824C2278 *o, int a, SP_824C2278 *sp, void *src)
{
  int *rep, *rep2, *old;
  int px, px2;
  void *mem, *cur;

  o->w54 = a;
  rep = sp->rep;
  px = sp->px;
  px2 = 0;
  rep2 = 0;
  if (rep != 0) {
    if (fn_8223AAC0(rep) != 0) {
      rep2 = rep;
      px2 = px;
    }
  }
  old = o->rep;
  o->rep = rep2;
  o->px = px2;
  if (old != 0) fn_822315A0(old);
  fn_824C04E0(o, 6);
  mem = fn_8265C9E0(0x428);
  if (mem != 0) memcpy(mem, src, 0x428);
  else mem = 0;
  if (mem != o->w5c) {
    if (o->w5c != 0) fn_8265CA20(o->w5c);
    o->w5c = mem;
  }
}
