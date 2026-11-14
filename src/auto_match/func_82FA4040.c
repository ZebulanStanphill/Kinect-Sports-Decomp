extern void *XMemSet(void *dst, int value, unsigned int size);
extern char lbl_8216CB10[];

typedef struct Obj_82FA4040 {
    char *vt;
    int f4;
    int f8;
    char blockC[0x60];
    int pad6c[2];
    int f74;
    int f78;
    int f7c;
    int pad80[4];
    char block90[0x40];
    char blockD0[0x40];
    char block110[0x10];
    char block120[0x10];
    char block130[0x10];
    char block140[0x40];
    char block180[0x40];
    char block1C0[0x40];
} Obj_82FA4040;

Obj_82FA4040 *fn_82FA4040(Obj_82FA4040 *o)
{
    o->f8 = 0;
    o->vt = lbl_8216CB10;
    XMemSet(o->blockC, 0, 0x60);
    o->f4 = 0;
    o->f74 = 0;
    o->f78 = 0;
    o->f7c = 0;
    XMemSet(o->block110, 0, 0x10);
    XMemSet(o->block130, 0, 0x10);
    XMemSet(o->blockD0, 0, 0x40);
    XMemSet(o->block120, 0, 0x10);
    XMemSet(o->block90, 0, 0x40);
    XMemSet(o->block140, 0, 0x40);
    XMemSet(o->block180, 0, 0x40);
    XMemSet(o->block1C0, 0, 0x40);
    return o;
}
