void __emit(unsigned int);
/* XDK ppcintrinsics.h: __eieio() is __emit(0x7C0006AC). */
#define __eieio() __emit(0x7C0006AC)

typedef struct D { char pad[0x2a88]; int busy; } D;
typedef struct S { D *dev; int pad; int done; } S;
extern void fn_8264BDD8(D *d);

void fn_82623338(S *s)
{
    D *d;
    fn_8264BDD8(s->dev);
    d = s->dev;
    __eieio();
    d->busy = 0;
    s->done = 1;
}
