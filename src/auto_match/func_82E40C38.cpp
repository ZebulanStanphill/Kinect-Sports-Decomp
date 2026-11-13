struct Obj_82E40C38 {
    int pad0[2];
    char lock[0x3c];
    unsigned int flags;   /* 0x44 */
    int pad48[2];
    int state;            /* 0x50 */
};
extern "C" void fn_82E50CB8(void *lock);
extern "C" void fn_82E50F10(void *lock);
extern "C" int fn_82E40928(Obj_82E40C38 *self, int a, int b, int c);
extern "C" int fn_82E3F480(Obj_82E40C38 *self, int state);

struct Lock_82E40C38 {
    void *m;
    Lock_82E40C38(void *p) : m(p) { fn_82E50CB8(m); }
    ~Lock_82E40C38() { fn_82E50F10(m); }
};

extern "C" int fn_82E40C38(Obj_82E40C38 *self, int a, int b, int c)
{
    Lock_82E40C38 lock(self->lock);
    if ((self->flags & 1) == 0) {
        return 0xC00D36B2;
    }
    int hr = fn_82E40928(self, a, b, c);
    if (hr >= 0) {
        hr = fn_82E3F480(self, self->state);
    }
    return hr;
}
