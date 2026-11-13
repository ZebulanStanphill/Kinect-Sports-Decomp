typedef struct Sub_825166A0 Sub_825166A0;
typedef struct SubVt_825166A0 {
    void *s[15];
    char *(*get)(Sub_825166A0 *);   /* 0x3c */
} SubVt_825166A0;
struct Sub_825166A0 {
    SubVt_825166A0 *vt;
};

typedef struct Obj_825166A0 Obj_825166A0;
typedef struct ObjVt_825166A0 {
    void *s0;
    void *s1;
    char *(*owner)(Obj_825166A0 *);  /* 0x08 */
} ObjVt_825166A0;
struct Obj_825166A0 {
    ObjVt_825166A0 *vt;
    int pad[25];
    char first[0x10];                /* 0x68 */
    char second[0x10];               /* 0x78 */
};

typedef struct Snapshot_825166A0 {
    void *vt;
    int refs;
    char first[0x10];                /* 0x08 */
    char second[0x10];               /* 0x18 */
} Snapshot_825166A0;

extern char lbl_821C27D0[];
extern unsigned char fn_8288B760(Obj_825166A0 *p);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_82516F48(void *dst, void *src);
extern void fn_825170B8(void *dst, void *src);
extern void fn_82897FE8(void *list, Snapshot_825166A0 *item);

void fn_825166A0(Obj_825166A0 *p)
{
    if (fn_8288B760(p)) {
        Snapshot_825166A0 *snap = (Snapshot_825166A0 *)fn_8265C9E0(0x28);
        if (snap != 0) {
            snap->refs = 1;
            snap->vt = lbl_821C27D0;
            fn_82516F48(snap->first, p->first);
            fn_82516F48(snap->second, p->second);
        } else {
            snap = 0;
        }
        fn_82897FE8(p->vt->owner(p) + 0x48, snap);
    } else {
        Sub_825166A0 *s = (Sub_825166A0 *)(p->vt->owner(p) + 0x48);
        char *src = s->vt->get(s);
        if (src != 0) {
            fn_825170B8(p->first, src + 8);
            fn_825170B8(p->second, src + 0x18);
        }
    }
}
