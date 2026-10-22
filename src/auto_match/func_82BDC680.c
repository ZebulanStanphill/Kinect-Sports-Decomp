extern void fn_8265C990(void *, unsigned int);
extern void fn_82BD7C38(void *, int, int, int);

typedef struct {
  char pad0[0x8];
  void *p8;           /* 0x08 */
  char pad1[0x50 - 0xc];
  void *a50[2];       /* 0x50 */
  void *a58[2];       /* 0x58 */
  void *p60;          /* 0x60 */
  char pad2[0x7c - 0x64];
  void *a7c[2];       /* 0x7c */
  void *p84;          /* 0x84 */
  unsigned int count; /* 0x88 */
} S;

void fn_82BDC680(S *p)
{
  unsigned int i;

  if (p != 0) {
    for (i = 0; i < p->count; i++) {
      fn_82BD7C38(p->a50[i], 0, 0, 0);
      if (p->a7c[i] != 0) {
        fn_8265C990(p->a7c[i], 0x618a0009);
        p->a7c[i] = 0;
      }
      if (p->a58[i] != 0) {
        fn_8265C990(p->a58[i], 0x618a0003);
        p->a58[i] = 0;
      }
    }
    if (p->p60 != 0) {
      fn_8265C990(p->p60, 0x618a0003);
      p->p60 = 0;
    }
    if (p->p84 != 0) {
      fn_8265C990(p->p84, 0x618a0009);
      p->p84 = 0;
    }
    if (p->p8 != 0) {
      fn_8265C990(p->p8, 0x608a2002);
      p->p8 = 0;
    }
    fn_8265C990(p, 0x618a800d);
  }
}
