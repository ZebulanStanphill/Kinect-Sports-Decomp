/* Lazily creates the object cached at +0x7c: allocates 0x2c bytes and constructs it with
   fn_822B9630(mem, field +0x14, &self->+0x198), then returns the cached pointer. */
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_822B9630(void *mem, void *arg, void *data);

typedef struct Obj_822B67F8 {
    char pad0[0x14];
    void *arg;            /* 0x14 */
    char pad18[0x64];
    void *inst;           /* 0x7c */
    char pad80[0x118];
    char data[4];         /* 0x198 */
} Obj_822B67F8;

void *fn_822B67F8(Obj_822B67F8 *o)
{
    if (o->inst == 0) {
        void *mem = fn_8265C9E0(0x2c);
        o->inst = mem ? fn_822B9630(mem, o->arg, o->data) : 0;
    }
    return o->inst;
}
