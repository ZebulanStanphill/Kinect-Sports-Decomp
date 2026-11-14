#include <string.h>
typedef struct Entry_82A245B8 { char pad[0x1c]; unsigned int flags; } Entry_82A245B8;
extern void fn_82A23B20(Entry_82A245B8 *entry, int index, char *buf, unsigned int size);
extern int RtlCompareStringN(const char *a, unsigned int alen, const char *b, unsigned int blen, int caseInsensitive);

int fn_82A245B8(const char *name, Entry_82A245B8 *entry)
{
  char buf[0x104];

  if ((entry->flags & 0x20) != 0) {
    return 1;
  }
  if ((entry->flags & 0x80) != 0) {
    return 0;
  }
  if ((entry->flags & 0x40) == 0) {
    return 0;
  }
  fn_82A23B20(entry, 0, buf, 0x104);
  return RtlCompareStringN(name, strlen(name), buf, strlen(buf), 1) == 0;
}
