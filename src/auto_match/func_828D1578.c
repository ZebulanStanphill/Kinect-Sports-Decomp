typedef struct Session_828D1578 {
    char pad0[0x18];
    unsigned int id;
    char pad1c[0x88 - 0x1c];
    unsigned int a88;
    unsigned int a8c;
    unsigned int a90;
    char pad94[4];
    unsigned __int64 a98;
    unsigned int aa0;
    unsigned int key;
    char info[0x1c];
    unsigned char flag0;
    unsigned char flag1;
    unsigned char flag2;
} Session_828D1578;

extern void *fn_828A4ED0(unsigned int key);
extern void fn_828B1BE0(void *obj, unsigned int id, unsigned int a88, unsigned int a8c,
                        unsigned int a90, unsigned int aa0, unsigned __int64 a98,
                        unsigned char flag0, unsigned char flag1, void *info, unsigned char flag2);

int fn_828D1578(Session_828D1578 *self)
{
    void *obj = fn_828A4ED0(self->key);
    if (obj != 0) {
        fn_828B1BE0(obj, self->id, self->a88, self->a8c, self->a90, self->aa0, self->a98,
                    self->flag0, self->flag1, self->info, self->flag2);
    }
    return 1;
}
