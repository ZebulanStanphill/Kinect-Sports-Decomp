typedef struct Record_825C39A8 Record_825C39A8;
struct Record_825C39A8 {
    unsigned short size;        /* 0x00 */
    unsigned short repeat;      /* 0x02 */
    unsigned short more;        /* 0x04 */
    unsigned short pad6;
    char name[0x44];            /* 0x08 */
    Record_825C39A8 *next;      /* 0x4c */
};

typedef struct RecordList_82564458 {
    Record_825C39A8 *first;
} RecordList_82564458;

typedef struct Owner_82564458 {
    char pad0[0x4c];
    void *count;
    char pad50[0x1bc - 0x50];
    RecordList_82564458 records;
} Owner_82564458;

extern int fn_82593540(const char *name);
extern void fn_825C3A68(Record_825C39A8 *rec, void *a, void *b, void *c);

int fn_82564458(Owner_82564458 *self, int id, void *arg)
{
    RecordList_82564458 *list = &self->records;
    Record_825C39A8 *rec;
    int found;
    int again;

    if (list == 0)
        return 0;
    if (self->count == 0)
        return 0;
    rec = list->first;
    found = 0;
    again = 0;
    while (rec != 0) {
        if (fn_82593540(rec->name) == id) {
            fn_825C3A68(rec, arg, self, 0);
            found = 1;
            if (rec->repeat != 0)
                again = 1;
        }
        if (rec->more == 0) {
            if (found && !again)
                break;
            rec = rec->next;
            again = 0;
        } else {
            rec = (Record_825C39A8 *)((char *)rec + rec->size);
        }
    }
    return found;
}
