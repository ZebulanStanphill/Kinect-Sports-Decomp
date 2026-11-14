typedef struct Item_827A16D8 {
  unsigned big : 1;
  unsigned pad : 31;
  int f4;
  unsigned f8;
  char pad2[0x14];
  unsigned f20;
} Item_827A16D8;
typedef struct Vec_827A16D8 { Item_827A16D8 **data; unsigned size; } Vec_827A16D8;
typedef struct Obj_827A16D8 { char pad[0x24]; Vec_827A16D8 vec; } Obj_827A16D8;
extern void fn_827A0BD0(Obj_827A16D8 *);
extern unsigned char fn_827A8510(Item_827A16D8 *item);

int fn_827A1630(Obj_827A16D8 *o, int idx, unsigned char *out)
{
  Vec_827A16D8 *v;
  unsigned char bad;
  Item_827A16D8 *it;

  fn_827A0BD0(o);
  v = &o->vec;
  bad = v == 0 || (unsigned)idx >= v->size || idx < 0;
  if (!bad) {
    if (out != 0) {
      *out = fn_827A8510(v->data[idx]);
    }
    it = v->data[idx];
    if ((unsigned char)it->big) {
      return *(unsigned char *)&it->f8;
    }
    return it->f20;
  }
  if (out != 0) {
    *out = 0;
  }
  return -1;
}
