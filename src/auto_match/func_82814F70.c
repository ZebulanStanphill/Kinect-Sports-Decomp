typedef struct Sub_82814F70 Sub_82814F70;
typedef struct {
    char pad[0x10];
    void (*cb)(void *, unsigned int);
} Callee_82814F70;
typedef struct {
    char pad[0x51];
    unsigned char count;
    char pad2[0x5c - 0x52];
    unsigned int f5c;
    char pad3[0x70 - 0x60];
    unsigned int f70;
} Info_82814F70;
typedef struct {
    char pad0[0x10];
    unsigned int flags;
    char pad1[4];
    void *owner;
    Info_82814F70 *info;
    char pad2[0x30 - 0x20];
    unsigned char *table;
    unsigned int base;
    char pad3[0x80 - 0x38];
    void *obj80;
} Obj_82814F70;

extern unsigned char fn_8281FDF0(Obj_82814F70 *, const char *);
extern void fn_82814BF0(Obj_82814F70 *);
extern void fn_82815198(void *);
extern void fn_8265CA20(void *);
extern void fn_828201D0(Obj_82814F70 *);
extern void fn_828142D8(unsigned int, Callee_82814F70 **);
extern void (*lbl_8320A4E8[])();

void fn_82814F70(Obj_82814F70 *o)
{
    void *p80;
    unsigned char i;
    unsigned char *e;
    Callee_82814F70 *c;

    if (o != 0) {
        if (fn_8281FDF0(o, ".instance") != 0) {
            fn_82814BF0(o);
        }
        p80 = o->obj80;
        if (p80 != 0) {
            fn_82815198(p80);
            fn_8265CA20(p80);
        }
        fn_828201D0(o);
        if ((o->flags & 0x100) != 0 && o->info->count != 0) {
            i = 0;
            do {
                e = o->table + i * 0x21;
                if (*(unsigned int *)(e + 0xd) != 0) {
                    fn_828142D8(o->base + *(unsigned int *)e, &c);
                    if (c != 0) {
                        c->cb(o->owner, *(unsigned int *)(e + 0xd));
                    }
                }
                i = i + 1;
            } while (i < o->info->count);
        }
        if ((o->flags & 0x20) != 0) {
            ((void (*)(void *, unsigned int))lbl_8320A4E8[4])(o->owner, o->info->f5c);
            if (o->info->f70 != 0) {
                ((void (*)(void *, unsigned int))lbl_8320A4E8[4])(o->owner, o->info->f70);
            }
        }
        if ((o->flags & 0x10) != 0) {
            ((void (*)(void *, void *))lbl_8320A4E8[4])(o->owner, o);
        }
    }
}
