typedef struct VT_8279A0A0 { int pad0; void (*f4)(struct O_8279A0A0 *, int); } VT_8279A0A0;
typedef struct O_8279A0A0 {
  VT_8279A0A0 *vt; int m4; void *m8; char pad[0x131];
  unsigned char pad13d : 5;
  unsigned char f13d : 1;
  unsigned char r13d : 2;
} O_8279A0A0;
extern unsigned strlen(const char *);
extern void fn_82799958(void *, const char *, int, int, int, int, int, int, int);

void fn_8279A0A0(O_8279A0A0 *self, const char *s, int len, int a, int b)
{
  if (len == -1) {
    len = strlen(s);
  }
  fn_82799958(self->m8, s, len, b, self->f13d, a, 0, 0, 0);
  self->vt->f4(self, 6);
}
