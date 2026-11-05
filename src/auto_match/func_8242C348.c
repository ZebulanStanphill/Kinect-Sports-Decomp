extern int fn_82250A18();
extern int fn_8242C1B8();
extern unsigned int lbl_832975B0;

typedef struct { char pad[0xf8]; int f_f8; } Dat_8242C348;
typedef struct { char pad[0x40]; Dat_8242C348 *f40; } Item_8242C348;
typedef struct { char pad[0x40]; struct { char pad[0x1c4]; Item_8242C348 **arr; char pad2[0x1d4 - 0x1c8]; int idx; } *f40; } Hold_8242C348;
typedef struct { char pad[0xbc]; unsigned int fbc; } Tail_8242C348;
typedef struct { char pad[0x174]; char *s174; } Obj_8242C348;

unsigned char fn_8242C348(char *p)
{
  Hold_8242C348 *h = (Hold_8242C348 *)(*(char **)(p + 0x174) + 0x1c);
  Item_8242C348 *it;
  int a, b;
  char *g;

  if (h->f40->idx == -1)
    it = 0;
  else
    it = h->f40->arr[h->f40->idx];
  if (it->f40->f_f8 == 0)
    return 0;
  g = (char *)lbl_832975B0;
  if (lbl_832975B0 == 0)
    g = (char *)fn_82250A18();
  if (*(unsigned char *)(g + 4) != 0)
    a = 1;
  else
    a = *(int *)(fn_8242C1B8(p) + 0x2c) + 1;
  b = *(int *)(*(char **)(p + 0x174) + 0xbc);
  return a < b;
}
