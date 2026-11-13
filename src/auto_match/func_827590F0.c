typedef struct Ent_827590F0 {
  unsigned char b;
  unsigned char pad[3];
  unsigned int w;
} Ent_827590F0;
typedef struct Obj_827590F0 {
  char pad[9];
  unsigned char seed;
  unsigned short count;
  Ent_827590F0 *ents;
} Obj_827590F0;

unsigned int fn_827590F0(Obj_827590F0 *o)
{
  unsigned int h = o->seed;
  unsigned int i;
  for (i = 0; i < o->count; i++) {
    h = (o->ents[i].w >> 16) ^ o->ents[i].b ^ o->ents[i].w ^ h;
  }
  return h;
}
