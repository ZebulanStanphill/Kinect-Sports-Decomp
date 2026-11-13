typedef struct Table_8278CC58 {
  int pad0;
  unsigned int mask;        /* 0x04 */
} Table_8278CC58;

typedef struct Map_8278CC58 {
  Table_8278CC58 *table;
} Map_8278CC58;

typedef struct Key_8278CC58 {
  void *obj;
} Key_8278CC58;

typedef struct Hasher_8278CC58 {
  int unused;
} Hasher_8278CC58;

extern void fn_8267C4C8(void *obj);
extern void fn_8267C4F0(void *obj);
extern unsigned int fn_8278BA98(Hasher_8278CC58 *hasher, void *obj);
extern int fn_8278C400(Map_8278CC58 *self, Key_8278CC58 *key, unsigned int index);

int fn_8278CC58(Map_8278CC58 *self, Key_8278CC58 *key)
{
  Hasher_8278CC58 hasher;
  void *obj;
  unsigned int index;

  if (self->table == 0)
    return -1;
  obj = key->obj;
  if (obj != 0)
    fn_8267C4C8(obj);
  index = fn_8278BA98(&hasher, obj);
  index &= self->table->mask;
  if (obj != 0)
    fn_8267C4F0(obj);
  return fn_8278C400(self, key, index);
}
