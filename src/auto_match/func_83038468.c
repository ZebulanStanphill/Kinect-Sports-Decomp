extern void *memcpy(void *, const void *, unsigned int);
typedef struct Obj_83038468 { char pad[0x18c]; unsigned int cur; char pad2[0x40]; unsigned int mask; } Obj_83038468;
void fn_83038468(Obj_83038468 *o, void *src)
{
  unsigned int *p = &o->cur;
  unsigned int n;
  unsigned char hit;
  memcpy(p, src, 0x48);
  if (o->cur != 0) {
    do {
      n = *p - 1;
      if (n < 0x20) {
        hit = (o->mask & (1 << n)) != 0;
      } else {
        hit = 0;
      }
    } while (!hit && (*p = n, o->cur != 0));
  }
}
