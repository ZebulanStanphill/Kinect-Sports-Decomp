extern long _InterlockedExchangeAdd(long *addend, long value);

typedef struct Obj_82686CA8 {
    int vt;
    long refs;
} Obj_82686CA8;

typedef struct Ref_82686CA8 {
    int state;
    Obj_82686CA8 *obj;
} Ref_82686CA8;

extern Obj_82686CA8 *fn_82686C38(Obj_82686CA8 *weak);
extern void fn_8267C4F0(Obj_82686CA8 *weak);

Obj_82686CA8 *fn_82686CA8(Ref_82686CA8 *ref)
{
    if (ref->state == 1) {
        _InterlockedExchangeAdd(&ref->obj->refs, 1);
        return ref->obj;
    }
    if (ref->state != 4) {
        Obj_82686CA8 *weak = ref->obj;
        Obj_82686CA8 *obj = fn_82686C38(weak);
        if (obj != 0) {
            ref->obj = obj;
            ref->state = 1;
            _InterlockedExchangeAdd(&obj->refs, 1);
            fn_8267C4F0(weak);
            return obj;
        }
        ref->state = 4;
    }
    return 0;
}
