typedef struct Desc { unsigned int pad : 15; unsigned int size : 14; unsigned int low : 3; unsigned int extra[9]; } Desc;
typedef struct Info { int pad[3]; Desc *descs; int pad10; int count; } Info;
typedef struct Self { char pad[0x50]; void **tab; } Self;
extern void *fn_82ABE9F0(Info *, unsigned int, int);

void *fn_82B4A218(Self *self, int i, Info *info)
{
  if (self->tab == 0) {
    self->tab = fn_82ABE9F0(info, info->count * 4, 0);
  }
  if (self->tab[i] == 0) {
    unsigned int size = info->descs[i].size * 8;
    self->tab[i] = fn_82ABE9F0(info, size, 0);
  }
  return self->tab[i];
}
