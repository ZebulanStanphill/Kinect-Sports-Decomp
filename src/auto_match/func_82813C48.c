extern long _InterlockedIncrement(long *);

typedef struct Obj_82813C48 {
    int pad0;
    long count;             /* 0x04 */
    int pad8;
    long refs;              /* 0x0c */
} Obj_82813C48;

extern void fn_82813720(Obj_82813C48 *self);

void fn_82813C48(Obj_82813C48 *self)
{
    fn_82813720(self);
    _InterlockedIncrement(&self->refs);
    _InterlockedIncrement(&self->count);
}
