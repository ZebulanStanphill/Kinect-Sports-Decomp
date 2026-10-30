extern void *fn_828C39A0(void *self, int id);
extern void *fn_8289F3A8(void *self, int id);
extern void fn_828D7760(void *a, void *b, int c, int d, int e);

void fn_828C3A00(void *self, int bid, int c, int aid, int d, int e)
{
    void *a = fn_828C39A0(self, aid);
    if (a != 0) {
        void *b = fn_8289F3A8(self, bid);
        if (b != 0)
            fn_828D7760(a, b, c, d, e);
    }
}
