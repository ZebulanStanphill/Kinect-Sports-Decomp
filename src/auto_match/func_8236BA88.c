typedef struct Sub_8236BA88 { struct SubVT_8236BA88 *vt; } Sub_8236BA88;
typedef struct SubVT_8236BA88 { void *s0; void *s1; void (*f8)(Sub_8236BA88 *); } SubVT_8236BA88;
typedef struct Owner_8236BA88 { char pad[0x8c0]; char pad2[0x90]; } Owner_8236BA88;
typedef struct Mgr_8236BA88 { char pad[0x8c0]; struct { char pad[0x90]; int f90; } *f8c0; } Mgr_8236BA88;
typedef struct Item_8236BA88 {
  struct ItemVT_8236BA88 *vt;
  char pad[0x10];
  Mgr_8236BA88 *f14;
  char pad2[0x24 - 0x18];
  Sub_8236BA88 *f24;
} Item_8236BA88;
typedef struct ItemVT_8236BA88 { char pad[0x24]; void (*f24)(Item_8236BA88 *, int); } ItemVT_8236BA88;
typedef struct List_8236BA88 { unsigned pad[2]; unsigned count; } List_8236BA88;
typedef struct Owner2_8236BA88 { void **items; int pad[3]; int cur; } Owner2_8236BA88;
extern Item_8236BA88 *fn_822ABA88(void *list, unsigned idx);

void fn_8236BA88(Owner2_8236BA88 *o)
{
  unsigned i = 0;
  unsigned n = ((List_8236BA88 *)o->items[o->cur])->count;
  if (n != 0) {
    do {
      Item_8236BA88 *it = fn_822ABA88(o->items[o->cur], i);
      if (it->f24 != 0) it->f24->vt->f8(it->f24);
      if (it->f24 != 0) {
        it->f24 = 0;
        it->f14->f8c0->f90 = 0;
        ((ItemVT_8236BA88 *)it->vt)->f24(it, 0);
      }
      i++;
    } while (i < n);
  }
}
