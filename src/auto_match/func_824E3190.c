long _InterlockedExchangeAdd(long volatile *addend, long value);

typedef struct Listener_824E3190 Listener_824E3190;
typedef struct ListenerVt_824E3190 {
    void (*f0)(Listener_824E3190 *);
    void (*f4)(Listener_824E3190 *);
    void (*notify)(Listener_824E3190 *, int);
} ListenerVt_824E3190;
struct Listener_824E3190 {
    ListenerVt_824E3190 *vt;
};

extern void *fn_82544F40(void *p);
extern void *fn_825597C0(void);
extern void *fn_8266EC60(void);
extern void *fn_8266EFC0(void *a, int b, void *c, void *d);
extern void fn_82BA02A8(void);
extern Listener_824E3190 **fn_824BC7E8(void);
extern long lbl_83281120;
extern int lbl_8320A898;

void fn_824E3190(void *arg)
{
    void *a = fn_825597C0();
    fn_82544F40(fn_8266EFC0(fn_8266EC60(), 0, a, arg));
    fn_82BA02A8();
    if (_InterlockedExchangeAdd(&lbl_83281120, 0) != 0) {
        int v = lbl_8320A898;
        Listener_824E3190 *l = *fn_824BC7E8();
        if (l != 0)
            l->vt->notify(l, v);
    }
}
