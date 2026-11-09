typedef struct Obj_82A34580 { void *first; int data[11]; int active; } Obj_82A34580;

extern void *memset(void *dst, int value, unsigned int size);
extern void *lbl_8315D3D0;

void fn_82A34580(Obj_82A34580 *o)
{
  if (o->active != 0) {
    lbl_8315D3D0 = o->first;
    memset(o, 0, 0x30);
    o->active = 0;
  }
}
