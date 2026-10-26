extern char lbl_8201C888[];

typedef struct Src { int pad; int *p; } Src;
typedef struct Cursor { int cur; Src *src; } Cursor;
typedef struct It { void *vt; Cursor c; } It;

static void Cursor_init(Cursor *c, Src *s)
{
    c->cur = 0;
    c->src = s;
}

void fn_827DEB10(It *p, Src *s)
{
    p->vt = lbl_8201C888;
    Cursor_init(&p->c, s);
    p->c.cur = *s->p;
}
