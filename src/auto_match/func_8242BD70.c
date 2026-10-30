typedef struct Vt_8242BD70 { char pad[0x30]; void (*f30)(void *); } Vt;
typedef struct Item_8242BD70 { Vt *vt; } Item;
typedef struct Mgr_8242BD70 { char pad[0x1c4]; Item **arr; char pad2[0x0c]; int cur; } Mgr;
typedef struct Sub_8242BD70 { int f0[5]; int f14; int f18; int pad[9]; Mgr *f40; } Sub;
typedef struct Self_8242BD70 { char pad[0x174]; char *f174; } Self;
void fn_8242BD70(Self *self)
{
  Sub *s = (Sub *)(self->f174 + 0x1c);
  unsigned char b;
  Item *it;
  if (s->f40->cur == -1) return;
  it = s->f40->arr[s->f40->cur];
  if (it == 0) return;
  if (s->f18 == s->f14 || s->f18 == 0) b = 0; else b = 1;
  if (b) return;
  if (s->f14 != 2) return;
  it->vt->f30(it);
}
