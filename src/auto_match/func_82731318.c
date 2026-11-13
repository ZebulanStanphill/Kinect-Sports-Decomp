typedef struct RefObj_82731318 {
    void *vtable;
    int refs;
} RefObj_82731318;

typedef struct Ref_82731318 {
    RefObj_82731318 *obj;
    int a;
    int b;
} Ref_82731318;

typedef struct Args_82731318 {
    int first;
    int second;
    Ref_82731318 ref;
} Args_82731318;

extern void fn_82730CA8(void *self, Args_82731318 *args);
extern void fn_8267C498(RefObj_82731318 *obj);

void fn_82731318(void *self, int first, int second, Ref_82731318 *ref)
{
    Args_82731318 args;

    args.first = first;
    args.second = second;
    if (ref->obj != 0) {
        ref->obj->refs++;
    }
    args.ref = *ref;
    fn_82730CA8(self, &args);
    if (args.ref.obj != 0) {
        fn_8267C498(args.ref.obj);
    }
}
