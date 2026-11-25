typedef struct List_82BEEDC8 {
    void *head;
    void *tail;
    int cur;
} List_82BEEDC8;

typedef struct AdObject_82BEECD0 {
    void *vtable; /* 0x00 */
    int f04[3];
    int state;           /* 0x10 */
    char *name;          /* 0x14 */
    void *handle;        /* 0x18 */
    List_82BEEDC8 list1; /* 0x1c */
    int f28[3];          /* 0x28 */
    int f34;             /* 0x34 */
    int f38;             /* 0x38 */
    int f3c;             /* 0x3c */
    unsigned char b40;   /* 0x40 */
    unsigned char b41;   /* 0x41 */
    unsigned char b42;   /* 0x42 */
    int f44;             /* 0x44 */
    unsigned short h48;  /* 0x48 */
    List_82BEEDC8 list2; /* 0x4c */
    int f58;             /* 0x58 */
} AdObject_82BEECD0;

extern char lbl_820EB148[];
extern char lbl_82196582[];
extern void fn_82BE51E8(AdObject_82BEECD0 *self, const char *className);
extern int fn_82BE5240(void *self, int code, const char *format, ...);
extern char *fn_82BE19A0(const char *s);
extern void *fn_82BE1A10(void);
extern void *fn_82BE1FF0(void *mgr);

static __forceinline int IsEmpty(const char *s)
{
    if (s == 0 || *s == 0) {
        return 1;
    }
    return 0;
}

static __forceinline void ListInit(List_82BEEDC8 *list)
{
    list->head = 0;
    list->tail = 0;
    list->cur = 0;
}

/* CMassiveAdObject constructor. */
AdObject_82BEECD0 *fn_82BEECD0(AdObject_82BEECD0 *self, const char *name, int f44, int f34, void *handle)
{
    fn_82BE51E8(self, "CMassiveAdObject");
    self->handle = handle;
    self->name = 0;
    self->vtable = lbl_820EB148;
    ListInit(&self->list1);
    self->f28[0] = 0;
    self->f28[1] = 0;
    self->f28[2] = 0;
    self->f34 = f34;
    self->f38 = 0;
    self->f3c = 0;
    self->b40 = 0;
    self->b41 = 0;
    self->b42 = 0;
    self->f44 = f44;
    self->h48 = 0;
    ListInit(&self->list2);
    self->f58 = 0;
    if (IsEmpty(name)) {
        fn_82BE5240(self, 400, lbl_82196582);
    } else {
        self->name = fn_82BE19A0(name);
        if (self->name == 0) {
            self->state = 0;
        } else if (handle == 0) {
            self->handle = fn_82BE1FF0(fn_82BE1A10());
        }
    }
    return self;
}
