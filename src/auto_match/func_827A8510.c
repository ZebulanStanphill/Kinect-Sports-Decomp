struct Stack_827A8510 { unsigned int isSmall : 1; unsigned int rest : 31; unsigned int count; char pad[20]; unsigned char smallCount; };
struct Info_827A8510 { unsigned short kind : 4; unsigned short rest : 12; unsigned char bits : 7; unsigned char active : 1; unsigned char pad; };
struct Elem_827A8510 { unsigned short a; unsigned short b; struct Info_827A8510 info; };
static __forceinline unsigned char IsPlain(const struct Info_827A8510 *info)
{
    return info->active && info->kind == 0;
}
static __forceinline unsigned int SmallCount(const struct Stack_827A8510 *self) { return self->smallCount; }
static __forceinline unsigned int LargeCount(const struct Stack_827A8510 *self) { return self->count; }
static __forceinline unsigned int IsSmall(const struct Stack_827A8510 *self) { return self->isSmall; }
unsigned char fn_827A8510(struct Stack_827A8510 *self)
{
    unsigned int isSmall = self->isSmall;
    unsigned int count;
    char *items;
    struct Elem_827A8510 *top;
    count = isSmall ? SmallCount(self) : LargeCount(self);
    if (count != 0) {
        items = isSmall ? (char *)self + 30 : (char *)self + 42;
        top = (struct Elem_827A8510 *)(items + count * 8);
        return top[-1].info.active && !IsPlain(&top[-1].info);
    }
    return 0;
}
