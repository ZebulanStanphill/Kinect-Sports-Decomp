extern void fn_826824B0(void *);
extern void fn_826959C8(void *);
extern void fn_82696BC8(void *, void *);
typedef struct Vt_82720318 { int p0, p1; int (*type)(void *); int pad[13]; unsigned char (*flag)(void *); } Vt_82720318;
typedef struct Itf_82720318 { Vt_82720318 *vt; } Itf_82720318;
typedef struct Item_82720318 { char pad0[8]; unsigned f8; int pad; } Item_82720318;
typedef struct P_82720318 { int p0; unsigned char *flag; Itf_82720318 *itf; } P_82720318;
void fn_82720318(P_82720318 *p)
{
  if (p->itf == 0 || p->itf->vt->type(p->itf) != 0x24 || p->itf->vt->flag(p->itf) != 0) {
    unsigned char *f = p->flag;
    fn_826959C8(f);
    *f = 1;
  } else {
    Item_82720318 *item = p->itf != 0 ? (Item_82720318 *)((char *)p->itf - 0x10) : 0;
    if (item != 0) item->f8 = (item->f8 + 1) & 0x8fffffff;
    fn_82696BC8(p->flag, item);
    if (item != 0) fn_826824B0(item);
  }
}
