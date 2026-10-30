extern int fn_8305F7A0(int, int);
extern int fn_83066788(void *, int, float);

typedef struct Obj_8305DF90 { char pad[0x28]; int f28; int *f2c; int cnt; } Obj_8305DF90;

int fn_8305DF90(Obj_8305DF90 *o, void *ctx, float f)
{
  int i = 0;
  if (0 < o->cnt) {
    int off = 0;
    do {
      int *p = o->f2c;
      int v = fn_8305F7A0(o->f28, *(int *)((char *)p + off));
      if (fn_83066788(ctx, v, f) != 2) {
        return 0;
      }
      i++;
      off += 4;
    } while (i < o->cnt);
  }
  return 1;
}
