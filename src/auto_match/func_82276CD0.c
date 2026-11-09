typedef struct Iface_82276CD0 Iface_82276CD0;
typedef struct IfaceVt_82276CD0 {
    void (*f0)(Iface_82276CD0 *self);
    void (*f4)(Iface_82276CD0 *self);
} IfaceVt_82276CD0;
struct Iface_82276CD0 {
    IfaceVt_82276CD0 *vt;
};

typedef struct Node_82276CD0 {
    int size;
    int pad[9];
    float time;
} Node_82276CD0;

typedef struct Obj_82276CD0 {
    int pad0[4];
    Iface_82276CD0 *listener;   /* 0x10 */
    int pad14;
    void *child;                /* 0x18 */
    int done;                   /* 0x1c */
    int pad20;
    Node_82276CD0 *node;        /* 0x24 */
    unsigned int index;         /* 0x28 */
    unsigned int count;         /* 0x2c */
    void *current;              /* 0x30 */
    int pad34[2];
    float timer;                /* 0x3c */
} Obj_82276CD0;

typedef struct Ref_82276CD0 {
    int a;
    void *p;
} Ref_82276CD0;

typedef struct Buf_82276CD0 {
    int a;
    void *p;
    int c;
    unsigned char rest[0x10B0 - 12];
} Buf_82276CD0;

extern void fn_8226D2A8(Buf_82276CD0 *b);
extern void *fn_82276E10(Ref_82276CD0 *r, Obj_82276CD0 *o);
extern void fn_823F2E20(Buf_82276CD0 *b, void *src);
extern void fn_822315A0(void *p);
extern void *fn_8226D388(Buf_82276CD0 *b);
extern void fn_8226D6A0(void *p);
extern void fn_82284B08(void *p, float dt);

void fn_82276CD0(Obj_82276CD0 *o, float dt)
{
    float t;
    float nt;
    Ref_82276CD0 ref;
    Buf_82276CD0 buf;
    void *v;
    Node_82276CD0 *p;

    t = o->timer - dt;
    o->timer = t;
    if (t <= 0.0f) {
        if (o->index < o->count) {
            fn_8226D2A8(&buf);
            fn_823F2E20(&buf, fn_82276E10(&ref, o));
            if (ref.p != 0) {
                fn_822315A0(ref.p);
            }
            buf.c = 0;
            v = fn_8226D388(&buf);
            if (o->current != 0) {
                fn_8226D6A0(o->current);
            }
            p = o->node;
            o->current = v;
            nt = p->time;
            o->index++;
            o->timer = nt;
            o->node = (Node_82276CD0 *)(p->size + (int)p);
            if (buf.p != 0) {
                fn_822315A0(buf.p);
            }
        } else if (o->done == 0) {
            if (o->listener != 0) {
                o->listener->vt->f4(o->listener);
            }
            o->done = 1;
        }
    }
    if (o->child != 0) {
        fn_82284B08(o->child, dt);
    }
}
