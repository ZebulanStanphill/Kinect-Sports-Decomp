typedef struct Info { char pad[0xf8]; int xf8; } Info;
typedef struct E { char pad[0x40]; Info *info; } E;
typedef struct List { char pad[0x1c4]; E **arr; char pad2[0xc]; int idx; } List;
typedef struct Sub { char pad[0x40]; List *list; } Sub;
typedef struct O { char pad[0x1c]; Sub sub; char pad2[0xbc - 0x60]; int xbc; } O;
typedef struct Self { char pad[0x174]; O *o; } Self;
int fn_8242D4E0(Self *self)
{
  O *o = self->o; Sub *s = &o->sub; E *e; if (s->list->idx == -1) e = 0; else e = s->list->arr[s->list->idx]; if (e->info->xf8 != 0 && o->xbc <= 2) return 3; return 2;
}
