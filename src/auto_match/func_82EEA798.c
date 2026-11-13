typedef struct Elem_82EEA798 Elem_82EEA798;
typedef struct { void (*dtor)(Elem_82EEA798 *, int); void *f4; void (*f8)(Elem_82EEA798 *); } Vt_82EEA798;
struct Elem_82EEA798 { Vt_82EEA798 *vt; };
typedef struct { char pad[0x4c]; int f4c; Elem_82EEA798 *list; char cs[1]; } Obj_82EEA798;

extern void fn_82A29A38(void);
extern void fn_82EE9FF0(Obj_82EEA798 *o);
extern int fn_82EEA6E8(Elem_82EEA798 *list, Elem_82EEA798 **out);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

void fn_82EEA798(Obj_82EEA798 *o)
{
  Elem_82EEA798 *e;

  if (o->f4c != 0) {
    fn_82A29A38();
  } else {
    RtlEnterCriticalSection(o->cs);
    if (o->list != 0) {
      e = 0;
      while (fn_82EEA6E8(o->list, &e) != 0) {
        if (e != 0) {
          e->vt->f8(e);
          e = 0;
        }
      }
      if (o->list != 0) {
        o->list->vt->dtor(o->list, 1);
      }
      o->list = 0;
      RtlLeaveCriticalSection(o->cs);
    }
    fn_82EE9FF0(o);
  }
}
