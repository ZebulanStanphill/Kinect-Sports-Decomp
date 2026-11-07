extern void *fn_82E50BE8(unsigned, unsigned, unsigned, unsigned, unsigned);
extern void *fn_82EE39D8(void *);
extern int fn_82EE32F8(void *, void *, unsigned *);
extern void fn_82EE3730(void *);
extern void fn_82E4FE40(void *);
int fn_82EE3DA8(char *self, unsigned short *out) {
    unsigned value;
    void *p, *obj;
    if (!*(void **)(self + 0xc)) return 0xc00d36b6;
    if (!out) return 0x80070057;
    *out = 0xffff;
    p = fn_82E50BE8(0x104,0,0,0,0);
    if (p) obj = fn_82EE39D8(p);
    else obj = 0;
    if (!obj) return 0x8007000e;
    if (!fn_82EE32F8(self+0x48,obj,&value)) {
        fn_82EE3730(obj);
        fn_82E4FE40(obj);
        return 0x8007000e;
    }
    *out = (unsigned short)value;
    return 0;
}
