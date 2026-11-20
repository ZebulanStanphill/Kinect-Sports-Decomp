#include "havok/hkString.h"

// Lookup in an array of {key, b, val} records: skip to the entry after the first
// whose val is `want`, then return the val of the first later entry whose key
// (tag bit cleared) passes hkString::strCmp. An out-of-line member (`this` is numbered
// after the explicit parameters: index-first lwzx in the second loop); the first
// loop takes a typed element pointer (IV-first add). Find is a placeholder name.
typedef struct E_82E14430 { unsigned int key; int b; unsigned int val; } E_82E14430;
struct V_82E14430 { E_82E14430 *data; int count; unsigned int Find(int a, unsigned int want); };

unsigned int V_82E14430::Find(int a, unsigned int want)
{
  int i = 0;
  E_82E14430 *e;
  int j;
  unsigned int k;
  do {
    if (want == 0 || i >= count) break;
    e = &data[i];
    i++;
  } while (e->val != want);
  j = i;
  if (j < count) {
    do {
      k = data[j].key;
      if (k >> 1 != 0 && hkString::strCmp(reinterpret_cast<const char *>(a), reinterpret_cast<const char *>(k & 0xfffffffe)) == 0) {
        return data[j].val;
      }
      j++;
    } while (j < count);
  }
  return 0;
}
