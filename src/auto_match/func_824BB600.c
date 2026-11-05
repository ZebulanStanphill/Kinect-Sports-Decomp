typedef struct { char pad[0x100]; unsigned *tab; } O_824BB600;
typedef struct { char pad[0xb50]; unsigned f50; unsigned p54, p58; unsigned f5c; } T_824BB600;
void fn_824BB600(O_824BB600 *self, unsigned id, int flag)
{
  int idx;
  if (flag != 0) {
    T_824BB600 *t = (T_824BB600 *)self->tab;
    if (t->f50 != 0) t->f50 = 0;
    t = (T_824BB600 *)self->tab;
    if (*(unsigned *)((char *)t + 0xb5c) != 0) *(unsigned *)((char *)t + 0xb5c) = 0;
    t = (T_824BB600 *)self->tab;
    if (*(unsigned *)((char *)t + 0xb60) != 0) *(unsigned *)((char *)t + 0xb60) = 0;
    t = (T_824BB600 *)self->tab;
    if (*(unsigned *)((char *)t + 0xb6c) == 0) return;
    *(unsigned *)((char *)t + 0xb6c) = 0;
    return;
  }
  switch (id) { case 0: idx = 0; break; case 1: idx = 75; break; case 2: idx = 25; break; case 3: idx = 50; break; default: return; }
  if (self->tab[idx + 744] != 0) self->tab[idx + 744] = 0;
  if (self->tab[idx + 743] != 0) self->tab[idx + 743] = 0;
  if (self->tab[idx + 745] != 0) self->tab[idx + 745] = 0;
  if (self->tab[idx + 746] != 0) self->tab[idx + 746] = 0;
  if (self->tab[idx + 747] != 0) self->tab[idx + 747] = 0;
  if (self->tab[idx + 748] != 0) self->tab[idx + 748] = 0;
  if (self->tab[idx + 749] != 0) self->tab[idx + 749] = 0;
  if (self->tab[idx + 750] != 0) self->tab[idx + 750] = 0;
  if (self->tab[idx + 751] != 0) self->tab[idx + 751] = 0;
  if (self->tab[idx + 752] != 0) self->tab[idx + 752] = 0;
  if (self->tab[idx + 753] != 0) self->tab[idx + 753] = 0;
  if (self->tab[idx + 754] != 0) self->tab[idx + 754] = 0;
  if (self->tab[idx + 755] != 0) self->tab[idx + 755] = 0;
  if (self->tab[idx + 756] != 0) self->tab[idx + 756] = 0;
  if (self->tab[idx + 757] != 0) self->tab[idx + 757] = 0;
  if (self->tab[idx + 758] != 0) self->tab[idx + 758] = 0;
  if (self->tab[idx + 759] != 0) self->tab[idx + 759] = 0;
  if (self->tab[idx + 760] != 0) self->tab[idx + 760] = 0;
  if (self->tab[idx + 761] != 0) self->tab[idx + 761] = 0;
  if (self->tab[idx + 762] != 0) self->tab[idx + 762] = 0;
}
