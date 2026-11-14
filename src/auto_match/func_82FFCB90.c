typedef struct {
  unsigned int type;  /* 0x00 */
  int id;             /* 0x04 */
  int arg;            /* 0x08 */
  int w3;             /* 0x0c */
  int value;          /* 0x10 */
  int extra;          /* 0x14 */
  int w6, w7, w8, w9;
} Event_82FFD1F0;
typedef struct {
  char pad0[0x4c];
  int count;          /* 0x4c */
} Item_82FFCB90;
typedef struct {
  char pad0[0x39c];
  char items[0x4a4 - 0x39c];  /* 0x39c */
  char queue[1];              /* 0x4a4 */
} Self_82FFCB90;
extern Item_82FFCB90 *fn_8302B618(void *items, int id);
extern void fn_82FFBD98(Item_82FFCB90 *item, int flag);
extern void fn_8300EE60(void *queue, int id, int value, int one, int extra, int arg);

int fn_82FFCB90(Self_82FFCB90 *self, Event_82FFD1F0 ev)
{
  int extra, value;
  Item_82FFCB90 *item = fn_8302B618(self->items, ev.value);
  if (item != 0) {
    if (item->count != 0) {
      item->count--;
    }
    fn_82FFBD98(item, 0);
  }
  extra = -1;
  value = 0;
  switch (ev.type) {
  case 0:
  case 1:
    extra = ev.extra;
    value = ev.value;
    break;
  case 4:
    break;
  case 6:
  case 7:
    value = ev.value;
    break;
  default:
    value = ev.value == 1 ? ev.extra : 0;
    break;
  }
  fn_8300EE60(self->queue, ev.id, value, 1, extra, ev.arg);
  return 1;
}
