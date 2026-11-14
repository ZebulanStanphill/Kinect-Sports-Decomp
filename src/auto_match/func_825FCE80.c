typedef struct TypeEntry_825FCE80 {
    int type;
    int parent;
    int offset;
} TypeEntry_825FCE80;

typedef struct Object_825FCE80 {
    void *vt;
    int type;
} Object_825FCE80;

extern TypeEntry_825FCE80 lbl_8218DBA8[0x51];

static __forceinline int FindType(int type)
{
    unsigned int i;
    for (i = 0; i < sizeof(lbl_8218DBA8) / sizeof(lbl_8218DBA8[0]); i++) {
        if (lbl_8218DBA8[i].type == type) {
            return i;
        }
    }
    return -1;
}

Object_825FCE80 *fn_825FCE80(Object_825FCE80 *obj, int type)
{
    while (obj->type != type) {
        if (obj->type == 2) {
            return 0;
        }
        obj = (Object_825FCE80 *)((char *)obj + lbl_8218DBA8[FindType(obj->type)].offset);
    }
    return obj;
}
