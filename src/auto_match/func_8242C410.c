typedef struct { int *begin; int *end; } Vec_8242C410;
typedef struct { char pad0[0x40]; unsigned int mode; } Mode_8242C410;
typedef struct { char pad0[0x1c4]; int *begin; int *end; } List_8242C410;
typedef struct {
  char pad0[0x5c];
  List_8242C410 *list;
  char pad60[0x5c];
  int count;
} Info_8242C410;
typedef struct {
  char pad0[0x8];
  Vec_8242C410 *items;
  char padc[0x94];
  Mode_8242C410 *modeObj;
  char pada4[0xd0];
  Info_8242C410 *info;
} Self_8242C410;

int fn_8242C410(Self_8242C410 *self)
{
  if (((int)self->modeObj == 0 || self->modeObj->mode != 1) &&
      self->info->list->end - self->info->list->begin != 1)
    return self->items->end - self->items->begin;
  return self->info->count;
}
