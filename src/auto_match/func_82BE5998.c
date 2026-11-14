typedef struct O_82BE5998 {
    void *vt;               /* 0x00 */
    char pad4[0x18];
    void *f1c;              /* 0x1c */
    char pad20[0x10];
    void *f30;              /* 0x30 */
    char pad34[0x10];
    long active;            /* 0x44 */
} O_82BE5998;

extern long _InterlockedCompareExchange(long volatile *target, long exchange, long comparand);
extern char lbl_820E9334[];
extern void (*lbl_831751CC)(void *);
extern void fn_82BE5230(void *);

void fn_82BE5998(O_82BE5998 *o)
{
  o->vt = lbl_820E9334;
  if (_InterlockedCompareExchange(&o->active, 0, 1) != 0 && o->f1c != 0) {
    lbl_831751CC(o->f1c);
    o->f1c = 0;
  }
  if (o->f30 != 0) {
    lbl_831751CC(o->f30);
    o->f30 = 0;
  }
  fn_82BE5230(o);
}
