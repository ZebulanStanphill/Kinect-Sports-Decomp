typedef struct State_82594968 {
    int pad[3];
    void *a;          /* 0x0c */
    void *b;          /* 0x10 */
} State_82594968;

typedef struct Sub_82594968 Sub_82594968;
typedef struct SubVt_82594968 {
    void *s[15];
    void *(*get)(Sub_82594968 *);   /* 0x3c */
} SubVt_82594968;
struct Sub_82594968 {
    SubVt_82594968 *vt;
};

typedef struct Obj_82594968 Obj_82594968;
typedef struct ObjVt_82594968 {
    void *s0;
    void *s1;
    char *(*owner)(Obj_82594968 *);  /* 0x08 */
} ObjVt_82594968;
struct Obj_82594968 {
    ObjVt_82594968 *vt;
    int pad[31];
    State_82594968 *state;           /* 0x80 */
};

extern unsigned char fn_8288B760(Obj_82594968 *p);
extern void fn_828AB870(void *list, void *item);

void fn_82594968(Obj_82594968 *p)
{
    if (fn_8288B760(p)) {
        void *a = p->state->a;
        if (a != 0) {
            fn_828AB870(p->vt->owner(p) + 0x48, a);
        }
        fn_828AB870(p->vt->owner(p) + 0x9c, p->state->b);
    } else {
        Sub_82594968 *s = (Sub_82594968 *)(p->vt->owner(p) + 0x9c);
        p->state->b = s->vt->get(s);
    }
}
