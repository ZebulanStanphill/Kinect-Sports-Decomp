typedef struct Record_825C39A8 Record_825C39A8;
struct Record_825C39A8 {
    unsigned short size;        /* 0x00 */
    unsigned short repeat;      /* 0x02 */
    unsigned short more;        /* 0x04 */
    unsigned short pad6;
    char name[0x44];            /* 0x08 */
    Record_825C39A8 *next;      /* 0x4c */
};
typedef void (*Handler_825C39A8)(Record_825C39A8 *rec, void *a, void *b, void *c);
extern int fn_82593540(const char *name);
extern void fn_825C3A68(Record_825C39A8 *rec, void *a, void *b, void *c);

int fn_825C39A8(Record_825C39A8 *rec, int id, Handler_825C39A8 handler, void *a, void *b, void *c)
{
    int found;
    int again;

    if (handler == 0)
        handler = fn_825C3A68;
    found = 0;
    again = 0;
    while (rec != 0) {
        if (fn_82593540(rec->name) == id) {
            handler(rec, a, b, c);
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
