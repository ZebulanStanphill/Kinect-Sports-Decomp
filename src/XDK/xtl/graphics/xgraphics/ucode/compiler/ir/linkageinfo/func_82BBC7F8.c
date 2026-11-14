extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LINKAGE_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\linkageinfo.cpp", line)

#define REGTYPE_PSIN_VSOUT 0x21

typedef struct LinkageInfo_82BBC7F8 {
    int types[16];
    int indices[16];
    char pad80[0x3d0 - 0x80];
    int altTypes[16];
    int altIndices[16];
    char pad450[0x750 - 0x450];
    unsigned char useSlots;
} LinkageInfo_82BBC7F8;

extern unsigned char fn_82BBC410(LinkageInfo_82BBC7F8 *self, int slot);

unsigned char fn_82BBC7F8(LinkageInfo_82BBC7F8 *self, int type, int index, int *slot)
{
    int i;

    LINKAGE_ASSERT(type != REGTYPE_PSIN_VSOUT, 0x219);
    if (self->useSlots) {
        for (i = 0; i < 16; i++) {
            if (fn_82BBC410(self, i) && self->types[i] == type && self->indices[i] == index) {
                *slot = i;
                return 1;
            }
        }
    } else {
        for (i = 0; i < 16; i++) {
            if (self->altTypes[i] == type && self->altIndices[i] == index) {
                *slot = i;
                return 1;
            }
        }
    }
    return 0;
}
