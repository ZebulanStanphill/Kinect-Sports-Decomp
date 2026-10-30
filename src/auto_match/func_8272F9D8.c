typedef struct Obj {
    unsigned char pad[0x8c];
    unsigned int pad_hi : 12;
    unsigned int flag : 1;
    unsigned int pad_lo : 19;
} Obj;

extern int fn_8272E030(Obj *o, unsigned int flag);
extern void fn_8269AD70(Obj *o, void *a);
extern void fn_8269AE08(Obj *o, void *a);

void fn_8272F9D8(Obj *o, void *a)
{
    switch (fn_8272E030(o, o->flag)) {
    case -1:
        fn_8269AE08(o, a);
        break;
    case 1:
        fn_8269AD70(o, a);
        break;
    }
}
