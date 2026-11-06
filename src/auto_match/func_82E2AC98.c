extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int memcmp(const void *, const void *, unsigned int);

typedef struct {
  char pad0[8];
  char cs[0x1c];
  unsigned char *entries;
  char pad24[4];
  unsigned int count;
} Obj_82E2AC98;

unsigned char *fn_82E2AC98(Obj_82E2AC98 *o, unsigned char *key)
{
  unsigned char *result = 0;
  unsigned int i;

  RtlEnterCriticalSection(o->cs);
  i = 0;
  if (o->count != 0) {
    do {
      if (memcmp(key, o->entries + i * 0x20, 16) == 0) {
        result = o->entries + i * 0x20 + 0x10;
        break;
      }
      i++;
    } while (i < o->count);
  }
  RtlLeaveCriticalSection(o->cs);
  return result;
}
