typedef struct Obj83000058 {
    char pad[0x64];
    void *child;
} Obj83000058;

int fn_830272A8(void *child, unsigned char value);

int fn_83000058(Obj83000058 *p, unsigned char value)
{
    int result = 1;
    if (p->child != 0) {
        result = fn_830272A8(p->child, value);
    }
    return result;
}
