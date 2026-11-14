typedef struct {
  unsigned int type;  /* 0x00 */
  int id;             /* 0x04 */
  int arg;            /* 0x08 */
  int w3;             /* 0x0c */
  int value;          /* 0x10 */
  int extra;          /* 0x14 */
  int w6, w7, w8, w9;
} Event_82FFD1F0;
typedef struct { char pad[0x4a4]; char queue[1]; } Self_82FFD1F0;
extern void fn_82FFCF20(Self_82FFD1F0 *self);
extern void fn_8300EE60(void *queue, int id, int value, int one, int extra, int arg);

int fn_82FFD1F0(Self_82FFD1F0 *self, Event_82FFD1F0 ev)
{
  int extra, value;
  fn_82FFCF20(self);
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
