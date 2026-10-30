typedef struct { int h; int pad[23]; } Ent_82E00870;
typedef struct { char pad[0x10]; Ent_82E00870 *ents; int count; } Obj_82E00870;
extern int fn_82D8CD68(int h, void *buf);
extern int fn_82E00530(Obj_82E00870 *o, void *p, unsigned int i, void *buf);
extern int fn_82E00628(Obj_82E00870 *o, void *p, unsigned int i);

void fn_82E00870(Obj_82E00870 *o, void *p)
{
  char buf[32];
  int n = o->count;
  unsigned int i = 0;
  if (0 < n) {
    unsigned int j = 0;
    do {
      fn_82E00628(o, p, i);
      fn_82E00530(o, p, i, buf);
      fn_82D8CD68(o->ents[j].h, buf);
      i = (j + 1) & 0xff;
      j = i;
    } while ((int)j < n);
  }
}
