typedef struct Obj830002E8 {
    char pad[0x64];
    void *child;
} Obj830002E8;

int fn_83027388(void *child, unsigned char value);

int fn_830002E8(Obj830002E8 *p, unsigned char value)
{
    int result = 1;
    if (p->child != 0) {
        result = fn_83027388(p->child, value);
    }
    return result;
}
