typedef struct C_828B1340 {
    char pad0[0x4c];
    char *data;
} C_828B1340;

typedef struct B_828B1340 {
    char pad0[0x18];
    C_828B1340 *c;
} B_828B1340;

typedef struct A_828B1340 {
    char pad0[0x64];
    B_828B1340 *b;
} A_828B1340;

extern unsigned char fn_828B0528(void);
extern A_828B1340 *fn_8289D8D0(void *self);
extern unsigned int fn_828B0ED0(void *p, int a, int b);

int fn_828B1340(void *self)
{
    if (fn_828B0528() != 0) {
        char *p = fn_8289D8D0(self)->b->c->data + 0x38;
        switch (fn_828B0ED0(p, 0, 0)) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 1;
        case 3:
            return 1;
        case 4:
            return 1;
        case 5:
            return 1;
        case 6:
            return 1;
        case 7:
            return 1;
        }
    }
    return 0;
}
