#include <string.h>

typedef struct Obj_828F7470 {
    char pad0[0x18];
    char log[0x48 - 0x18];        /* 0x18 */
    int seen;                     /* 0x48 */
    int done;                     /* 0x4c */
    char pad50[0x278 - 0x50];
    int handle;                   /* 0x278 */
    char pad27c[0x4];
    int state;                    /* 0x280 */
    char pad284[0x4];
    char *name;                   /* 0x288 */
    char pad28c[0x29c - 0x28c];
    int flag;                     /* 0x29c */
    int arg;                      /* 0x2a0 */
} Obj_828F7470;

extern char lbl_820294CC[]; /* "pack_matrix" */
extern char lbl_820294C4[]; /* "warning" */
extern char lbl_820294C0[]; /* "def" */
extern char lbl_820294B4[]; /* "ruledisable" */

extern int fn_828FBB60(int handle, int arg, int *state);
extern int fn_828FAF58(int handle, int x);
extern int fn_828F4C10(Obj_828F7470 *o);
extern int fn_828F4E08(Obj_828F7470 *o);
extern int fn_828F6890(Obj_828F7470 *o);
extern int fn_828F6790(Obj_828F7470 *o);
extern void fn_828FAB00(void *log, int *a, int b, const char *fmt, ...);

int fn_828F7470(Obj_828F7470 *o)
{
    int hr;
    int *state = &o->state;
    char *name;

    hr = fn_828FBB60(o->handle, o->arg, state);
    if (hr >= 0) {
        if (*state == 9) {
            name = o->name;
            o->seen = 1;
            if (strcmp(name, lbl_820294CC) == 0)
                return fn_828F4C10(o);
            if (strcmp(name, lbl_820294C4) == 0)
                return fn_828F4E08(o);
            if (strcmp(name, lbl_820294C0) == 0)
                return fn_828F6890(o);
            if (strcmp(name, lbl_820294B4) == 0)
                return fn_828F6790(o);
            fn_828FAB00(o->log, state, 0xdf0, "'%s' : unknown pragma ignored", name);
            o->flag = 0;
        }
        if (*state != 0xc && *state != 0xd)
            fn_828FAF58(o->handle, 0);
        hr = 0;
    }
    o->done = 1;
    return hr;
}
