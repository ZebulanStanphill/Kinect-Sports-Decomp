typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Elem_82DEDDB0 {
    char pad0[0x20];
    __vector4 v;            /* 0x20 */
    char pad30[0x50 - 0x30];
} Elem_82DEDDB0;

typedef struct Obj_82DEDDB0 {
    char pad0[0x18];
    Elem_82DEDDB0 *elems;   /* 0x18 */
} Obj_82DEDDB0;

typedef struct Ref_82DEDDB0 {
    Obj_82DEDDB0 *obj;
    int index;
} Ref_82DEDDB0;

typedef struct Group_82DEDDB0 {
    int start;
    int count;
    int pad8;
} Group_82DEDDB0;

struct GroupTable_82DEDDB0 {
    char pad0[0x8];
    Group_82DEDDB0 *groups;     /* 0x08 */
    char pad0c[0x14 - 0xc];
    Ref_82DEDDB0 *refs;         /* 0x14 */

    void setGroupVector(int group, const __vector4 *v);
};

void GroupTable_82DEDDB0::setGroupVector(int group, const __vector4 *v)
{
    Group_82DEDDB0 *g = &groups[group];
    int i;

    for (i = 0; i < g->count; i++) {
        Ref_82DEDDB0 *r = &refs[g->start + i];
        r->obj->elems[r->index].v = *v;
    }
}
