typedef struct Function_824734B8 {
    const void *manager;
    void (*fn)(void);
    int pad[2];
    struct Function_824734B8 *impl;
} Function_824734B8;

typedef struct Global_824734B8 {
    char pad0[0x1c];
    int current;                   /* 0x1c */
} Global_824734B8;

typedef struct Self_824734B8 {
    char pad0[0x34];
    int fading;                    /* 0x34 */
} Self_824734B8;

extern Global_824734B8 lbl_831D44F0;
extern const char lbl_821B44EC[];
extern const float lbl_821917A8[];
extern const float lbl_821CA45C[2];

extern void fn_82473498(void);
extern void fn_825521F0(float from, float to, Function_824734B8 *done);

void fn_824734B8(Self_824734B8 *self)
{
    Function_824734B8 done;
    void (*fn)(void) = fn_82473498;

    lbl_831D44F0.current = -1;
    if (fn == 0) {
        done.impl = 0;
    } else {
        done.manager = lbl_821B44EC;
        done.fn = fn;
        done.impl = &done;
    }
    fn_825521F0(lbl_821CA45C[1], lbl_821917A8[3], &done);
    self->fading = 1;
}
