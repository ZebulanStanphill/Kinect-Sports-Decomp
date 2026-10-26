typedef struct Obj83000078 {
    char pad[0x64];
    void *child;
} Obj83000078;

int fn_830272B8(void *child, int value);

int fn_83000078(Obj83000078 *p, int value)
{
    int result = 1;
    if (p->child != 0) {
        result = fn_830272B8(p->child, value);
    }
    return result;
}
