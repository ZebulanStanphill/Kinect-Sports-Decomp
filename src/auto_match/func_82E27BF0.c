typedef struct Properties_82E27BF0 Properties_82E27BF0;

typedef struct PropertyVtable_82E27BF0 {
    void *reserved[21];
    int (*set)(Properties_82E27BF0 *, const void *, unsigned int);
} PropertyVtable_82E27BF0;

struct Properties_82E27BF0 {
    PropertyVtable_82E27BF0 *vt;
};

extern const char lbl_821535B8[];
extern const char lbl_821535C8[];
extern const char lbl_821535A8[];
extern const char lbl_82153678[];

int fn_82E27BF0(Properties_82E27BF0 *self, unsigned __int64 flags)
{
    int result = 0;
    if (flags & 3) {
        result = self->vt->set(self, lbl_821535B8, (unsigned int)flags & 3);
        if (result < 0)
            return result;
    }
    if (flags & 0x1c) {
        result = self->vt->set(self, lbl_821535C8, (unsigned int)(flags >> 2) & 7);
        if (result < 0)
            return result;
    }
    if (flags & 0x60) {
        result = self->vt->set(self, lbl_821535A8, (unsigned int)(flags >> 5) & 3);
        if (result < 0)
            return result;
    }
    if (flags & 0x20000)
        result = self->vt->set(self, lbl_82153678, 1);
    return result;
}
