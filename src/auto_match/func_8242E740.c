extern char *fn_8242C1B8();

typedef struct { char pad[0x1c4]; int *tab; int pad1c8[3]; int cur; } Mgr_8242E740;
typedef struct { char pad[0x40]; char *m40; } Item_8242E740;
typedef struct { char pad[0x40]; Mgr_8242E740 *mgr; } Sub_8242E740;

int fn_8242E740(char *param_1)
{
  Sub_8242E740 *s;
  Item_8242E740 *it;
  char *o;
  int r;

  s = (Sub_8242E740 *)(*(char **)(param_1 + 0x174) + 0x1c);
  if (s->mgr->cur == -1 || (it = (Item_8242E740 *)s->mgr->tab[s->mgr->cur]) == 0) {
    r = 0;
  } else {
    o = it->m40;
    if (*(int *)(o + 0xf8) == 0) {
      return *(int *)(fn_8242C1B8() + 0x2c);
    }
    r = *(int *)(o + 0x204) != 0;
  }
  return r;
}
