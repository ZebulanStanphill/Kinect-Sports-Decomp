typedef struct Desc_8295F140 {
    unsigned int flags;         /* 0x00 */
    int pad4;
    char *data;                 /* 0x08 */
    unsigned int countC;        /* 0x0c */
    int *index;                 /* 0x10 */
} Desc_8295F140;

typedef struct Obj_8295F140 {
    char pad[0x104];
    Desc_8295F140 *desc;        /* 0x104 */
} Obj_8295F140;

extern int fn_8295D318(Obj_8295F140 *, int, int *, unsigned int, void *, void *, void *, unsigned int, int, int, int, int);

int fn_8295F140(Obj_8295F140 *o)
{
    unsigned int n = o->desc->flags & 0xfffff;
    unsigned int i;
    int hr;

    for (i = 0; i < n; i++) {
        hr = fn_8295D318(o, 0x20, o->desc->index + i, 1, o->desc->data + i * 4, o->desc->data + (n + i) * 4, 0, n, 0, 0, 0, 0);
        if (hr < 0)
            return hr;
    }
    return 0;
}
