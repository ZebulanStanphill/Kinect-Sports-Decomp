typedef struct { char pad[0x28]; int idx; } Info;
typedef struct { Info *info; int val; } Item;
typedef struct { char pad[0x24]; unsigned char *flags; } Self;
extern int fn_8277F5D8(Self *, int);
extern void fn_82781FA0(Self *, Item *, int, int);

void fn_82782008(Self *s, Item *it, int a)
{
  int idx;
  it->val = 0;
  idx = it->info->idx;
  if (s->flags[idx] != 0) {
    it->val = fn_8277F5D8(s, idx);
    fn_82781FA0(s, it, a, 1);
  }
}
