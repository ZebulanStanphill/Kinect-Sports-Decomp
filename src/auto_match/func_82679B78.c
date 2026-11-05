typedef struct O_82679B78 {
  char pad0[0xc]; int mc; char pad10[8]; int m18; char padlc[0xb8]; unsigned md4; void *md8;
} O_82679B78;
extern void fn_8263CBB0(void *, int, int, unsigned __int64);
extern void fn_82639208(void *, unsigned);
extern void fn_826793F0(O_82679B78 *);

void fn_82679B78(O_82679B78 *s)
{
  if (s->md8 != 0) {
    if (s->m18 != 0) {
      s->mc = 0;
      s->m18 = 0;
    }
    fn_8263CBB0(s->md8, 0, 0, 0x80000000);
    fn_82639208(s->md8, s->md4);
  }
  fn_826793F0(s);
}
