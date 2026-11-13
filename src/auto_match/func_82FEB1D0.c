typedef struct Obj_82FEB1D0 Obj_82FEB1D0;
typedef struct { void (*dtor)(Obj_82FEB1D0 *, int); } Vt_82FEB1D0;
struct Obj_82FEB1D0 { Vt_82FEB1D0 *vt; char pad[0x5c - 4]; int refs; };

extern void fn_82FA5190(void *heap, void *p);
extern int fn_83017558(void *a, int b, Obj_82FEB1D0 *o);
extern Obj_82FEB1D0 *fn_8301A7B8(void *a, int b);
extern void *lbl_831BC768;
extern void *lbl_832642EC;
extern void *lbl_832642FC;
extern char lbl_8326434C[];
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

int fn_82FEB1D0(int a, int b, int *out)
{
  Obj_82FEB1D0 *o;

  RtlEnterCriticalSection(lbl_8326434C);
  o = fn_8301A7B8(lbl_832642EC, b);
  if (o == 0) {
    RtlLeaveCriticalSection(lbl_8326434C);
    return 0xf;
  }
  *out = fn_83017558(lbl_832642FC, a, o);
  if (--o->refs <= 0) {
    void *heap = lbl_831BC768;
    o->vt->dtor(o, 0);
    fn_82FA5190(heap, o);
  }
  RtlLeaveCriticalSection(lbl_8326434C);
  return 1;
}
