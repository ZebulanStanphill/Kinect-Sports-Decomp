typedef struct Obj_82BD93C8 {
    char pad[0x20];
    int value;            /* 0x20 */
} Obj_82BD93C8;

extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern Obj_82BD93C8 *fn_82BD8FE0(void *mem);

int fn_82BD93C8(Obj_82BD93C8 **out, int value)
{
    int hr;
    void *mem;
    Obj_82BD93C8 *obj;

    hr = 0;
    if (out == 0) {
        hr = 0x80004003;
    } else {
        mem = fn_8265C940(0x844, 0x608a2002);
        obj = mem ? fn_82BD8FE0(mem) : 0;
        if (obj != 0) {
            obj->value = value;
            *out = obj;
        } else {
            hr = 0x8007000e;
        }
    }
    return hr;
}
