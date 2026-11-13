typedef struct Mgr_82D61FA0 Mgr_82D61FA0;
typedef struct {
    void *slots[5];
    void (*removeContact)(Mgr_82D61FA0 *self, unsigned short id, void *owner);
} MgrVt_82D61FA0;
struct Mgr_82D61FA0 {
    MgrVt_82D61FA0 *vt;
};
typedef struct {
    unsigned short ids[3];
    unsigned char pad[0x1a];
} Entry_82D61FA0;

Entry_82D61FA0 *fn_82D61FA0(void *self, Entry_82D61FA0 *entry, Mgr_82D61FA0 *mgr, void *owner)
{
    int i;
    for (i = 0; i < 3; i++) {
        if (entry->ids[i] != 0xffff) {
            mgr->vt->removeContact(mgr, entry->ids[i], owner);
            entry->ids[i] = 0xffff;
        }
    }
    return entry + 1;
}
