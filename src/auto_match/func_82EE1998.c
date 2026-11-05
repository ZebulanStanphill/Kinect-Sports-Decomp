typedef struct Rec2_82EE1998 { short s0; unsigned short s2; int p4; int p8; int mc; } Rec2_82EE1998;
typedef struct O_82EE1998 { char pad0[0x48]; char m48[0x20c]; unsigned m254; } O_82EE1998;
extern int fn_82EE1048(void *, int, Rec2_82EE1998 **);
extern int fn_82F6ADA8(void *, int);

int fn_82EE1998(O_82EE1998 *s, unsigned short key, void *cmp)
{
  int ok = 0;
  unsigned short i = 0;
  int j;
  Rec2_82EE1998 *tmp;
  Rec2_82EE1998 *e;
  int hr;
  if (s->m254 > 0) {
    void *list = s->m48;
    j = 0;
    do {
      hr = fn_82EE1048(list, j, &tmp);
      e = hr >= 0 ? tmp : 0;
      if (e == 0) return 0xC00D36BB;
      if (key == e->s2 && fn_82F6ADA8(cmp, e->mc) == 0) break;
      i = j + 1;
      j = i;
    } while (s->m254 > i);
  }
  if (s->m254 <= i) ok = 1;
  return ok;
}
