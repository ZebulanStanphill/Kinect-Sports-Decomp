typedef struct { unsigned int pos; int x4; unsigned int end; unsigned int ch; } Reader_82791758;
typedef struct { int x0; int state; Reader_82791758 reader; } Obj_82791758;
extern char lbl_820094C8[];
extern int fn_826BCD88(const char *table, unsigned short ch);
extern void fn_82791560(Reader_82791758 *r);

void fn_82791758(Obj_82791758 *self)
{
    Reader_82791758 *r;
    unsigned int ch;

    if (self->state != 2) {
        return;
    }
    r = &self->reader;
    while (r->pos < r->end) {
        ch = self->reader.ch;
        if (ch == '=' || ch == '>' || ch == '<' || ch == '/') {
            break;
        }
        if (fn_826BCD88(lbl_820094C8, ch) != 0) {
            break;
        }
        fn_82791560(r);
    }
}
