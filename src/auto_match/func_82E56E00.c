typedef struct Obj_82E56E00 {
  int pad0[2];
  char lock[0x3c];          /* 0x08 */
  char table[0x68];         /* 0x44 */
  unsigned int count;       /* 0xac */
} Obj_82E56E00;

extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);
extern int fn_82E56A88(void *table, unsigned int key, void *out);

long fn_82E56E00(Obj_82E56E00 *self, unsigned short a, unsigned short b)
{
  long hr;
  char out[4];
  fn_82E50CB8(self->lock);
  if (self->count >= 0x7f)
    hr = 0xc00d36b2;
  else
    hr = fn_82E56A88(self->table, (unsigned int)b << 15 | a, out) ? 0 : 0x8007000e;
  fn_82E50F10(self->lock);
  return hr;
}
