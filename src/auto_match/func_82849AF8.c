typedef struct Obj_82849AF8 { int f0; int f4; void *p; } Obj_82849AF8;
extern void fn_8262FEC8(void *p);

void fn_82849AF8(Obj_82849AF8 *self)
{
    Obj_82849AF8 *o = self;
    if (o->p != 0) {
        void *t = o->p;
        fn_8262FEC8(t);
        o->p = 0;
    }
}
