extern void fn_82647448(void *);
extern void fn_82647460(void *);

typedef struct { char pad[0x30]; void *x; } P;

int fn_82C0E6F8(P *p, void *v)
{
  if (v != 0) {
    fn_82647448(v);
  }
  if (p->x != 0) {
    fn_82647460(p->x);
    p->x = 0;
  }
  p->x = v;
  return 0;
}
