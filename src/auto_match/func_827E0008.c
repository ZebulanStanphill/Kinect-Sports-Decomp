typedef struct Mgr_827E0008 Mgr_827E0008;
typedef struct Item_827E0008 Item_827E0008;

extern Item_827E0008 *fn_827DF1D0(Mgr_827E0008 *self, int key);
extern int fn_827E25F8(Item_827E0008 *item);
extern void fn_827E25C8(Item_827E0008 *item);
extern unsigned char fn_827E2600(Item_827E0008 *item);
extern void fn_827DFB88(Mgr_827E0008 *self, Item_827E0008 *item);

int fn_827E0008(Mgr_827E0008 *self, int key, Item_827E0008 **out)
{
    unsigned int result = 0xffff;
    *out = fn_827DF1D0(self, key);
    if (*out != 0) {
        if ((unsigned short)fn_827E25F8(*out) == 0)
            return result;
        fn_827E25C8(*out);
        result = fn_827E25F8(*out);
        if ((unsigned short)result == 0 && fn_827E2600(*out) != 0)
            fn_827DFB88(self, *out);
    }
    return result;
}
