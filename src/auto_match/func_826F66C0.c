/* Reads the header byte of a record through a cursor (pointer + count);
   the cursor's pointer store stays on the stack as a dead store. */
typedef struct Cursor826F66C0 {
    unsigned char *pos;
    int count;
} Cursor826F66C0;

void fn_826F66C0(unsigned char *out, unsigned char *rec)
{
    Cursor826F66C0 cur;
    unsigned char **pos;

    cur.pos = rec + 4;
    pos = &cur.pos;
    *out = **pos & 0x5f;
}
