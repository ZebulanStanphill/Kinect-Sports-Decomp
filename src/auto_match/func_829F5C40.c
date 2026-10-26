typedef struct Obj Obj;
typedef void (*Fn)(Obj *o, int a, void **out);
struct Obj { char **vt; };
extern void fn_82645218(int a, void *r);
extern Obj *lbl_83218C34;

void fn_829F5C40(int a, int b)
{
    void *r = 0;
    if (lbl_83218C34 != 0) {
        (*(Fn *)(*(char **)lbl_83218C34 + 0x78))(lbl_83218C34, b, &r);
        if (r != 0) {
            fn_82645218(a, r);
        }
    }
}
