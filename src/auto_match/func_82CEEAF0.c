typedef struct E_82CEEAF0 { unsigned char tag; char p1[7]; short n; } E_82CEEAF0;
typedef struct S_82CEEAF0 { char p0[0xd]; unsigned char idx; } S_82CEEAF0;
extern E_82CEEAF0 *fn_82CFD4F0(unsigned);
extern void fn_82CFD5A8(void *);
extern int fn_82CEB1A8(void);

int fn_82CEEAF0(S_82CEEAF0 *s)
{
  E_82CEEAF0 *e;
  if (s->idx != 0) {
    e = fn_82CFD4F0(s->idx);
    if (e->n > 0) return e->n;
    if (e->tag == 0x19) {
      fn_82CFD5A8(s);
      return fn_82CEB1A8();
    }
  }
  return -1;
}
