typedef struct Msg_82CE1D08 { void *h; unsigned int p3; unsigned int p2; unsigned int z0; unsigned int z1; unsigned int z2; } Msg_82CE1D08;
extern unsigned int XamGetSystemVersion(void);
extern unsigned int XamSessionRefObjByHandle(unsigned int handle, void **out);
extern int XMsgStartIORequest(unsigned int svc, unsigned int msg, void *ov, void *buf, unsigned int cb);
extern void ObDereferenceObject(void *obj);
extern int fn_82A2B798(void);
extern void fn_82CE2380(int, unsigned int *, int *, void *);

unsigned int fn_82CE1D08(unsigned int handle, unsigned int p2, unsigned int p3, void *ov)
{
  unsigned int result;
  void *ref;
  int hr;
  Msg_82CE1D08 m;

  result = 0;
  ref = 0;
  if (XamGetSystemVersion() < 0x200ce900) {
    fn_82CE2380(0x65b, &result, &hr, ov);
  } else {
    result = XamSessionRefObjByHandle(handle, &ref);
    if (result == 0) {
      m.h = ref;
      m.p3 = p3;
      m.p2 = p2;
      m.z0 = 0;
      m.z1 = 0;
      m.z2 = 0;
      hr = XMsgStartIORequest(0xfb, 0xb001e, ov, &m, 0x18);
      if (hr < 0) {
        result = 0x65b;
      } else if (ov == 0) {
        result = fn_82A2B798() < 0 ? 0x65b : 0;
      } else {
        result = 0x3e5;
      }
    }
  }
  if (ref != 0) {
    ObDereferenceObject(ref);
  }
  return result;
}
