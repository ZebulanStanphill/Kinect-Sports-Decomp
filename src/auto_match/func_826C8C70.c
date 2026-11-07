typedef char *va_list_826C8C70;

/* MSVC va_start intrinsic: stores the address of the first variadic slot into *ap */
extern void __cdecl __va_start(va_list_826C8C70 *ap, ...);

typedef struct Obj_826C8C70 Obj_826C8C70;

typedef struct Vtbl_826C8C70 {
    void *slot0;
    void (*slot1)(Obj_826C8C70 *self, int code, int arg, va_list_826C8C70 args);
} Vtbl_826C8C70;

struct Obj_826C8C70 {
    Vtbl_826C8C70 *vt;
};

extern unsigned char fn_826E7438(void);
extern Obj_826C8C70 *fn_826E7430(int id);

void fn_826C8C70(int id, int arg, ...)
{
    va_list_826C8C70 args;
    Obj_826C8C70 *o;

    __va_start(&args, arg);
    if (fn_826E7438() != 0) {
        o = fn_826E7430(id);
        if (o != 0) {
            o->vt->slot1(o, 0x30, arg, args);
        }
    }
}
