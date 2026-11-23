struct Val_82469800;

typedef struct Obj_82469800 {
    int pad0;
    int movie; /* 0x4 */
} Obj_82469800;

extern "C" unsigned short lbl_820E975C;
extern "C" void fn_82469B10(Obj_82469800 *self, unsigned short *text, float score);
extern "C" void fn_82273CD8(Val_82469800 *value, int type);
extern "C" void fn_82273C88(Val_82469800 *value);
extern "C" void fn_82672C20(int movie, const char *path, Val_82469800 *args, int count);

struct Val_82469800 {
    int w0;   /* 0x0 */
    int type; /* 0x4 */

    union {
        void *p;
        double d;
    } u; /* 0x8 */

    __forceinline Val_82469800()
    {
        w0 = 0;
        type = 0;
    }

    __forceinline ~Val_82469800()
    {
        fn_82273C88(this);
    }
};

extern "C" void fn_82469800(Obj_82469800 *self, unsigned int points1, unsigned int points2,
                            unsigned int points3)
{
    Val_82469800 args[3];
    unsigned short text1[0x40] = {lbl_820E975C};
    unsigned short text2[0x40] = {lbl_820E975C};
    unsigned short text3[0x40] = {lbl_820E975C};

    fn_82469B10(self, text1, (float)points1);
    fn_82469B10(self, text2, (float)points2);
    fn_82469B10(self, text3, (float)points3);
    fn_82273CD8(&args[0], 5);
    args[0].u.p = text1;
    fn_82273CD8(&args[1], 5);
    args[1].u.p = text2;
    fn_82273CD8(&args[2], 5);
    args[2].u.p = text3;
    fn_82672C20(self->movie, "_root.SetAvailablePoints", args, 3);
}
