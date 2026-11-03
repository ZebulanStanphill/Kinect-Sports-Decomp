typedef struct { void *h; unsigned z; unsigned __int64 q; } Req_82CE19A8;
extern int XamSessionRefObjByHandle(unsigned __int64, void **);
extern int XMsgStartIORequest(int, int, unsigned, void *, int);
extern void ObDereferenceObject(void *);
extern void *fn_82A2B798();

unsigned int fn_82CE19A8(unsigned __int64 handle, unsigned int ev)
{
  void *obj;
  Req_82CE19A8 r;
  unsigned int rc;

  rc = XamSessionRefObjByHandle(handle, &obj);
  if (rc == 0) {
    r.h = obj;
    r.z = 0;
    r.q = 0;
    if (XMsgStartIORequest(0xfb, 0xb0015, ev, &r, 0x10) < 0) {
      rc = 0x65b;
    } else if (ev == 0) {
      rc = fn_82A2B798() != 0 ? 0x65b : 0;
    } else {
      rc = 0x3e5;
    }
    ObDereferenceObject(obj);
  }
  return rc;
}
