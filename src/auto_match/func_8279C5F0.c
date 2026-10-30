extern void *fn_8267BED0(void *p, int size, int *tag);
extern void fn_8279AC18(void *p);
extern void *fn_8279C4B8(void *mem);
typedef struct { char pad[0x14]; void *obj; } P;

void fn_8279C5F0(P *p)
{
    if (p->obj == 0) {
        int tag = 0x144;
        void *mem = fn_8267BED0(p, 0xb0, &tag);
        p->obj = mem ? fn_8279C4B8(mem) : 0;
    }
    fn_8279AC18(p);
}
