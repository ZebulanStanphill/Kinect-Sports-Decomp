typedef struct Waiter_83055E98 {
  char pad0[0x38];
  void *event;
  int pad3c;
  int waiting;
  unsigned char signalPending;
} Waiter_83055E98;

extern unsigned char fn_82A1E810(void *event);

void fn_83055E98(Waiter_83055E98 *self)
{
  if (self->signalPending == 0)
    return;
  self->signalPending = 0;
  if (self->waiting > 0)
    fn_82A1E810(self->event);
}
