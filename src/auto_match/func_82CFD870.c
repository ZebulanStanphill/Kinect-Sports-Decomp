typedef struct { int a; int b; short size; short pad; } TypeInfo_82CFD870;
extern TypeInfo_82CFD870 lbl_8317F680[];
extern int fn_82CEB1A8(void *p);

typedef struct {
    int x0;
    void *sub;
    int x8;
    unsigned char xc;
    unsigned char type;
} Obj_82CFD870;

int fn_82CFD870(Obj_82CFD870 *p)
{
    unsigned int t = p->type;
    if (t != 0x18 && t != 0x1f) {
        if (t != 0x19) {
            return lbl_8317F680[t].size;
        }
        return fn_82CEB1A8(p->sub);
    }
    return -1;
}
