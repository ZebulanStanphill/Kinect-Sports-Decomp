extern void *memset(void *dst, int c, unsigned int n);
extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct Obj_82BE5050 {
    unsigned char pad[0x18];
    unsigned char data[0x24];
} Obj_82BE5050;

void fn_82BE5050(Obj_82BE5050 *o, const void *src)
{
    if (src != 0) {
        memset(o->data, 0, 0x24);
        memcpy(o->data, src, 0x24);
    }
}
