typedef struct Sink_82BD7080 { void (**vt)(struct Sink_82BD7080 *); } Sink_82BD7080;
typedef struct Obj_82BD7080 {
  int f0, f4;
  void *f8;
  void *voice;
  Sink_82BD7080 *sinks[7];
  unsigned nsinks;
  void *items[2];
  unsigned nitems;
  void *f3c;
  char pad40[0x60];
  char req[0x1c];
  void *fbc;
} Obj_82BD7080;
extern void XamVoiceClose(void *v);
extern void XMsgCancelIORequest(void *r, int a);
extern void fn_8265C990(void *p, unsigned tag);
extern void fn_82BD7D68(void *p);
extern void fn_82BD8098(void *p);
extern void fn_82BDC680(void *p);

void fn_82BD7080(Obj_82BD7080 *o)
{
  unsigned i;

  if (o != 0) {
    if (o->voice != 0) {
      XamVoiceClose(o->voice);
      o->voice = 0;
    }
    fn_82BDC680(o->f8);
    o->f8 = 0;
    for (i = 0; i < o->nitems; i++) {
      fn_82BD7D68(o->items[i]);
      o->items[i] = 0;
    }
    for (i = 0; i < o->nsinks; i++) {
      o->sinks[i]->vt[1](o->sinks[i]);
      o->sinks[i] = 0;
    }
    fn_82BD8098(o->f3c);
    XMsgCancelIORequest(o->req, 1);
    if (o->fbc != 0) {
      fn_8265C990(o->fbc, 0x608a2002);
      o->fbc = 0;
    }
    fn_8265C990(o, 0x618a800b);
  }
}
