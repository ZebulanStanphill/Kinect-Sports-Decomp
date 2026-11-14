typedef struct Obj_8269AEB8 {
    int f0;
    int f4;
    int count;
    unsigned int pad0 : 2;
    unsigned int isFrozen : 1;
    unsigned int isType : 1;
    unsigned int rest : 28;
} Obj_8269AEB8;

typedef struct Ref_8269AEB8 {
    Obj_8269AEB8 *obj;
} Ref_8269AEB8;

extern unsigned int fn_82693A98(Ref_8269AEB8 *ref);
extern unsigned int fn_82693B08(Ref_8269AEB8 *ref, int index);
extern void fn_82695128(Ref_8269AEB8 *out, Ref_8269AEB8 *ref);
extern void fn_826944C8(Obj_8269AEB8 *obj);

static __forceinline void Release(Ref_8269AEB8 *ref)
{
    Obj_8269AEB8 *obj = ref->obj;
    if (--obj->count == 0)
        fn_826944C8(obj);
}

static __forceinline void Assign(Ref_8269AEB8 *dst, Ref_8269AEB8 *src)
{
    Obj_8269AEB8 *obj = src->obj;
    obj->count++;
    Release(dst);
    dst->obj = obj;
}

int fn_8269AEB8(Ref_8269AEB8 *self, Ref_8269AEB8 *out)
{
    Ref_8269AEB8 item;
    if ((unsigned char)self->obj->isFrozen)
        return 1;
    if (fn_82693A98(self) == 0)
        return 0;
    if (fn_82693B08(self, 0) != 0x5f)
        return 0;
    fn_82695128(&item, self);
    if ((unsigned char)item.obj->isType) {
        if (out != 0)
            Assign(out, &item);
        Release(&item);
        return 1;
    }
    Release(&item);
    return 0;
}
