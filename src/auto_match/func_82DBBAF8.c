typedef struct { unsigned int first; unsigned int k1; unsigned int k2; unsigned int pad[9]; } Ent_82DBBAF8;
typedef struct { char pad[0xac]; Ent_82DBBAF8 *ents; unsigned short count; } Obj_82DBBAF8;

unsigned int fn_82DBBAF8(Obj_82DBBAF8 *a, unsigned int b)
{
  unsigned int keys[2];
  unsigned int *pa;
  unsigned int *pb;
  int i;
  keys[0] = (unsigned int)a;
  keys[1] = b;
  i = 0;
  pa = keys;
  pb = keys + 1;
  do {
    Obj_82DBBAF8 *o = (Obj_82DBBAF8 *)*pa;
    int j = 0;
    int n = o->count;
    unsigned int other = *pb;
    if (n > 0) {
      unsigned int *q = &o->ents->k1;
      do {
        if ((q[0] ^ q[1] ^ (unsigned int)o) == other)
          return o->ents[j].first;
        j++;
        q += 12;
      } while (j < n);
    }
    i++;
    pa++;
    pb--;
  } while (i < 2);
  return 0;
}
