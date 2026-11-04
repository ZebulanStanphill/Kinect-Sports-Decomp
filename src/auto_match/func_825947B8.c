extern int *fn_8243CD40(char *, unsigned int *);
extern void fn_82517E78(void *);
extern void fn_82594EC8(unsigned int *);
extern int lbl_821C7A78[];
extern int lbl_821C7AD8[];
extern char lbl_83296FF4[];

typedef struct { void *vt; int pad[0x19]; void *vt68; int pad2[5]; int *obj80; } Obj_825947B8;

void fn_825947B8(Obj_825947B8 *p)
{
    unsigned int x;
    int *rc;
    char *o;
    char *sub;
    unsigned char flag;

    p->vt = lbl_821C7A78;
    p->vt68 = lbl_821C7AD8;
    o = ((char *(*)(Obj_825947B8 *))lbl_821C7A78[2])(p);
    sub = o + 0xf0;
    flag = ((unsigned char (*)(char *))(*(int **)sub)[0xf])(sub);
    x = flag;
    if (x != 0) {
        rc = fn_8243CD40(lbl_83296FF4, &x);
        *rc = *rc - 1;
        if (*rc == 0) {
            fn_82594EC8(&x);
        }
    }
    if (p->obj80 != 0) {
        p->obj80[8] = 0;
    }
    fn_82517E78(p);
}
