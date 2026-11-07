typedef struct Obj_82D82F80 {
    int pad0[2];
    int field8;        /* 0x08 */
    int pad1[17];
    int field50;       /* 0x50 */
    int pad2[26];
    int depthBC;       /* 0xbc */
} Obj_82D82F80;

extern void fn_82CE3F80(void);
extern void fn_82CE3FE8(void);
extern void fn_82DA7F00(int a, int b, float f);
extern void fn_82DAF480(Obj_82D82F80 *p);

void fn_82D82F80(Obj_82D82F80 *p, int b, float f)
{
    if (p->field50 != 0) {
        fn_82CE3F80();
        p->depthBC = p->depthBC + 1;
        fn_82DAF480(p);
        p->depthBC = p->depthBC - 1;
        fn_82CE3FE8();
    }
    fn_82DA7F00(p->field8, b, f);
}
