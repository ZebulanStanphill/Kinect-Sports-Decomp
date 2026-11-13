extern void *fn_8265C9E0(int);
extern void *fn_82E1BFA0(void *);
extern void fn_82E1C280(void *, const char *);
extern void fn_830B4CB0(void *, int);

typedef struct Obj_830B4B38 { int pad; int f4; void *f8; } Obj_830B4B38;

void *fn_830B4B38(Obj_830B4B38 *o)
{
  if (o->f8 == 0) {
    void *mem = fn_8265C9E0(0x80);
    void *n;
    if (mem != 0) {
      n = fn_82E1BFA0(mem);
    } else {
      n = 0;
    }
    fn_830B4CB0(n, o->f4);
    fn_82E1C280(n, "VINCE");
    o->f8 = n;
  }
  return o->f8;
}
