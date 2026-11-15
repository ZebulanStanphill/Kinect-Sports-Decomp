typedef struct Value_8229F4F8 {
    int type;
    int flags;
    double number;
} Value_8229F4F8;

typedef struct Self_8229F4F8 {
    void *movie;
    int unknown;
    int layout;
    int unknown0c;
    int state;
    char first[0x20];
    char second[0x20];
    char third[0x20];
    char pad[0x9c - 0x74];
    unsigned short flags;
} Self_8229F4F8;

extern void fn_82273CD8(Value_8229F4F8 *value, int type);
extern void fn_82273C88(Value_8229F4F8 *value);
extern void XMemSet(void *destination, int value, unsigned int size);
extern void fn_82672C20(void *movie, const char *method, Value_8229F4F8 *args, int count);

void fn_8229F4F8(Self_8229F4F8 *self, int layout)
{
    Value_8229F4F8 value;
    if (self->layout != layout) {
        self->layout = layout;
        value.type = 0;
        value.flags = 0;
        fn_82273CD8(&value, 3);
        self->flags = 0;
        value.number = (double)layout;
        XMemSet(self->first, 0, 0x20);
        XMemSet(self->third, 0, 0x20);
        XMemSet(self->second, 0, 0x20);
        fn_82672C20(self->movie, "_root.mainCtrl.setLayout", &value, 1);
        self->state = 0;
        fn_82273C88(&value);
    }
}
