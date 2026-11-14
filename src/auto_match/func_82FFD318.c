typedef struct {
  unsigned int type;  /* 0x00 */
  int id;             /* 0x04 */
  int arg;            /* 0x08 */
  int w3;             /* 0x0c */
  int value;          /* 0x10 */
  int extra;          /* 0x14 */
  int w6, w7, w8;
} Event_82FFD318;
typedef struct { char pad[0x4a4]; char queue[1]; } Self_82FFD318;
extern int fn_82FFCDE0(Self_82FFD318 *self, Event_82FFD318 ev, int value, int mode, unsigned char flag);
extern void fn_8300EE60(void *queue, int id, int value, int result, int extra, int arg);

int fn_82FFD318(Self_82FFD318 *self, Event_82FFD318 ev)
{
  int result, extra, value;
  result = fn_82FFCDE0(self, ev, ev.value, ev.extra == 1 ? 1 : 2, 1);
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
  fn_8300EE60(self->queue, ev.id, value, result, extra, ev.arg);
  return result;
}
