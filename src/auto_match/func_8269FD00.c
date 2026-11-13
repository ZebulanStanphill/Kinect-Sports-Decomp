typedef struct Data_8269FD00 {
    char pad[0x78];
    char *base;            /* 0x78 */
} Data_8269FD00;

typedef struct Obj_8269FD00 Obj_8269FD00;
typedef struct ObjVtbl_8269FD00 {
    char pad[0x58];
    Data_8269FD00 *(*GetData)(Obj_8269FD00 *self);   /* 0x58 */
} ObjVtbl_8269FD00;

struct Obj_8269FD00 {
    ObjVtbl_8269FD00 *vt;
    char pad4[0x7c];
    int cached;            /* 0x80 */
};

extern char *fn_8269F500(Obj_8269FD00 *self);

static __forceinline char *Obj_GetCached(Obj_8269FD00 *self)
{
    if (self->cached != 0)
        return (char *)self->cached;
    return fn_8269F500(self);
}

char *fn_8269FD00(Obj_8269FD00 *self)
{
    char *p = Obj_GetCached(self);
    if (p != 0)
        return p + 0x10;
    p = Obj_GetCached(self);
    if (p != 0)
        return p + 8;
    return self->vt->GetData(self)->base + 8;
}
