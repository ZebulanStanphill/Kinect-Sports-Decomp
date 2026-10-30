extern void fn_82C2B590(void *);
typedef struct Inner_82A52068 { int f0; void *f4; } Inner;
typedef struct Item_82A52068 { char pad[0x1a8]; Inner *f1a8; } Item;
typedef struct Info_82A52068 { char pad[0x22]; unsigned short count; } Info;
typedef struct Self_82A52068 { Info *info; int f4; void *f8; } Self;
void fn_82A52068(Self *s, char *arr)
{
  Info *info = s->info;
  if (s->f8 != 0) {
    fn_82C2B590(s->f8);
    s->f8 = 0;
  }
  if (info != 0 && arr != 0 && info->count != 0) {
    short i = 0;
    do {
      Item *it = (Item *)(arr + i * 0x6f0);
      if (it != 0) {
        if (it->f1a8 != 0 && it->f1a8->f4 != 0) {
          fn_82C2B590(it->f1a8->f4);
          it->f1a8->f4 = 0;
        }
        if (it->f1a8 != 0) {
          fn_82C2B590(it->f1a8);
          it->f1a8 = 0;
        }
      }
      i = i + 1;
    } while (i < info->count);
  }
}
