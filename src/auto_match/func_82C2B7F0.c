typedef struct Sub_82C2B7F0 {
  unsigned char data[0x38];
} Sub_82C2B7F0;

typedef struct Entry_82C2B7F0 {
  unsigned char pad[0xc8];
  Sub_82C2B7F0 subs[4];
  unsigned char rest[0x6f0 - 0xc8 - 4 * 0x38];
} Entry_82C2B7F0;

typedef struct Owner_82C2B7F0 {
  unsigned char pad[0x22];
  unsigned short count;
} Owner_82C2B7F0;

extern void fn_82C2B590(Entry_82C2B7F0 *p);
extern void fn_82C3E810(Sub_82C2B7F0 *p);

void fn_82C2B7F0(Owner_82C2B7F0 *owner, Entry_82C2B7F0 *entries)
{
  short i;
  unsigned short j;

  if (entries != 0 && owner != 0) {
    for (i = 0; i < owner->count; i++) {
      Entry_82C2B7F0 *e = &entries[i];
      for (j = 0; j < 4; j++) {
        fn_82C3E810(&e->subs[j]);
      }
    }
    fn_82C2B590(entries);
  }
}
