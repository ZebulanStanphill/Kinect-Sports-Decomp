#include <string.h>

typedef struct Obj_828F4C10 {
    char pad0[0x3c];
    int packMatrix;               /* 0x3c */
    char pad40[0x4c - 0x40];
    int done;                     /* 0x4c */
    char pad50[0x278 - 0x50];
    int handle;                   /* 0x278 */
    char pad27c[0x4];
    int state;                    /* 0x280 */
    char pad284[0x4];
    union {
        char text[4];
        char *name;
    } token;                      /* 0x288 */
    char pad28c[0x29c - 0x28c];
    int flag;                     /* 0x29c */
    int arg;                      /* 0x2a0 */
} Obj_828F4C10;

extern char lbl_82027240[]; /* "(" */
extern char lbl_821C24F0[]; /* ")" */
extern char lbl_820292F8[]; /* "row_major" */
extern char lbl_820292E8[]; /* "column_major" */

extern int fn_828FBB60(int handle, int arg, int *state);
extern int fn_828FAF58(int handle, int x);

int fn_828F4C10(Obj_828F4C10 *o)
{
    int hr;
    int *state = &o->state;
    char *mode;

    hr = fn_828FBB60(o->handle, o->arg, state);
    if (hr < 0)
        goto done;
    if (*state != 1 || strcmp(o->token.text, lbl_82027240) != 0)
        goto bad;
    hr = fn_828FBB60(o->handle, o->arg, state);
    if (hr < 0)
        goto done;
    if (*state == 9) {
        mode = o->token.name;
        hr = fn_828FBB60(o->handle, o->arg, state);
        if (hr < 0)
            goto done;
    } else {
        mode = 0;
    }
    if (*state != 1 || strcmp(o->token.text, lbl_821C24F0) != 0)
        goto bad;
    hr = fn_828FBB60(o->handle, o->arg, state);
    if (hr < 0)
        goto done;
    if (*state != 0xc && *state != 0xd)
        goto bad;
    if (mode == 0) {
        o->packMatrix = 0;
    } else if (strcmp(mode, lbl_820292F8) == 0) {
        o->packMatrix = 0x400;
    } else if (strcmp(mode, lbl_820292E8) == 0) {
        o->packMatrix = 0x800;
    } else {
        goto bad;
    }
    hr = 0;
    goto done;
bad:
    if (*state != 0xc && *state != 0xd)
        fn_828FAF58(o->handle, 0);
    o->flag = 0;
    hr = 0;
done:
    o->done = 1;
    return hr;
}
