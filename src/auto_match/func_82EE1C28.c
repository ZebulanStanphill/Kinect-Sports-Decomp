typedef unsigned int uint;
typedef struct Entry { unsigned short a, b; } Entry;
typedef struct Obj { char pad[0x48]; char sub[0x254 - 0x48]; uint n; } Obj;
extern int fn_82EE1048(void *, uint, Entry **);
extern int fn_82EE1848(Obj *, unsigned short);

int fn_82EE1C28(Obj *o, unsigned short *b, unsigned short *a, unsigned short idx)
{
  unsigned short count = 0;
  uint i;
  for (i = 0; i < o->n; i++) {
    Entry *p;
    Entry *e;
    if (fn_82EE1048(o->sub, i, &e) >= 0)
      p = e;
    else
      p = 0;
    if (p == 0)
      return 0xc00d36bb;
    if ((b == 0 || *b == p->b) && (a == 0 || *a == p->a)) {
      if (count == idx)
        return fn_82EE1848(o, (unsigned short)i);
      count++;
    }
  }
  return 0x80070057;
}
