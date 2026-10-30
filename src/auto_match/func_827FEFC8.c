typedef struct Info_827FEFC8 { char pad[0x1c]; char a, b, c; } Info_827FEFC8;
typedef struct Obj_827FEFC8 { char pad[0x30]; Info_827FEFC8 *info; } Obj_827FEFC8;

float fn_827FEFC8(Obj_827FEFC8 **pp, float *vals)
{
  Info_827FEFC8 *i = (*pp)->info;
  float *p = vals;

  if (i->a != 0) {
    p = p + 1;
  }
  if (i->b != 0) {
    p = p + 1;
  }
  if (i->c != 0) {
    p = p + 1;
  }
  return *p;
}
