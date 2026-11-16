typedef struct Resource_82A10800 {
    char reserved00[0x34];
    void *data; /* 0x34 */
} Resource_82A10800;

extern unsigned int fn_82A93E40(unsigned int, unsigned int, unsigned int, unsigned int, int, int, int,
                                unsigned int, int, int, int, Resource_82A10800 *, int, int);
extern void *fn_8265C940(unsigned int, unsigned int);
extern void fn_82A93F70(Resource_82A10800 *, void *);

int fn_82A10800(void *self, unsigned int first, unsigned int second, unsigned int third, unsigned int fourth,
                int mode, int sixth, unsigned int unused, Resource_82A10800 *resource, unsigned int *out)
{
    unsigned int size =
        fn_82A93E40(first, second, third, fourth, mode, sixth, 0, 1, 0, -1, 0, resource, 0, 0);
    void *data = fn_8265C940(size, ((~mode & 4) << 26) | 0xac9c0000U);
    resource->data = data;
    if (data == 0) {
        *out = 0;
        return 0x8007000e;
    }
    fn_82A93F70(resource, data);
    *out = size;
    return 0;
}
