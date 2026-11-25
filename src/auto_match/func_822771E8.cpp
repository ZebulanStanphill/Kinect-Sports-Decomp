struct Value_822771E8;

typedef struct Vec2_822771E8 {
    float x;
    float y;
} Vec2_822771E8;

typedef struct Cursor_822771E8 {
    int pad00;
    int movie; /* 0x04 */
    char pad08[0xc - 0x8];
    Vec2_822771E8 target; /* 0x0c */
    char pad14[0x24 - 0x14];
    float x; /* 0x24 */
    float y; /* 0x28 */
    char pad2c[0x3c - 0x2c];
    int progress; /* 0x3c */
    char pad40;
    unsigned char visible;  /* 0x41 */
    unsigned char onTarget; /* 0x42 */
} Cursor_822771E8;

extern "C" unsigned char fn_822773C8(Cursor_822771E8 *self, Vec2_822771E8 *target);
extern "C" unsigned char fn_82277B18(Cursor_822771E8 *self);
extern "C" unsigned char fn_82277D58(Cursor_822771E8 *self);
extern "C" void fn_82277768(Cursor_822771E8 *self, float dt, unsigned char show);
extern "C" unsigned char fn_82277E48(Cursor_822771E8 *self, unsigned char onTarget, float dt);
extern "C" void fn_822778E8(Cursor_822771E8 *self, float dt, unsigned char changed);
extern "C" void fn_8266F628(int movie, int hidden);
extern "C" void fn_82273CD8(Value_822771E8 *value, int type);
extern "C" void fn_82273C88(Value_822771E8 *value);
extern "C" void fn_82672C20(int movie, const char *path, Value_822771E8 *args, int count);

struct Value_822771E8 {
    int w0;        /* 0x0 */
    int type;      /* 0x4 */
    double number; /* 0x8 */

    __forceinline Value_822771E8()
    {
        w0 = 0;
        type = 0;
    }

    __forceinline ~Value_822771E8()
    {
        fn_82273C88(this);
    }
};

extern "C" void fn_822771E8(Cursor_822771E8 *self, float dt)
{
    unsigned char onTarget;

    {
        Vec2_822771E8 target;

        target.x = -100.0f;
        target.y = -100.0f;
        onTarget = fn_822773C8(self, &target);
        if (onTarget) {
            onTarget = fn_82277B18(self) & onTarget;
            onTarget = fn_82277D58(self) & onTarget;
        }
        if (onTarget)
            self->target = target;
    }
    fn_82277768(self, dt, self->onTarget != 0 && onTarget);
    fn_822778E8(self, dt, fn_82277E48(self, onTarget, dt));
    if (self->movie != 0) {
        Value_822771E8 value;
        double progress = self->progress;

        fn_82273CD8(&value, 3);
        value.number = progress;
        fn_82672C20(self->movie, "SetProgress", &value, 1);
    }
    self->onTarget = onTarget;
    if (self->movie != 0) {
        unsigned char show = self->visible != 0 && onTarget;

        if (show) {
            fn_8266F628(self->movie, 0);
            {
                Value_822771E8 args[2];
                float x = self->x;
                float y;

                fn_82273CD8(&args[0], 3);
                args[0].number = x;
                y = self->y;
                fn_82273CD8(&args[1], 3);
                args[1].number = y;
                fn_82672C20(self->movie, "_root.SetCursorPosition", args, 2);
            }
        } else {
            fn_8266F628(self->movie, 1);
        }
    }
}
