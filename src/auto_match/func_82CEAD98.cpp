#include "havok/hkClass.h"

typedef struct Seg_82CEAD98 {
  int f0;
  struct Seg_82CEAD98 *next;
  int f8;
  int fc;
  char *data;
  int size;
} Seg_82CEAD98;

extern "C" char *fn_82CEAD98(Seg_82CEAD98 *self, int key)
{
  int i;
  int total;
  int idx;
  Seg_82CEAD98 *s;
  char *e;

  for (i = 0; i < reinterpret_cast<const hkClass *>(self)->getNumEnums(); i++) {
    total = self->size;
    for (s = self->next; s != 0; s = s->next) {
      total = s->size + total;
    }
    s = self;
    idx = i - total;
    do {
      idx = s->size + idx;
      if (idx >= 0) {
        e = s->data + idx * 20;
        goto found;
      }
      s = s->next;
    } while (s != 0);
    e = self->data;
found:
    if (hkString::strCmp(reinterpret_cast<const char *>(*(int *)e), reinterpret_cast<const char *>(key)) == 0) {
      return e;
    }
  }
  return 0;
}
