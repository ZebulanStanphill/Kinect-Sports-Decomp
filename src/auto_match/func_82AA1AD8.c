typedef struct R_82AA1AD8 { unsigned w0; unsigned w1; } R_82AA1AD8;
typedef struct O_82AA1AD8 { char pad[8]; void *m8; } O_82AA1AD8;
extern unsigned fn_82635FE8(void *);
extern R_82AA1AD8 *fn_82636118(void *, unsigned);

void fn_82AA1AD8(O_82AA1AD8 *s, unsigned i)
{
  R_82AA1AD8 *p;
  unsigned t;
  while (fn_82635FE8(s->m8) > i) {
    p = fn_82636118(s->m8, i);
    t = p->w1 >> 12 & 0xf;
    if (t != 0) {
      switch (t) {
      case 0:
        return;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 13:
      case 14:
        if ((p->w0 & 0x7000) != 0) {
          p->w0 = p->w0 | 0x20000;
          return;
        }
        if ((1 << t & 0x4054U) != 0) return;
        break;
      case 12:
        if ((p->w1 & 0x100) == 0) return;
        break;
      case 15:
        break;
      default:
        return;
      }
    }
    i++;
  }
}
