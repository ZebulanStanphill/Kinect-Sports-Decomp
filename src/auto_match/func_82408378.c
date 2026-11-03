extern int lbl_821AC5E0;
extern int lbl_821B7EC8;
extern void fn_822315A0(unsigned);
extern void fn_82359C18(void *);
extern unsigned char fn_8288B760(unsigned);
extern void fn_82F56790(unsigned, void *);
static __forceinline void Rel(unsigned *pp) { if (*pp != 0) fn_822315A0(*pp); }
typedef struct Tmp_82408378 { char b[16]; unsigned last; } Tmp_82408378;
void fn_82408378(unsigned *p)
{
  Tmp_82408378 t;
  unsigned o;
  *p = (unsigned)&lbl_821B7EC8;
  Rel(&p[0x19]);
  Rel(&p[0x17]);
  o = *(unsigned *)(p[8] + 0x84);
  if (o != 0) {
    if (fn_8288B760(o) == 0) {
      t.last = 0;
      fn_82F56790(o + 0x88, &t);
      fn_82359C18(&t);
    }
  }
  *p = (unsigned)&lbl_821AC5E0;
}
