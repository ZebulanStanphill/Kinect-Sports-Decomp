extern void *__imp_ExThreadObjectType;
extern int ObReferenceObjectByHandle(void *handle, void *type, void **object);
extern int KeQueryBasePriorityThread(void *thread);
extern void ObDereferenceObject(void *object);
extern void fn_82A31F28(int status);

int fn_82A1E3B8(void *handle)
{
  void *thread;
  int priority;
  int hr = ObReferenceObjectByHandle(handle, __imp_ExThreadObjectType, &thread);
  if (hr >= 0) {
    priority = KeQueryBasePriorityThread(thread);
    if (priority == 16) {
      priority = 15;
    } else if (priority == -16) {
      priority = -15;
    }
    ObDereferenceObject(thread);
    return priority;
  }
  fn_82A31F28(hr);
  return 0x7fffffff;
}
