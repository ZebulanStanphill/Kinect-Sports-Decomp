typedef struct RefObj_8269D380 {
    unsigned int refCount;
} RefObj_8269D380;

extern void fn_8267BE38(RefObj_8269D380 *obj);

void fn_8269D380(int param_1)
{
    RefObj_8269D380 *obj;

    obj = *(RefObj_8269D380 **)(param_1 + 0xad8);
    if (obj != 0) {
        if (--obj->refCount == 0) {
            fn_8267BE38(obj);
        }
    }
    *(RefObj_8269D380 **)(param_1 + 0xad8) = 0;
}
