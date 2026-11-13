typedef struct Obj_82F94650 {
    int pad0;
    int pad4;
    long refs;            /* 0x08 */
} Obj_82F94650;

extern long _InterlockedDecrement(long volatile *target);
extern void fn_82F94268(Obj_82F94650 *self);

void fn_82F94650(Obj_82F94650 *self, int arg)
{
    long refs = _InterlockedDecrement(&self->refs);

    if (refs == 0)
        fn_82F94268(self);
}
