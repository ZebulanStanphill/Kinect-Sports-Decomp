extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82E1C410(void *mem);

typedef struct {
    int x0;
    void *inst;
} Obj_830B49D8;

void *fn_830B49D8(Obj_830B49D8 *o)
{
    if (o->inst == 0) {
        void *mem = fn_8265C9E0(0x54);
        o->inst = mem ? fn_82E1C410(mem) : 0;
    }
    return o->inst;
}
