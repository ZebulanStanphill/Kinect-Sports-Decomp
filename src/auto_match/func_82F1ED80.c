extern int fn_82F1E698();


typedef struct P { char pad[0x2d0]; unsigned count; char pad2[0xaf0-0x2d4]; int mode; char pad3[0x1e54-0xaf4]; char *ents; } P;
void fn_82F1ED80(P *p, unsigned a, unsigned b, int idx, int out)
{
  char *e = p->ents + idx * 0x114;
  unsigned i;
  unsigned s = a;
  unsigned n = b;
  int o = out;
  for (; s < n; s++) {
    for (i = 0; i < p->count; i++) {
      if (*(int *)(e + 0x74) != 0 || p->mode == 0 || p->mode == 4)
        fn_82F1E698(p, i, s, e, o);
      e += 0x114;
      o += 0x600;
    }
  }
}
