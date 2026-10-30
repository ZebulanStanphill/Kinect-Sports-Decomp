typedef struct Chan_82886CB0 { unsigned base; int pad; unsigned latest; } Chan_82886CB0;
typedef struct Item_82886CB0 Item_82886CB0;
typedef struct Vt_82886CB0 { void *pad; int (*kind)(Item_82886CB0 *); } Vt_82886CB0;
struct Item_82886CB0 {
  Vt_82886CB0 *vt; char pad[0x20]; unsigned char flag; char pad2; unsigned short seq; char pad3[8]; Item_82886CB0 *next;
};
typedef struct { Item_82886CB0 *head; } List_82886CB0;
extern int *lbl_83212A1C;

void fn_82886CB0(Chan_82886CB0 **chans, List_82886CB0 *list)
{
  Item_82886CB0 *it = list->head;
  while (it != 0) {
    if (lbl_83212A1C[it->vt->kind(it)] > 0 && it->flag != 0) {
      unsigned seq = it->seq;
      int k = it->vt->kind(it);
      Chan_82886CB0 *c = chans[k];
      unsigned latest = c->latest;
      unsigned win = 1 << lbl_83212A1C[k];
      unsigned ref = c->base - (win >> 1);
      if (ref > win)
        ref += win;
      if (latest > ref) {
        if (seq >= ref && seq < latest)
          c->latest = seq;
      } else {
        if (seq >= ref || seq < latest)
          c->latest = seq;
      }
    }
    it = it->next;
  }
}
