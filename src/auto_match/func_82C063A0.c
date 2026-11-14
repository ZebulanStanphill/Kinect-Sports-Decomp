extern long _InterlockedDecrement(long volatile *);

typedef struct Obj_82C063A0 Obj_82C063A0;
typedef struct ObjVtbl_82C063A0 {
    void (*destroy)(Obj_82C063A0 *self, int flags);
} ObjVtbl_82C063A0;

struct Obj_82C063A0 {
    ObjVtbl_82C063A0 *vtbl;
    int pad4[2];
    unsigned long refs;
};

unsigned long fn_82C063A0(Obj_82C063A0 *self)
{
    if (self->refs == 1) {
        self->vtbl->destroy(self, 1);
        return 0;
    }
    return _InterlockedDecrement((long *)&self->refs);
}
