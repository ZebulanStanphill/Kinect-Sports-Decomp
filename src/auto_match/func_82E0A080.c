typedef struct { char b[0x30]; } E30;
typedef struct { char pad[0x14]; int count; } Hdr;
typedef struct { char pad[0x1c]; Hdr *hdr; E30 *items; } Obj;
extern int fn_82CFBBF0(E30 *, int);

int fn_82E0A080(Obj *o, int key)
{
  int i;

  for (i = 0; i < o->hdr->count; i++) {
    if (fn_82CFBBF0(&o->items[i], key) == 0)
      return i;
  }
  return -1;
}
