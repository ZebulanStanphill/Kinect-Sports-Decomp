typedef char *va_list;
void __cdecl __va_start(va_list *, ...);
#define va_start(ap, x) (__va_start(&(ap), (x)))
#define va_end(ap) ((ap) = (va_list)0)

typedef struct Obj_826A91F0 Obj_826A91F0;

typedef struct {
    void (*slot0)(Obj_826A91F0 *self);
    void (*log)(Obj_826A91F0 *self, int kind, int fmt, va_list args);
} Vtbl_826A91F0;

struct Obj_826A91F0 {
    Vtbl_826A91F0 *vt;
};

extern unsigned char fn_826E7458(void);
extern Obj_826A91F0 *fn_826E7430(int a);

void fn_826A91F0(int a, int fmt, ...)
{
    va_list args;
    Obj_826A91F0 *o;

    va_start(args, fmt);
    if (fn_826E7458() != 0) {
        o = fn_826E7430(a);
        if (o != 0) {
            o->vt->log(o, 0x33, fmt, args);
        }
    }
}
