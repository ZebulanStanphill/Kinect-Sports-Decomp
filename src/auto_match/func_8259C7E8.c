long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct {
  int pad0[2];
  long event;
} Self_8259C7E8;

extern long fn_82A1E6A0(void *attributes, int manualReset, int initialState, const char *name);
extern int fn_82A1E658(long handle);

long fn_8259C7E8(Self_8259C7E8 *self)
{
  long event = self->event;
  if (event == 0) {
    long created = fn_82A1E6A0(0, 0, 0, 0);
    event = _InterlockedCompareExchange(&self->event, created, 0);
    if (event == 0)
      event = created;
    else
      fn_82A1E658(created);
  }
  return event;
}
