typedef struct Key_830612B8 {
    int v;
} Key_830612B8;

typedef struct Node_830612B8 Node_830612B8;

typedef struct Ent_830612B8 {
    Key_830612B8 *p;
    Node_830612B8 *node;
} Ent_830612B8;

typedef struct Vec_830612B8 {
    int pad;
    Ent_830612B8 *begin;
    Ent_830612B8 *end;
    int pad2[3];
} Vec_830612B8;

typedef struct Obj_830612B8 {
    char pad[0x18];
    int count; /* 0x18 */
    char pad2[0x10];
    Vec_830612B8 *vecs; /* 0x2c */
} Obj_830612B8;

typedef struct Plane_830612B8 {
    float a;
    float b;
    float c;
    float d;
    float extra;
} Plane_830612B8;

extern void fn_83060438(Vec_830612B8 *);
extern void fn_830677A0(void *, int, const char *);
extern void fn_830678C8(void *);
extern void fn_830679A8(void *);
extern float fn_8305DB40(Node_830612B8 *node);
extern void fn_8305D7D0(Node_830612B8 *node, Plane_830612B8 *plane);
extern int fn_83066810(Plane_830612B8 *plane, Node_830612B8 *node, float epsilon, unsigned char *onPlane);
extern float fn_82810280(Plane_830612B8 *a, Plane_830612B8 *b);

int fn_830612B8(Obj_830612B8 *o, int *errs, float epsilon, void *ctx)
{
    int ok;
    int i, j, n, run;
    Vec_830612B8 *vp;
    Ent_830612B8 e;
    int key;

    ok = 1;
    if (errs != 0) {
        *errs = 0;
    }
    if (ctx != 0) {
        fn_830677A0(ctx, o->count, "Checking normals consistency");
    }
    i = 0;
    vp = o->vecs;
    if (0 < o->count) {
        do {
            n = vp->end - vp->begin;
            fn_83060438(vp);
            j = 0;
            if (0 < n) {
                do {
                    e = vp->begin[j];
                    j++;
                    run = 1;
                    key = e.p->v;
                    while (j < n) {
                        e = vp->begin[j];
                        if (e.p->v != key) {
                            break;
                        }
                        run++;
                        j++;
                    }
                    if (run == 2 && i < key) {
                        Node_830612B8 *first;
                        Node_830612B8 *second;

                        e = vp->begin[j - 2];
                        first = e.node;
                        e = vp->begin[j - 1];
                        if (fn_8305DB40(first) > 1e-5f) {
                            second = e.node;
                            if (fn_8305DB40(second) > 1e-5f) {
                                Plane_830612B8 planeA;
                                Plane_830612B8 planeB;
                                unsigned char onPlane[2];
                                int sideA;
                                int sideB;
                                unsigned char flipped;

                                fn_8305D7D0(first, &planeA);
                                fn_8305D7D0(second, &planeB);
                                sideA = fn_83066810(&planeA, second, epsilon, &onPlane[0]);
                                sideB = fn_83066810(&planeB, first, epsilon, &onPlane[1]);
                                flipped = 0;
                                if (onPlane[0] == 0 && onPlane[1] == 0) {
                                    if (sideA != sideB) {
                                        flipped = 1;
                                    }
                                } else if (fn_82810280(&planeA, &planeB) < 0.0f) {
                                    flipped = 1;
                                }
                                if (flipped) {
                                    if (errs == 0) {
                                        return 0;
                                    }
                                    ok = 0;
                                    *errs = *errs + 1;
                                }
                            }
                        }
                    }
                } while (j < n);
            }
            if (ctx != 0) {
                fn_830679A8(ctx);
            }
            i++;
            vp++;
        } while (i < o->count);
    }
    if (ctx != 0) {
        fn_830678C8(ctx);
    }
    return ok;
}
