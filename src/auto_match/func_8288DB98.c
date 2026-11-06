struct Iface_8288DB98;
typedef struct IfaceVt_8288DB98 {
  void *f0;
  unsigned int (*f4)(struct Iface_8288DB98 *);
  void *f8;
  unsigned int (*fc)(struct Iface_8288DB98 *);
  void *f10;
  unsigned int (*f14)(struct Iface_8288DB98 *);
} IfaceVt_8288DB98;
typedef struct Iface_8288DB98 { IfaceVt_8288DB98 *vt; } Iface_8288DB98;
typedef struct Item_8288DB98 { char pad[0x18]; int f18; int f1c; Iface_8288DB98 *iface; } Item_8288DB98;
typedef struct ListHdr_8288DB98 { int f0; int f4; unsigned int count; } ListHdr_8288DB98;
typedef struct List_8288DB98 { char pad[0x10]; ListHdr_8288DB98 *hdr; } List_8288DB98;
struct Owner_8288DB98;
typedef struct OwnerVt_8288DB98 { void *f0; void *f4; List_8288DB98 *(*getList)(struct Owner_8288DB98 *); } OwnerVt_8288DB98;
typedef struct Owner_8288DB98 { OwnerVt_8288DB98 *vt; } Owner_8288DB98;
extern Item_8288DB98 *fn_82897620(List_8288DB98 *l, unsigned int i);
extern unsigned char fn_82897BA8(int v);
extern int fn_8289CB70(Item_8288DB98 *it, int a, int b, int c);
extern void fn_8288CBD8(void *out, int *v);
extern void fn_8289C078(Item_8288DB98 *it, int a);
extern void fn_8289C128(Item_8288DB98 *it);

static __forceinline unsigned int Item_query4(Item_8288DB98 *it) { return it->iface != 0 ? it->iface->vt->f4(it->iface) : 0; }
static __forceinline unsigned int Item_query14(Item_8288DB98 *it) { return it->iface != 0 ? it->iface->vt->f14(it->iface) : 0; }
static __forceinline unsigned int Item_queryC(Item_8288DB98 *it) { return it->iface != 0 ? it->iface->vt->fc(it->iface) : 0; }

void fn_8288DB98(Owner_8288DB98 *o, int a, void *out)
{
  List_8288DB98 *l = o->vt->getList(o);
  unsigned int i;
  unsigned int n = l->hdr->count;
  for (i = 0; i < n; i++) {
    Item_8288DB98 *it = fn_82897620(l, i);
    if (fn_82897BA8(it->f18) == 0) {
      int v = fn_8289CB70(it, a, 1, 0);
      fn_8288CBD8(out, &v);
      if (Item_query4(it) || Item_query14(it)) {
        fn_8289C078(it, a);
      } else if (Item_queryC(it)) {
        fn_8289C128(it);
      }
    }
  }
}
