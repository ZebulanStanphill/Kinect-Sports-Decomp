typedef struct Ent_82E5F358 { unsigned key; unsigned short val; unsigned short pad; } Ent_82E5F358;
typedef struct O_82E5F358 { char pad[0xe]; unsigned short fe; unsigned f10; } O_82E5F358;
extern Ent_82E5F358 lbl_82154E60[];
int fn_82E5F358(O_82E5F358 *o)
{
  unsigned i;
  Ent_82E5F358 *p;
  int r = 0;
  if (o == 0) return 0x80004003;
  if (o->fe == 0) {
    p = lbl_82154E60;
    for (i = 0; i < 9; i++) {
      if (o->f10 == p->key) { o->fe = lbl_82154E60[i].val; break; }
      p++;
    }
  }
  return r;
}