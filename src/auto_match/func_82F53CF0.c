typedef struct { char b[0x1c0]; } E;
typedef struct { E *e; } P;
extern char *fn_82F5C708(E *e, char *a, int i, int c, int d, float f);
extern void fn_824B4298(void *d, const void *s, unsigned int n);
void fn_82F53CF0(P *p, char *a, int i, int c, float f)
{
  char *r = fn_82F5C708(p->e, a, i, c, -1, f);
  fn_824B4298(a + i * 0x1c0 + 0x30, r + i * 0x1c0 + 0x30, 0x1c0);
}
