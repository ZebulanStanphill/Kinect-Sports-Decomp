long _InterlockedExchangeAdd(long volatile *addend, long value);

typedef struct Obj_8259C558 {
    int f0;
    int f4;
    long handle;
} Obj_8259C558;

extern int fn_82A1BB18(void);
extern void fn_8259C5D8(Obj_8259C558 *self, int a, int b);
extern void fn_82A1E658(long h);

void fn_8259C558(Obj_8259C558 *self)
{
    long h;
    fn_8259C5D8(self, 0, fn_82A1BB18() + 1);
    h = _InterlockedExchangeAdd(&self->handle, 0);
    if (h != 0) {
        fn_82A1E658(h);
        self->handle = 0;
    }
}
