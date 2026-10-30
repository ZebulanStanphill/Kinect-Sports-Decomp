typedef struct Obj {
    unsigned char pad[0x28];
    unsigned char flag;
} Obj;

int fn_8303E0D0(Obj *o, int **pp, int *len)
{
    int v = *(*pp)++;
    o->flag = v != 0;
    *pp += 3;
    *len -= 0xc;
    return 1;
}
