extern char *fn_8223C258(unsigned int, int);
extern void *memcpy(void *, const void *, unsigned int);
typedef struct SB_8223CE40 {
  char pad0[0x10];
  char **f10; char **f14; char pad1[8];
  int *f20; char **f24; char pad2[8];
  int *f30; int *f34; char pad3[4];
  char *end; int mode;
} SB_8223CE40;

void fn_8223CE40(SB_8223CE40 *s, const char *src, unsigned int len, int mode)
{
  s->mode = mode;
  s->end = 0;
  if (len != 0 && (mode & 6) != 6) {
    char *p = fn_8223C258(len, 0);
    char *q;
    memcpy(p, src, len);
    s->end = p + len;
    if ((s->mode & 4) == 0) {
      *s->f10 = p;
      *s->f20 = (int)p;
      *s->f30 = len;
    }
    if ((s->mode & 2) == 0) {
      q = p + len;
      if ((s->mode & 0x10) == 0) q = p;
      *s->f14 = p;
      *s->f24 = q;
      *s->f34 = (p - q) + len;
      if (*s->f20 == 0) {
        *s->f10 = p;
        *s->f20 = 0;
        *s->f30 = (int)p;
      }
    }
    s->mode |= 1;
  }
}
