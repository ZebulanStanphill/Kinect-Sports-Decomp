typedef struct Ref_8228D9E8 { int a; void *ref; } Ref_8228D9E8;
typedef struct Value_8228D9E8 { int first; int second; double number; } Value_8228D9E8;
typedef struct Movie_8228D9E8 { int handle; char pad[0x418 - 4]; int state; } Movie_8228D9E8;
typedef struct Obj_8228D9E8 { char pad[0x178]; Movie_8228D9E8 *movie; } Obj_8228D9E8;

extern const float lbl_821CA45C[2];
extern void fn_822315A0(void *);
extern void fn_82273C88(Value_8228D9E8 *);
extern void fn_82273CD8(Value_8228D9E8 *, int);
extern int *fn_82279C58(Ref_8228D9E8 *, int);
extern void fn_82672C20(int, const char *, Value_8228D9E8 *, int);

void fn_8228D9E8(Obj_8228D9E8 *self, float progress)
{
    Movie_8228D9E8 *movie = self->movie;
    Ref_8228D9E8 r;
    Value_8228D9E8 v;

    if (movie != 0 && movie->state == 1) {
        if (progress > lbl_821CA45C[1]) {
            progress = lbl_821CA45C[1];
        }
        v.first = 0;
        v.second = 0;
        fn_82273CD8(&v, 3);
        v.number = progress;
        fn_82672C20(*fn_82279C58(&r, movie->handle), "_root.SetProgress", &v, 1);
        if (r.ref != 0) {
            fn_822315A0(r.ref);
        }
        fn_82273C88(&v);
    }
}
