typedef struct Sub_82475F28 {
    char pad[0xa4];
    int value;
} Sub_82475F28;

typedef struct Obj_82475F28 {
    char pad[0x10];
    Sub_82475F28 sub;
} Obj_82475F28;

extern void fn_82474840(Sub_82475F28 *sub, float dt);

void fn_82475F28(Obj_82475F28 *self, float dt, int value)
{
    Sub_82475F28 *sub = &self->sub;
    sub->value = value;
    if (value != 0) {
        fn_82474840(sub, dt);
    }
}
