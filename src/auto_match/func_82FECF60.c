typedef struct Entry_82FECF60 {
    struct Entry_82FECF60 *next;
    unsigned int id;
    int state;
    int pad[2];
    void *pending;
} Entry_82FECF60;

extern Entry_82FECF60 *lbl_831BC794;
extern int fn_82FECEE8(int code, unsigned int id);
extern void *fn_82FECE48(unsigned int id);
extern void fn_82FEF6B8(void *p, int v);

int fn_82FECF60(unsigned int id)
{
    Entry_82FECF60 *e;

    for (e = lbl_831BC794; e != 0; e = e->next) {
        if (e->id == id) {
            if ((e->state == 0 || e->state == 1) && e->pending == 0) {
                fn_82FEF6B8(fn_82FECE48(id), 1);
                return 1;
            }
            break;
        }
    }
    return fn_82FECEE8(2, id);
}
