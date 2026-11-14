typedef struct Table_8278CCD8 {
  int pad0;
  unsigned int mask;        /* 0x04 */
} Table_8278CCD8;

typedef struct Map_8278CCD8 {
  Table_8278CCD8 *table;
} Map_8278CCD8;

typedef struct Obj_8278CCD8 {
  int pad0;
  int refs;                 /* 0x04 */
} Obj_8278CCD8;

typedef struct Key_8278CCD8 {
  Obj_8278CCD8 *obj;
} Key_8278CCD8;

typedef struct Hasher_8278CCD8 {
  int unused;
} Hasher_8278CCD8;

extern void fn_8267C498(Obj_8278CCD8 *obj);
extern unsigned int fn_8278BDD0(Hasher_8278CCD8 *hasher, Obj_8278CCD8 *obj);
extern int fn_8278C498(Map_8278CCD8 *self, Key_8278CCD8 *key, unsigned int index);

int fn_8278CCD8(Map_8278CCD8 *self, Key_8278CCD8 *key)
{
  Hasher_8278CCD8 hasher;
  Obj_8278CCD8 *obj;
  unsigned int index;

  if (self->table == 0)
    return -1;
  obj = key->obj;
  if (obj != 0)
    obj->refs++;
  index = fn_8278BDD0(&hasher, obj);
  index &= self->table->mask;
  if (obj != 0)
    fn_8267C498(obj);
  return fn_8278C498(self, key, index);
}
