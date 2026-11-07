typedef struct Event_82A2C180 {
  int header[4];
} Event_82A2C180;

typedef struct ThreadCtl_82A2C180 {
  void *thread;
  int pad04[3];
  Event_82A2C180 event;
  int quit;
} ThreadCtl_82A2C180;

extern ThreadCtl_82A2C180 lbl_83219CE0;

long KeSetEvent(void *event, long increment, unsigned char wait);
long KeWaitForSingleObject(void *object, int reason, char mode,
                           unsigned char alertable, void *timeout);
void ObDereferenceObject(void *object);

int fn_82A2C180(void)
{
  lbl_83219CE0.quit = 1;
  KeSetEvent(&lbl_83219CE0.event, 1, 0);
  KeWaitForSingleObject(lbl_83219CE0.thread, 3, 1, 0, 0);
  ObDereferenceObject(lbl_83219CE0.thread);
  return 0;
}
