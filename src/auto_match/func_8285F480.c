typedef struct {
    int unk0;
    int unk4;
    unsigned int mode;
    float scale;
    unsigned int kind;
    unsigned char first[0x10];
    unsigned char second[0x3c];
} Settings_8285F480;

extern Settings_8285F480 lbl_832115D0;

extern void fn_82859EF0(void *self, unsigned int mode, float scale, void *data);
extern void fn_82859FD8(void *self, unsigned int mode, float scale, void *data);

void fn_8285F480(void *self)
{
    unsigned int kind = lbl_832115D0.kind;
    if (kind >= 1) {
        if (kind != 1)
            return;
        fn_82859FD8(self, lbl_832115D0.mode, lbl_832115D0.scale, lbl_832115D0.second);
        return;
    }
    fn_82859EF0(self, lbl_832115D0.mode, lbl_832115D0.scale, lbl_832115D0.first);
}
