typedef struct Obj Obj;
typedef struct ObjVt { void (*dtor)(Obj *o, int flags); } ObjVt;
struct Obj { ObjVt *vt; };
extern void fn_82FA5190(void *heap, Obj *o);
extern void fn_83027438(Obj *o);
extern void *lbl_831BC768;

void fn_82FFFFE0(char *p)
{
    *(unsigned char *)(p + 0x3d) &= 0xfe;
    if (*(Obj **)(p + 0x64) != 0) {
        void *heap;
        Obj *o;
        fn_83027438(*(Obj **)(p + 0x64));
        heap = lbl_831BC768;
        o = *(Obj **)(p + 0x64);
        if (o != 0) {
            o->vt->dtor(o, 0);
            fn_82FA5190(heap, o);
        }
        *(Obj **)(p + 0x64) = 0;
    }
}
