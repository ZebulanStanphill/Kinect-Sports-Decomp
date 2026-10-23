typedef unsigned int uint;

typedef struct Entry {
  uint flags;
  int pad[3];
} Entry;

int fn_82CE39C8(Entry *entries, uint index)
{
  uint v;

  if (index >= 0x40) {
    return 0x80070057;
  }
  if (index == 0x3f) {
    return 0;
  }
  v = entries[index].flags;
  if ((v & 0x80000000) != 0 && (v & 0x40000000) != 0) {
    entries[index].flags = v & ~0x40000000;
    return 0;
  }
  return 0x80004005;
}
