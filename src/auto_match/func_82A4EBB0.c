/* Resets the object: clears its counters and tables, releases eight owned buffers via fn_82A4F4E0,
   then clears the 0x4c..0x70 and 0x70..0xb8 blocks (which include the released pointers). */
extern void *memset(void *dst, int value, unsigned int size);
extern void fn_82A4F4E0(void *p);

typedef struct Obj_82A4EBB0 {
    int pad0[9];
    char f24[0x28];         /* 0x24 */
    char f4c[8];            /* 0x4c */
    void *p54;              /* 0x54 */
    void *p58;              /* 0x58 */
    char f5c[0x14];         /* 0x5c */
    char f70[0x10];         /* 0x70 */
    void *p80;              /* 0x80 */
    char f84[0x14];         /* 0x84 */
    void *p98;              /* 0x98 */
    char f9c[0x14];         /* 0x9c */
    void *pb0;              /* 0xb0 */
    int pb4;                /* 0xb4 */
    int b8[6];              /* 0xb8 */
    void *pd0;              /* 0xd0 */
    void *pd4;              /* 0xd4 */
    void *pd8;              /* 0xd8 */
    int dc[8];              /* 0xdc */
} Obj_82A4EBB0;

void fn_82A4EBB0(Obj_82A4EBB0 *o)
{
    memset(o->f24, 0, 0x28);
    o->b8[0] = 0;
    o->b8[1] = 0;
    o->b8[2] = 0;
    o->b8[3] = 0;
    o->b8[4] = 0;
    o->b8[5] = 0;
    o->dc[0] = 0;
    o->dc[1] = 0;
    o->dc[2] = 0;
    o->dc[3] = 0;
    o->dc[4] = 0;
    o->dc[5] = 0;
    o->dc[6] = 0;
    o->dc[7] = 0;
    if (o->pd0 != 0) {
        fn_82A4F4E0(o->pd0);
        o->pd0 = 0;
    }
    if (o->pd4 != 0) {
        fn_82A4F4E0(o->pd4);
        o->pd4 = 0;
    }
    if (o->pd8 != 0) {
        fn_82A4F4E0(o->pd8);
        o->pd8 = 0;
    }
    if (o->p54 != 0) {
        fn_82A4F4E0(o->p54);
        o->p54 = 0;
    }
    if (o->p58 != 0) {
        fn_82A4F4E0(o->p58);
        o->p58 = 0;
    }
    if (o->p80 != 0) {
        fn_82A4F4E0(o->p80);
        o->p80 = 0;
    }
    if (o->p98 != 0) {
        fn_82A4F4E0(o->p98);
        o->p98 = 0;
    }
    if (o->pb0 != 0) {
        fn_82A4F4E0(o->pb0);
        o->pb0 = 0;
    }
    memset(o->f4c, 0, 0x24);
    memset(o->f70, 0, 0x48);
}
