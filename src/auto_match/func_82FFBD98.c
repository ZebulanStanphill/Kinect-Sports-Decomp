extern long _InterlockedDecrement(long *);

typedef struct Obj_82FFBD98 Obj_82FFBD98;
struct Obj_82FFBD98 {
    void (**vt)(Obj_82FFBD98 *, int);
    int pad4[2];
    void *key;      /* 0x0c */
    int pad10[12];
    long refs;      /* 0x40 */
    long pending;   /* 0x44 */
};

extern void fn_8302B530(void);
extern void fn_8302B540(void);
extern void fn_8302B660(void *table, void *key);
extern void fn_82FF90A8(Obj_82FFBD98 *o);
extern void fn_82FF9FA8(Obj_82FFBD98 *o);
extern void fn_82FFB900(char *list, Obj_82FFBD98 *o);
extern void fn_82FA5190(void *heap, void *p);
extern void *lbl_831BC768;
extern char *lbl_832642F0;

void fn_82FFBD98(Obj_82FFBD98 *o, unsigned char force)
{
    void *heap;

    long n;
    fn_8302B530();
    if (force) {
        o->pending = 0;
        n = 0;
    } else {
        n = _InterlockedDecrement(&o->pending);
    }
    if (n <= 0) {
        fn_82FFB900(lbl_832642F0, o);
        if (o->refs <= 0) {
            fn_8302B660(lbl_832642F0 + 0x39c, o->key);
            fn_8302B540();
            fn_82FF9FA8(o);
            fn_82FF90A8(o);
            heap = lbl_831BC768;
            (*o->vt)(o, 0);
            fn_82FA5190(heap, o);
            return;
        }
    }
    fn_8302B540();
}
